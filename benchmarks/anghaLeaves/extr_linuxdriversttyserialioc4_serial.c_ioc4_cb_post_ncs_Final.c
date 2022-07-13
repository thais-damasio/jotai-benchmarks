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
struct uart_icount {int /*<<< orphan*/  parity; int /*<<< orphan*/  overrun; int /*<<< orphan*/  frame; int /*<<< orphan*/  brk; } ;
struct uart_port {struct uart_icount icount; } ;

/* Variables and functions */
 int NCS_BREAK ; 
 int NCS_FRAMING ; 
 int NCS_OVERRUN ; 
 int NCS_PARITY ; 

__attribute__((used)) static void ioc4_cb_post_ncs(struct uart_port *the_port, int ncs)
{
	struct uart_icount *icount;

	icount = &the_port->icount;

	if (ncs & NCS_BREAK)
		icount->brk++;
	if (ncs & NCS_FRAMING)
		icount->frame++;
	if (ncs & NCS_OVERRUN)
		icount->overrun++;
	if (ncs & NCS_PARITY)
		icount->parity++;
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
          int ncs = 100;
          int _len_the_port0 = 1;
          struct uart_port * the_port = (struct uart_port *) malloc(_len_the_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_the_port0; _i0++) {
            the_port[_i0].icount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ioc4_cb_post_ncs(the_port,ncs);
          free(the_port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ncs = 255;
          int _len_the_port0 = 65025;
          struct uart_port * the_port = (struct uart_port *) malloc(_len_the_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_the_port0; _i0++) {
            the_port[_i0].icount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ioc4_cb_post_ncs(the_port,ncs);
          free(the_port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ncs = 10;
          int _len_the_port0 = 100;
          struct uart_port * the_port = (struct uart_port *) malloc(_len_the_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_the_port0; _i0++) {
            the_port[_i0].icount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
        the_port[_i0].icount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ioc4_cb_post_ncs(the_port,ncs);
          free(the_port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
