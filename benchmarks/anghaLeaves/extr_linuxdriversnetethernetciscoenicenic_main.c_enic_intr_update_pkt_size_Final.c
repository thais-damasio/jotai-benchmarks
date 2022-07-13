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

/* Type definitions */
typedef  scalar_t__ u32 ;
struct vnic_rx_bytes_counter {int /*<<< orphan*/  small_pkt_bytes_cnt; int /*<<< orphan*/  large_pkt_bytes_cnt; } ;

/* Variables and functions */
 scalar_t__ ENIC_LARGE_PKT_THRESHOLD ; 

__attribute__((used)) static void enic_intr_update_pkt_size(struct vnic_rx_bytes_counter *pkt_size,
				      u32 pkt_len)
{
	if (ENIC_LARGE_PKT_THRESHOLD <= pkt_len)
		pkt_size->large_pkt_bytes_cnt += pkt_len;
	else
		pkt_size->small_pkt_bytes_cnt += pkt_len;
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
          long pkt_len = 100;
          int _len_pkt_size0 = 1;
          struct vnic_rx_bytes_counter * pkt_size = (struct vnic_rx_bytes_counter *) malloc(_len_pkt_size0*sizeof(struct vnic_rx_bytes_counter));
          for(int _i0 = 0; _i0 < _len_pkt_size0; _i0++) {
            pkt_size[_i0].small_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_size[_i0].large_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enic_intr_update_pkt_size(pkt_size,pkt_len);
          free(pkt_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pkt_len = 255;
          int _len_pkt_size0 = 65025;
          struct vnic_rx_bytes_counter * pkt_size = (struct vnic_rx_bytes_counter *) malloc(_len_pkt_size0*sizeof(struct vnic_rx_bytes_counter));
          for(int _i0 = 0; _i0 < _len_pkt_size0; _i0++) {
            pkt_size[_i0].small_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_size[_i0].large_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enic_intr_update_pkt_size(pkt_size,pkt_len);
          free(pkt_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pkt_len = 10;
          int _len_pkt_size0 = 100;
          struct vnic_rx_bytes_counter * pkt_size = (struct vnic_rx_bytes_counter *) malloc(_len_pkt_size0*sizeof(struct vnic_rx_bytes_counter));
          for(int _i0 = 0; _i0 < _len_pkt_size0; _i0++) {
            pkt_size[_i0].small_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_size[_i0].large_pkt_bytes_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enic_intr_update_pkt_size(pkt_size,pkt_len);
          free(pkt_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
