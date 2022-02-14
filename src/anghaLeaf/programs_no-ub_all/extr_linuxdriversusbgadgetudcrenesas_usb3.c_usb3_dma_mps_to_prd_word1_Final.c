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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int maxpacket; } ;
struct renesas_usb3_ep {TYPE_1__ ep; } ;

/* Variables and functions */
 int /*<<< orphan*/  USB3_PRD1_MPS_1024 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_16 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_32 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_512 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_64 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_8 ; 
 int /*<<< orphan*/  USB3_PRD1_MPS_RESERVED ; 

__attribute__((used)) static u32 usb3_dma_mps_to_prd_word1(struct renesas_usb3_ep *usb3_ep)
{
	switch (usb3_ep->ep.maxpacket) {
	case 8:
		return USB3_PRD1_MPS_8;
	case 16:
		return USB3_PRD1_MPS_16;
	case 32:
		return USB3_PRD1_MPS_32;
	case 64:
		return USB3_PRD1_MPS_64;
	case 512:
		return USB3_PRD1_MPS_512;
	case 1024:
		return USB3_PRD1_MPS_1024;
	default:
		return USB3_PRD1_MPS_RESERVED;
	}
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
          int _len_usb3_ep0 = 1;
          struct renesas_usb3_ep * usb3_ep = (struct renesas_usb3_ep *) malloc(_len_usb3_ep0*sizeof(struct renesas_usb3_ep));
          for(int _i0 = 0; _i0 < _len_usb3_ep0; _i0++) {
            usb3_ep->ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usb3_dma_mps_to_prd_word1(usb3_ep);
          printf("%d\n", benchRet); 
          free(usb3_ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
