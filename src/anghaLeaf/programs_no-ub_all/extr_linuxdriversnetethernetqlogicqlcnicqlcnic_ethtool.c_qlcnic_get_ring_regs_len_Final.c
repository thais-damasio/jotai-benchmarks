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
typedef  int /*<<< orphan*/  u32 ;
struct qlcnic_adapter {int drv_tx_rings; int max_rds_rings; int drv_sds_rings; } ;

/* Variables and functions */

__attribute__((used)) static inline int qlcnic_get_ring_regs_len(struct qlcnic_adapter *adapter)
{
	int ring_regs_cnt = (adapter->drv_tx_rings * 5) +
			    (adapter->max_rds_rings * 2) +
			    (adapter->drv_sds_rings * 3) + 5;
	return ring_regs_cnt * sizeof(u32);
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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter->drv_tx_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter->max_rds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter->drv_sds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qlcnic_get_ring_regs_len(adapter);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}