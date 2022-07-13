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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int maxpacket; } ;
struct dwc2_hsotg_ep {int dir_in; scalar_t__ isochronous; int /*<<< orphan*/  index; TYPE_1__ ep; } ;

/* Variables and functions */
 int DEV_DMA_ISOC_RX_NBYTES_LIMIT ; 
 int DEV_DMA_ISOC_RX_NBYTES_MASK ; 
 int DEV_DMA_ISOC_TX_NBYTES_LIMIT ; 
 int DEV_DMA_ISOC_TX_NBYTES_MASK ; 
 int DEV_DMA_NBYTES_LIMIT ; 
 int DEV_DMA_NBYTES_MASK ; 

__attribute__((used)) static u32 dwc2_gadget_get_desc_params(struct dwc2_hsotg_ep *hs_ep, u32 *mask)
{
	u32 mps = hs_ep->ep.maxpacket;
	int dir_in = hs_ep->dir_in;
	u32 desc_size = 0;

	if (!hs_ep->index && !dir_in) {
		desc_size = mps;
		*mask = DEV_DMA_NBYTES_MASK;
	} else if (hs_ep->isochronous) {
		if (dir_in) {
			desc_size = DEV_DMA_ISOC_TX_NBYTES_LIMIT;
			*mask = DEV_DMA_ISOC_TX_NBYTES_MASK;
		} else {
			desc_size = DEV_DMA_ISOC_RX_NBYTES_LIMIT;
			*mask = DEV_DMA_ISOC_RX_NBYTES_MASK;
		}
	} else {
		desc_size = DEV_DMA_NBYTES_LIMIT;
		*mask = DEV_DMA_NBYTES_MASK;

		/* Round down desc_size to be mps multiple */
		desc_size -= desc_size % mps;
	}

	return desc_size;
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
          int _len_hs_ep0 = 1;
          struct dwc2_hsotg_ep * hs_ep = (struct dwc2_hsotg_ep *) malloc(_len_hs_ep0*sizeof(struct dwc2_hsotg_ep));
          for(int _i0 = 0; _i0 < _len_hs_ep0; _i0++) {
            hs_ep[_i0].dir_in = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].isochronous = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_gadget_get_desc_params(hs_ep,mask);
          printf("%d\n", benchRet); 
          free(hs_ep);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hs_ep0 = 65025;
          struct dwc2_hsotg_ep * hs_ep = (struct dwc2_hsotg_ep *) malloc(_len_hs_ep0*sizeof(struct dwc2_hsotg_ep));
          for(int _i0 = 0; _i0 < _len_hs_ep0; _i0++) {
            hs_ep[_i0].dir_in = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].isochronous = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 65025;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_gadget_get_desc_params(hs_ep,mask);
          printf("%d\n", benchRet); 
          free(hs_ep);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hs_ep0 = 100;
          struct dwc2_hsotg_ep * hs_ep = (struct dwc2_hsotg_ep *) malloc(_len_hs_ep0*sizeof(struct dwc2_hsotg_ep));
          for(int _i0 = 0; _i0 < _len_hs_ep0; _i0++) {
            hs_ep[_i0].dir_in = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].isochronous = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 100;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_gadget_get_desc_params(hs_ep,mask);
          printf("%d\n", benchRet); 
          free(hs_ep);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
