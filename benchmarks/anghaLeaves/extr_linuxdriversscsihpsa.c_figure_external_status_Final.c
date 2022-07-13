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
struct ctlr_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int  figure_external_status(struct ctlr_info *h, int raid_ctlr_position,
	int i, int nphysicals, int nlocal_logicals)
{
	/* In report logicals, local logicals are listed first,
	* then any externals.
	*/
	int logicals_start = nphysicals + (raid_ctlr_position == 0);

	if (i == raid_ctlr_position)
		return 0;

	if (i < logicals_start)
		return 0;

	/* i is in logicals range, but still within local logicals */
	if ((i - nphysicals - (raid_ctlr_position == 0)) < nlocal_logicals)
		return 0;

	return 1; /* it's an external lun */
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
          int raid_ctlr_position = 100;
          int i = 100;
          int nphysicals = 100;
          int nlocal_logicals = 100;
          int _len_h0 = 1;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = figure_external_status(h,raid_ctlr_position,i,nphysicals,nlocal_logicals);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int raid_ctlr_position = 255;
          int i = 255;
          int nphysicals = 255;
          int nlocal_logicals = 255;
          int _len_h0 = 65025;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = figure_external_status(h,raid_ctlr_position,i,nphysicals,nlocal_logicals);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int raid_ctlr_position = 10;
          int i = 10;
          int nphysicals = 10;
          int nlocal_logicals = 10;
          int _len_h0 = 100;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = figure_external_status(h,raid_ctlr_position,i,nphysicals,nlocal_logicals);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
