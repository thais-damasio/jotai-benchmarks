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
struct dwc2_core_params {int host_rx_fifo_size; int host_nperio_tx_fifo_size; int host_perio_tx_fifo_size; int max_transfer_size; int max_packet_count; int host_channels; int phy_utmi_width; int i2c_enable; int reload_ctl; int ahbcfg; int change_speed_quirk; int power_down; int /*<<< orphan*/  phy_type; int /*<<< orphan*/  speed; int /*<<< orphan*/  otg_cap; } ;
struct dwc2_hsotg {struct dwc2_core_params params; } ;

/* Variables and functions */
 int /*<<< orphan*/  DWC2_CAP_PARAM_NO_HNP_SRP_CAPABLE ; 
 int /*<<< orphan*/  DWC2_PHY_TYPE_PARAM_UTMI ; 
 int /*<<< orphan*/  DWC2_SPEED_PARAM_HIGH ; 
 int GAHBCFG_HBSTLEN_INCR16 ; 
 int GAHBCFG_HBSTLEN_SHIFT ; 

__attribute__((used)) static void dwc2_set_his_params(struct dwc2_hsotg *hsotg)
{
	struct dwc2_core_params *p = &hsotg->params;

	p->otg_cap = DWC2_CAP_PARAM_NO_HNP_SRP_CAPABLE;
	p->speed = DWC2_SPEED_PARAM_HIGH;
	p->host_rx_fifo_size = 512;
	p->host_nperio_tx_fifo_size = 512;
	p->host_perio_tx_fifo_size = 512;
	p->max_transfer_size = 65535;
	p->max_packet_count = 511;
	p->host_channels = 16;
	p->phy_type = DWC2_PHY_TYPE_PARAM_UTMI;
	p->phy_utmi_width = 8;
	p->i2c_enable = false;
	p->reload_ctl = false;
	p->ahbcfg = GAHBCFG_HBSTLEN_INCR16 <<
		GAHBCFG_HBSTLEN_SHIFT;
	p->change_speed_quirk = true;
	p->power_down = false;
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
          int _len_hsotg0 = 1;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
            hsotg[_i0].params.host_rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.host_nperio_tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.host_perio_tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.max_transfer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.max_packet_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.host_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.phy_utmi_width = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.i2c_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.reload_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.ahbcfg = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.change_speed_quirk = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.power_down = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].params.otg_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_set_his_params(hsotg);
          free(hsotg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
