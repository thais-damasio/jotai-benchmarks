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
       0            big-arr\n\
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
struct omap_video_timings {int /*<<< orphan*/  de_level; void* sync_pclk_edge; void* data_pclk_edge; } ;

/* Variables and functions */
 void* OMAPDSS_DRIVE_SIG_RISING_EDGE ; 
 int /*<<< orphan*/  OMAPDSS_SIG_ACTIVE_HIGH ; 

__attribute__((used)) static void tfp410_fix_timings(struct omap_video_timings *timings)
{
	timings->data_pclk_edge = OMAPDSS_DRIVE_SIG_RISING_EDGE;
	timings->sync_pclk_edge = OMAPDSS_DRIVE_SIG_RISING_EDGE;
	timings->de_level = OMAPDSS_SIG_ACTIVE_HIGH;
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

    // big-arr
    case 0:
    {
          int _len_timings0 = 1;
          struct omap_video_timings * timings = (struct omap_video_timings *) malloc(_len_timings0*sizeof(struct omap_video_timings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings->de_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tfp410_fix_timings(timings);
          free(timings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
