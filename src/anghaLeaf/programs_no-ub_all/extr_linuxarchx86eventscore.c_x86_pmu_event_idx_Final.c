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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int idx; int flags; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {scalar_t__ num_counters_fixed; } ;

/* Variables and functions */
 int INTEL_PMC_IDX_FIXED ; 
 int PERF_X86_EVENT_RDPMC_ALLOWED ; 
 TYPE_2__ x86_pmu ; 

__attribute__((used)) static int x86_pmu_event_idx(struct perf_event *event)
{
	int idx = event->hw.idx;

	if (!(event->hw.flags & PERF_X86_EVENT_RDPMC_ALLOWED))
		return 0;

	if (x86_pmu.num_counters_fixed && idx >= INTEL_PMC_IDX_FIXED) {
		idx -= INTEL_PMC_IDX_FIXED;
		idx |= 1 << 30;
	}

	return idx + 1;
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
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event->hw.idx = ((-2 * (next_i()%2)) + 1) * next_i();
        event->hw.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = x86_pmu_event_idx(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}