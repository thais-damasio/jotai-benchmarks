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
struct dwc2_core_params {int host_rx_fifo_size; int host_nperio_tx_fifo_size; int host_perio_tx_fifo_size; int max_packet_count; int i2c_enable; int activate_stm_fs_transceiver; int /*<<< orphan*/  phy_type; int /*<<< orphan*/  speed; int /*<<< orphan*/  otg_cap; } ;
struct dwc2_hsotg {struct dwc2_core_params params; } ;

/* Variables and functions */
 int /*<<< orphan*/  DWC2_CAP_PARAM_NO_HNP_SRP_CAPABLE ; 
 int /*<<< orphan*/  DWC2_PHY_TYPE_PARAM_FS ; 
 int /*<<< orphan*/  DWC2_SPEED_PARAM_FULL ; 

__attribute__((used)) static void dwc2_set_stm32f4x9_fsotg_params(struct dwc2_hsotg *hsotg)
{
	struct dwc2_core_params *p = &hsotg->params;

	p->otg_cap = DWC2_CAP_PARAM_NO_HNP_SRP_CAPABLE;
	p->speed = DWC2_SPEED_PARAM_FULL;
	p->host_rx_fifo_size = 128;
	p->host_nperio_tx_fifo_size = 96;
	p->host_perio_tx_fifo_size = 96;
	p->max_packet_count = 256;
	p->phy_type = DWC2_PHY_TYPE_PARAM_FS;
	p->i2c_enable = false;
	p->activate_stm_fs_transceiver = true;
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
          int _len_hsotg0 = 1;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
            hsotg->params.host_rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.host_nperio_tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.host_perio_tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.max_packet_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.i2c_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.activate_stm_fs_transceiver = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg->params.otg_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_set_stm32f4x9_fsotg_params(hsotg);
          free(hsotg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}