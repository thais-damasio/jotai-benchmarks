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
struct qed_rdma_start_in_params {TYPE_2__* events; } ;
struct qed_rdma_events {int /*<<< orphan*/  context; int /*<<< orphan*/  affiliated_event; int /*<<< orphan*/  unaffiliated_event; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int /*<<< orphan*/  context; int /*<<< orphan*/  affiliated_event; int /*<<< orphan*/  unaffiliated_event; } ;
struct TYPE_3__ {struct qed_rdma_events events; } ;

/* Variables and functions */

__attribute__((used)) static void qed_rdma_init_events(struct qed_hwfn *p_hwfn,
				 struct qed_rdma_start_in_params *params)
{
	struct qed_rdma_events *events;

	events = &p_hwfn->p_rdma_info->events;

	events->unaffiliated_event = params->events->unaffiliated_event;
	events->affiliated_event = params->events->affiliated_event;
	events->context = params->events->context;
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_rdma_info0 = 1;
          p_hwfn[_i0].p_rdma_info = (struct TYPE_3__ *) malloc(_len_p_hwfn__i0__p_rdma_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_rdma_info0; _j0++) {
            p_hwfn[_i0].p_rdma_info->events.context = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 1;
          struct qed_rdma_start_in_params * params = (struct qed_rdma_start_in_params *) malloc(_len_params0*sizeof(struct qed_rdma_start_in_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              int _len_params__i0__events0 = 1;
          params[_i0].events = (struct TYPE_4__ *) malloc(_len_params__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_params__i0__events0; _j0++) {
            params[_i0].events->context = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_rdma_init_events(p_hwfn,params);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_rdma_info);
          }
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].events);
          }
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_rdma_info0 = 1;
          p_hwfn[_i0].p_rdma_info = (struct TYPE_3__ *) malloc(_len_p_hwfn__i0__p_rdma_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_rdma_info0; _j0++) {
            p_hwfn[_i0].p_rdma_info->events.context = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 65025;
          struct qed_rdma_start_in_params * params = (struct qed_rdma_start_in_params *) malloc(_len_params0*sizeof(struct qed_rdma_start_in_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              int _len_params__i0__events0 = 1;
          params[_i0].events = (struct TYPE_4__ *) malloc(_len_params__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_params__i0__events0; _j0++) {
            params[_i0].events->context = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_rdma_init_events(p_hwfn,params);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_rdma_info);
          }
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].events);
          }
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_rdma_info0 = 1;
          p_hwfn[_i0].p_rdma_info = (struct TYPE_3__ *) malloc(_len_p_hwfn__i0__p_rdma_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_rdma_info0; _j0++) {
            p_hwfn[_i0].p_rdma_info->events.context = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].p_rdma_info->events.unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 100;
          struct qed_rdma_start_in_params * params = (struct qed_rdma_start_in_params *) malloc(_len_params0*sizeof(struct qed_rdma_start_in_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              int _len_params__i0__events0 = 1;
          params[_i0].events = (struct TYPE_4__ *) malloc(_len_params__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_params__i0__events0; _j0++) {
            params[_i0].events->context = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->affiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].events->unaffiliated_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_rdma_init_events(p_hwfn,params);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_rdma_info);
          }
          free(p_hwfn);
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].events);
          }
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
