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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct dispc_device {int* fifo_assignment; scalar_t__* fifo_size; TYPE_1__* feat; } ;
typedef  enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {int num_fifos; } ;

/* Variables and functions */

__attribute__((used)) static u32 dispc_ovl_get_fifo_size(struct dispc_device *dispc,
				   enum omap_plane_id plane)
{
	int fifo;
	u32 size = 0;

	for (fifo = 0; fifo < dispc->feat->num_fifos; ++fifo) {
		if (dispc->fifo_assignment[fifo] == plane)
			size += dispc->fifo_size[fifo];
	}

	return size;
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
          enum omap_plane_id plane = 0;
          int _len_dispc0 = 1;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
              int _len_dispc__i0__fifo_assignment0 = 1;
          dispc[_i0].fifo_assignment = (int *) malloc(_len_dispc__i0__fifo_assignment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispc__i0__fifo_assignment0; _j0++) {
            dispc[_i0].fifo_assignment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispc__i0__fifo_size0 = 1;
          dispc[_i0].fifo_size = (long *) malloc(_len_dispc__i0__fifo_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dispc__i0__fifo_size0; _j0++) {
            dispc[_i0].fifo_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispc__i0__feat0 = 1;
          dispc[_i0].feat = (struct TYPE_2__ *) malloc(_len_dispc__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat0; _j0++) {
            dispc[_i0].feat->num_fifos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dispc_ovl_get_fifo_size(dispc,plane);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].fifo_assignment);
          }
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].fifo_size);
          }
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].feat);
          }
          free(dispc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
