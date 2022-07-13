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
struct uwb_rc {scalar_t__ active_pals; int beaconing_forced; } ;

/* Variables and functions */

__attribute__((used)) static int uwb_radio_select_channel(struct uwb_rc *rc)
{
	/*
	 * Default to channel 9 (BG1, TFC1) unless the user has
	 * selected a specific channel or there are no active PALs.
	 */
	if (rc->active_pals == 0)
		return -1;
	if (rc->beaconing_forced)
		return rc->beaconing_forced;
	return 9;
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
          int _len_rc0 = 1;
          struct uwb_rc * rc = (struct uwb_rc *) malloc(_len_rc0*sizeof(struct uwb_rc));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].active_pals = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].beaconing_forced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_radio_select_channel(rc);
          printf("%d\n", benchRet); 
          free(rc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rc0 = 65025;
          struct uwb_rc * rc = (struct uwb_rc *) malloc(_len_rc0*sizeof(struct uwb_rc));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].active_pals = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].beaconing_forced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_radio_select_channel(rc);
          printf("%d\n", benchRet); 
          free(rc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rc0 = 100;
          struct uwb_rc * rc = (struct uwb_rc *) malloc(_len_rc0*sizeof(struct uwb_rc));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].active_pals = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].beaconing_forced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_radio_select_channel(rc);
          printf("%d\n", benchRet); 
          free(rc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
