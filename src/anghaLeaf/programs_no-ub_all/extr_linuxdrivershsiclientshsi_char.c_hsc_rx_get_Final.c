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
struct TYPE_2__ {int /*<<< orphan*/  flow; int /*<<< orphan*/  num_hw_channels; int /*<<< orphan*/  mode; } ;
struct hsi_client {TYPE_1__ rx_cfg; } ;
struct hsc_rx_config {int /*<<< orphan*/  flow; int /*<<< orphan*/  channels; int /*<<< orphan*/  mode; } ;

/* Variables and functions */

__attribute__((used)) static inline void hsc_rx_get(struct hsi_client *cl, struct hsc_rx_config *rxc)
{
	rxc->mode = cl->rx_cfg.mode;
	rxc->channels = cl->rx_cfg.num_hw_channels;
	rxc->flow = cl->rx_cfg.flow;
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
          int _len_cl0 = 1;
          struct hsi_client * cl = (struct hsi_client *) malloc(_len_cl0*sizeof(struct hsi_client));
          for(int _i0 = 0; _i0 < _len_cl0; _i0++) {
            cl->rx_cfg.flow = ((-2 * (next_i()%2)) + 1) * next_i();
        cl->rx_cfg.num_hw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        cl->rx_cfg.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxc0 = 1;
          struct hsc_rx_config * rxc = (struct hsc_rx_config *) malloc(_len_rxc0*sizeof(struct hsc_rx_config));
          for(int _i0 = 0; _i0 < _len_rxc0; _i0++) {
            rxc->flow = ((-2 * (next_i()%2)) + 1) * next_i();
        rxc->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        rxc->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hsc_rx_get(cl,rxc);
          free(cl);
          free(rxc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
