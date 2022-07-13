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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct rpc_task {TYPE_2__* tk_rqstp; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ rq_bytes_sent; TYPE_1__ rq_snd_buf; } ;

/* Variables and functions */

__attribute__((used)) static inline void
rpc_task_force_reencode(struct rpc_task *task)
{
	task->tk_rqstp->rq_snd_buf.len = 0;
	task->tk_rqstp->rq_bytes_sent = 0;
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
          int _len_task0 = 1;
          struct rpc_task * task = (struct rpc_task *) malloc(_len_task0*sizeof(struct rpc_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__tk_rqstp0 = 1;
          task[_i0].tk_rqstp = (struct TYPE_4__ *) malloc(_len_task__i0__tk_rqstp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_task__i0__tk_rqstp0; _j0++) {
            task[_i0].tk_rqstp->rq_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].tk_rqstp->rq_snd_buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_task_force_reencode(task);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].tk_rqstp);
          }
          free(task);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_task0 = 65025;
          struct rpc_task * task = (struct rpc_task *) malloc(_len_task0*sizeof(struct rpc_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__tk_rqstp0 = 1;
          task[_i0].tk_rqstp = (struct TYPE_4__ *) malloc(_len_task__i0__tk_rqstp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_task__i0__tk_rqstp0; _j0++) {
            task[_i0].tk_rqstp->rq_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].tk_rqstp->rq_snd_buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_task_force_reencode(task);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].tk_rqstp);
          }
          free(task);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_task0 = 100;
          struct rpc_task * task = (struct rpc_task *) malloc(_len_task0*sizeof(struct rpc_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__tk_rqstp0 = 1;
          task[_i0].tk_rqstp = (struct TYPE_4__ *) malloc(_len_task__i0__tk_rqstp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_task__i0__tk_rqstp0; _j0++) {
            task[_i0].tk_rqstp->rq_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].tk_rqstp->rq_snd_buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_task_force_reencode(task);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].tk_rqstp);
          }
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
