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
struct vio_driver_state {int dr_state; } ;

/* Variables and functions */
 int VIO_DR_STATE_RXREG ; 
 int VIO_DR_STATE_RXREQ ; 
 int VIO_DR_STATE_TXREG ; 
 int VIO_DR_STATE_TXREQ ; 

__attribute__((used)) static int all_drings_registered(struct vio_driver_state *vio)
{
	int need_rx, need_tx;

	need_rx = (vio->dr_state & VIO_DR_STATE_RXREQ);
	need_tx = (vio->dr_state & VIO_DR_STATE_TXREQ);

	if (need_rx &&
	    !(vio->dr_state & VIO_DR_STATE_RXREG))
		return 0;

	if (need_tx &&
	    !(vio->dr_state & VIO_DR_STATE_TXREG))
		return 0;

	return 1;
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
          int _len_vio0 = 1;
          struct vio_driver_state * vio = (struct vio_driver_state *) malloc(_len_vio0*sizeof(struct vio_driver_state));
          for(int _i0 = 0; _i0 < _len_vio0; _i0++) {
            vio->dr_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = all_drings_registered(vio);
          printf("%d\n", benchRet); 
          free(vio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
