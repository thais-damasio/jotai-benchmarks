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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ initial_skip; } ;
struct intel_pt {TYPE_1__ synth_opts; int /*<<< orphan*/  num_events; } ;

/* Variables and functions */

__attribute__((used)) static inline bool intel_pt_skip_event(struct intel_pt *pt)
{
	return pt->synth_opts.initial_skip &&
	       pt->num_events++ < pt->synth_opts.initial_skip;
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
          int _len_pt0 = 1;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].synth_opts.initial_skip = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_skip_event(pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pt0 = 65025;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].synth_opts.initial_skip = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_skip_event(pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pt0 = 100;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].synth_opts.initial_skip = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_skip_event(pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
