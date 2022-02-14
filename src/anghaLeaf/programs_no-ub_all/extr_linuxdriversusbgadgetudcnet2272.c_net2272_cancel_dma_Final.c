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
struct net2272 {scalar_t__ dma_busy; } ;

/* Variables and functions */

__attribute__((used)) static void net2272_cancel_dma(struct net2272 *dev)
{
#ifdef CONFIG_USB_PCI
	switch (dev->dev_id) {
	case PCI_DEVICE_ID_RDK1:
		writeb(0, dev->rdk1.plx9054_base_addr + DMACSR0);
		writeb(1 << CHANNEL_ABORT, dev->rdk1.plx9054_base_addr + DMACSR0);
		while (!(readb(dev->rdk1.plx9054_base_addr + DMACSR0) &
		         (1 << CHANNEL_DONE)))
			continue;	/* wait for dma to stabalize */

		/* dma abort generates an interrupt */
		writeb(1 << CHANNEL_CLEAR_INTERRUPT,
			dev->rdk1.plx9054_base_addr + DMACSR0);
		break;
	}
#endif

	dev->dma_busy = 0;
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
          int _len_dev0 = 1;
          struct net2272 * dev = (struct net2272 *) malloc(_len_dev0*sizeof(struct net2272));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dma_busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          net2272_cancel_dma(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
