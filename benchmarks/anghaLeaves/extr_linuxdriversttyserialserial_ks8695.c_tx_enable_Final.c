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
struct uart_port {int* unused; } ;

/* Variables and functions */

__attribute__((used)) static inline void tx_enable(struct uart_port *port, int enabled)
{
	if(enabled)
		port->unused[0] |= 1;
	else
		port->unused[0] &= ~1;
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
          int enabled = 100;
          int _len_port0 = 1;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__unused0 = 1;
          port[_i0].unused = (int *) malloc(_len_port__i0__unused0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__unused0; _j0++) {
            port[_i0].unused[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tx_enable(port,enabled);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].unused);
          }
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int enabled = 255;
          int _len_port0 = 65025;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__unused0 = 1;
          port[_i0].unused = (int *) malloc(_len_port__i0__unused0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__unused0; _j0++) {
            port[_i0].unused[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tx_enable(port,enabled);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].unused);
          }
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int enabled = 10;
          int _len_port0 = 100;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__unused0 = 1;
          port[_i0].unused = (int *) malloc(_len_port__i0__unused0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__unused0; _j0++) {
            port[_i0].unused[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tx_enable(port,enabled);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].unused);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
