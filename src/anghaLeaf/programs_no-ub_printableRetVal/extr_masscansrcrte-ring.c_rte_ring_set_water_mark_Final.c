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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int size; unsigned int watermark; } ;
struct rte_ring {TYPE_1__ prod; } ;

/* Variables and functions */
 int EINVAL ; 

int
rte_ring_set_water_mark(struct rte_ring *r, unsigned count)
{
    if (count >= r->prod.size)
        return -EINVAL;

    /* if count is 0, disable the watermarking */
    if (count == 0)
        count = r->prod.size;

    r->prod.watermark = count;
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
          unsigned int count = 255;
          int _len_r0 = 1;
          struct rte_ring * r = (struct rte_ring *) malloc(_len_r0*sizeof(struct rte_ring));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r->prod.size = ((-2 * (next_i()%2)) + 1) * next_i();
        r->prod.watermark = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rte_ring_set_water_mark(r,count);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
