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
struct xhci_hcd {int quirks; } ;

/* Variables and functions */
 int XHCI_LINK_TRB_QUIRK ; 

__attribute__((used)) static inline int xhci_link_trb_quirk(struct xhci_hcd *xhci)
{
	return xhci->quirks & XHCI_LINK_TRB_QUIRK;
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
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
            xhci[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xhci_link_trb_quirk(xhci);
          printf("%d\n", benchRet); 
          free(xhci);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xhci0 = 65025;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
            xhci[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xhci_link_trb_quirk(xhci);
          printf("%d\n", benchRet); 
          free(xhci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xhci0 = 100;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
            xhci[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xhci_link_trb_quirk(xhci);
          printf("%d\n", benchRet); 
          free(xhci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
