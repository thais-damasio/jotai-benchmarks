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
struct TYPE_3__ {int count; } ;
struct cfq_group {TYPE_2__** service_trees; TYPE_1__ service_tree_idle; } ;
struct cfq_data {int dummy; } ;
typedef  enum wl_class_t { ____Placeholder_wl_class_t } wl_class_t ;
struct TYPE_4__ {int count; } ;

/* Variables and functions */
 size_t ASYNC_WORKLOAD ; 
 int IDLE_WORKLOAD ; 
 size_t SYNC_NOIDLE_WORKLOAD ; 
 size_t SYNC_WORKLOAD ; 

__attribute__((used)) static inline int cfq_group_busy_queues_wl(enum wl_class_t wl_class,
					struct cfq_data *cfqd,
					struct cfq_group *cfqg)
{
	if (wl_class == IDLE_WORKLOAD)
		return cfqg->service_tree_idle.count;

	return cfqg->service_trees[wl_class][ASYNC_WORKLOAD].count +
		cfqg->service_trees[wl_class][SYNC_NOIDLE_WORKLOAD].count +
		cfqg->service_trees[wl_class][SYNC_WORKLOAD].count;
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
          enum wl_class_t wl_class = 0;
          int _len_cfqd0 = 1;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
            cfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfqg0 = 1;
          struct cfq_group * cfqg = (struct cfq_group *) malloc(_len_cfqg0*sizeof(struct cfq_group));
          for(int _i0 = 0; _i0 < _len_cfqg0; _i0++) {
              int _len_cfqg__i0__service_trees0 = 1;
          cfqg[_i0].service_trees = (struct TYPE_4__ **) malloc(_len_cfqg__i0__service_trees0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_cfqg__i0__service_trees0; _j0++) {
            int _len_cfqg__i0__service_trees1 = 1;
            cfqg[_i0].service_trees[_j0] = (struct TYPE_4__ *) malloc(_len_cfqg__i0__service_trees1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_cfqg__i0__service_trees1; _j1++) {
              cfqg[_i0].service_trees[_j0]->count = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        cfqg[_i0].service_tree_idle.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfq_group_busy_queues_wl(wl_class,cfqd,cfqg);
          printf("%d\n", benchRet); 
          free(cfqd);
          for(int _aux = 0; _aux < _len_cfqg0; _aux++) {
          free(*(cfqg[_aux].service_trees));
        free(cfqg[_aux].service_trees);
          }
          free(cfqg);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum wl_class_t wl_class = 0;
          int _len_cfqd0 = 65025;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
            cfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfqg0 = 65025;
          struct cfq_group * cfqg = (struct cfq_group *) malloc(_len_cfqg0*sizeof(struct cfq_group));
          for(int _i0 = 0; _i0 < _len_cfqg0; _i0++) {
              int _len_cfqg__i0__service_trees0 = 1;
          cfqg[_i0].service_trees = (struct TYPE_4__ **) malloc(_len_cfqg__i0__service_trees0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_cfqg__i0__service_trees0; _j0++) {
            int _len_cfqg__i0__service_trees1 = 1;
            cfqg[_i0].service_trees[_j0] = (struct TYPE_4__ *) malloc(_len_cfqg__i0__service_trees1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_cfqg__i0__service_trees1; _j1++) {
              cfqg[_i0].service_trees[_j0]->count = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        cfqg[_i0].service_tree_idle.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfq_group_busy_queues_wl(wl_class,cfqd,cfqg);
          printf("%d\n", benchRet); 
          free(cfqd);
          for(int _aux = 0; _aux < _len_cfqg0; _aux++) {
          free(*(cfqg[_aux].service_trees));
        free(cfqg[_aux].service_trees);
          }
          free(cfqg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum wl_class_t wl_class = 0;
          int _len_cfqd0 = 100;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
            cfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfqg0 = 100;
          struct cfq_group * cfqg = (struct cfq_group *) malloc(_len_cfqg0*sizeof(struct cfq_group));
          for(int _i0 = 0; _i0 < _len_cfqg0; _i0++) {
              int _len_cfqg__i0__service_trees0 = 1;
          cfqg[_i0].service_trees = (struct TYPE_4__ **) malloc(_len_cfqg__i0__service_trees0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_cfqg__i0__service_trees0; _j0++) {
            int _len_cfqg__i0__service_trees1 = 1;
            cfqg[_i0].service_trees[_j0] = (struct TYPE_4__ *) malloc(_len_cfqg__i0__service_trees1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_cfqg__i0__service_trees1; _j1++) {
              cfqg[_i0].service_trees[_j0]->count = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        cfqg[_i0].service_tree_idle.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfq_group_busy_queues_wl(wl_class,cfqd,cfqg);
          printf("%d\n", benchRet); 
          free(cfqd);
          for(int _aux = 0; _aux < _len_cfqg0; _aux++) {
          free(*(cfqg[_aux].service_trees));
        free(cfqg[_aux].service_trees);
          }
          free(cfqg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
