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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct cfq_data {scalar_t__ hw_tag; int /*<<< orphan*/  cfq_slice_idle; } ;

/* Variables and functions */

__attribute__((used)) static inline bool iops_mode(struct cfq_data *cfqd)
{
	/*
	 * If we are not idling on queues and it is a NCQ drive, parallel
	 * execution of requests is on and measuring time is not possible
	 * in most of the cases until and unless we drive shallower queue
	 * depths and that becomes a performance bottleneck. In such cases
	 * switch to start providing fairness in terms of number of IOs.
	 */
	if (!cfqd->cfq_slice_idle && cfqd->hw_tag)
		return true;
	else
		return false;
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
          int _len_cfqd0 = 1;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
            cfqd[_i0].hw_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        cfqd[_i0].cfq_slice_idle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iops_mode(cfqd);
          printf("%d\n", benchRet); 
          free(cfqd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
