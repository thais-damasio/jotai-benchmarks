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
struct ib_device {int dummy; } ;
struct cma_device {struct ib_device* device; } ;

/* Variables and functions */

struct ib_device *cma_get_ib_dev(struct cma_device *cma_dev)
{
	return cma_dev->device;
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
          int _len_cma_dev0 = 1;
          struct cma_device * cma_dev = (struct cma_device *) malloc(_len_cma_dev0*sizeof(struct cma_device));
          for(int _i0 = 0; _i0 < _len_cma_dev0; _i0++) {
              int _len_cma_dev__i0__device0 = 1;
          cma_dev[_i0].device = (struct ib_device *) malloc(_len_cma_dev__i0__device0*sizeof(struct ib_device));
          for(int _j0 = 0; _j0 < _len_cma_dev__i0__device0; _j0++) {
            cma_dev[_i0].device->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ib_device * benchRet = cma_get_ib_dev(cma_dev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cma_dev0; _aux++) {
          free(cma_dev[_aux].device);
          }
          free(cma_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
