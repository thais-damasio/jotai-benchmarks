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
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u32 ;
struct ena_stats {scalar_t__ stat_offset; } ;
struct ena_adapter {TYPE_1__* ena_dev; } ;
struct TYPE_4__ {int /*<<< orphan*/  stats; } ;
struct TYPE_3__ {TYPE_2__ admin_queue; } ;

/* Variables and functions */
 int ENA_STATS_ARRAY_ENA_COM ; 
 struct ena_stats* ena_stats_ena_com_strings ; 

__attribute__((used)) static void ena_dev_admin_queue_stats(struct ena_adapter *adapter, u64 **data)
{
	const struct ena_stats *ena_stats;
	u32 *ptr;
	int i;

	for (i = 0; i < ENA_STATS_ARRAY_ENA_COM; i++) {
		ena_stats = &ena_stats_ena_com_strings[i];

		ptr = (u32 *)((uintptr_t)&adapter->ena_dev->admin_queue.stats +
			(uintptr_t)ena_stats->stat_offset);

		*(*data)++ = *ptr;
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
          int _len_adapter0 = 1;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__ena_dev0 = 1;
          adapter[_i0].ena_dev = (struct TYPE_3__ *) malloc(_len_adapter__i0__ena_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ena_dev0; _j0++) {
            adapter[_i0].ena_dev->admin_queue.stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ena_dev_admin_queue_stats(adapter,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].ena_dev);
          }
          free(adapter);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__ena_dev0 = 1;
          adapter[_i0].ena_dev = (struct TYPE_3__ *) malloc(_len_adapter__i0__ena_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ena_dev0; _j0++) {
            adapter[_i0].ena_dev->admin_queue.stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ena_dev_admin_queue_stats(adapter,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].ena_dev);
          }
          free(adapter);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__ena_dev0 = 1;
          adapter[_i0].ena_dev = (struct TYPE_3__ *) malloc(_len_adapter__i0__ena_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ena_dev0; _j0++) {
            adapter[_i0].ena_dev->admin_queue.stats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ena_dev_admin_queue_stats(adapter,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].ena_dev);
          }
          free(adapter);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
