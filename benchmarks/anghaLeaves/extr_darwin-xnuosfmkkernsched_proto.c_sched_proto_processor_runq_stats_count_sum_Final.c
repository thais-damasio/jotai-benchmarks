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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned long long uint64_t ;
typedef  scalar_t__ processor_t ;
struct TYPE_3__ {unsigned long long count_sum; } ;
struct TYPE_4__ {TYPE_1__ runq_stats; } ;

/* Variables and functions */
 TYPE_2__* global_runq ; 
 scalar_t__ master_processor ; 

__attribute__((used)) static uint64_t
sched_proto_processor_runq_stats_count_sum(processor_t   processor)
{
	if (master_processor == processor) {
		return global_runq->runq_stats.count_sum;
	} else {
		return 0ULL;
	}
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
          long processor = 100;
          unsigned long long benchRet = sched_proto_processor_runq_stats_count_sum(processor);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long processor = 255;
          unsigned long long benchRet = sched_proto_processor_runq_stats_count_sum(processor);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long processor = 10;
          unsigned long long benchRet = sched_proto_processor_runq_stats_count_sum(processor);
          printf("%llu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
