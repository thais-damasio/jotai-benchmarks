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
struct rcb_common_cb {int max_q_per_vf; int max_vfn; } ;

/* Variables and functions */

__attribute__((used)) static int hns_rcb_get_port_in_comm(
	struct rcb_common_cb *rcb_common, int ring_idx)
{
	return ring_idx / (rcb_common->max_q_per_vf * rcb_common->max_vfn);
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
          int ring_idx = 255;
          int _len_rcb_common0 = 1;
          struct rcb_common_cb * rcb_common = (struct rcb_common_cb *) malloc(_len_rcb_common0*sizeof(struct rcb_common_cb));
          for(int _i0 = 0; _i0 < _len_rcb_common0; _i0++) {
            rcb_common->max_q_per_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        rcb_common->max_vfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hns_rcb_get_port_in_comm(rcb_common,ring_idx);
          printf("%d\n", benchRet); 
          free(rcb_common);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}