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
struct moxa_port {int lineCtrl; } ;

/* Variables and functions */
 int DTR_ON ; 
 int RTS_ON ; 

__attribute__((used)) static int MoxaPortGetLineOut(struct moxa_port *port, int *dtrState,
		int *rtsState)
{
	if (dtrState)
		*dtrState = !!(port->lineCtrl & DTR_ON);
	if (rtsState)
		*rtsState = !!(port->lineCtrl & RTS_ON);

	return 0;
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
          int _len_port0 = 1;
          struct moxa_port * port = (struct moxa_port *) malloc(_len_port0*sizeof(struct moxa_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port->lineCtrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dtrState0 = 65025;
          int * dtrState = (int *) malloc(_len_dtrState0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dtrState0; _i0++) {
            dtrState[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtsState0 = 65025;
          int * rtsState = (int *) malloc(_len_rtsState0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rtsState0; _i0++) {
            rtsState[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MoxaPortGetLineOut(port,dtrState,rtsState);
          printf("%d\n", benchRet); 
          free(port);
          free(dtrState);
          free(rtsState);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
