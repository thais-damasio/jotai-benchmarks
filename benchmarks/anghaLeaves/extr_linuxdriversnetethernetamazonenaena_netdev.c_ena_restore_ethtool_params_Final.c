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
struct ena_adapter {int tx_frames; int rx_frames; scalar_t__ rx_usecs; scalar_t__ tx_usecs; } ;

/* Variables and functions */

__attribute__((used)) static void ena_restore_ethtool_params(struct ena_adapter *adapter)
{
	adapter->tx_usecs = 0;
	adapter->rx_usecs = 0;
	adapter->tx_frames = 1;
	adapter->rx_frames = 1;
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
            adapter[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].tx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_restore_ethtool_params(adapter);
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].tx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_restore_ethtool_params(adapter);
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].tx_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_restore_ethtool_params(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
