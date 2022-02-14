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
struct task_struct {scalar_t__ policy; } ;
struct rq {int dummy; } ;

/* Variables and functions */
 scalar_t__ SCHED_RR ; 
 unsigned int sched_rr_timeslice ; 

__attribute__((used)) static unsigned int get_rr_interval_rt(struct rq *rq, struct task_struct *task)
{
	/*
	 * Time slice is 0 for SCHED_FIFO tasks
	 */
	if (task->policy == SCHED_RR)
		return sched_rr_timeslice;
	else
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

    // big-arr
    case 0:
    {
          int _len_rq0 = 1;
          struct rq * rq = (struct rq *) malloc(_len_rq0*sizeof(struct rq));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_task0 = 1;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task->policy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_rr_interval_rt(rq,task);
          printf("%u\n", benchRet); 
          free(rq);
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
