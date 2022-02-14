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
struct fwtty_port {int mctrl; scalar_t__ break_ctl; } ;

/* Variables and functions */
 int OOB_RX_THROTTLE ; 
 unsigned int OOB_TX_THROTTLE ; 
 unsigned int TIOCM_CAR ; 
 unsigned int TIOCM_CTS ; 
 unsigned int TIOCM_DSR ; 
 int TIOCM_DTR ; 
 int TIOCM_RTS ; 
 int UART_LSR_BI ; 

__attribute__((used)) static unsigned int __fwtty_port_line_status(struct fwtty_port *port)
{
	unsigned int status = 0;

	/* TODO: add module param to tie RNG to DTR as well */

	if (port->mctrl & TIOCM_DTR)
		status |= TIOCM_DSR | TIOCM_CAR;
	if (port->mctrl & TIOCM_RTS)
		status |= TIOCM_CTS;
	if (port->mctrl & OOB_RX_THROTTLE)
		status |= OOB_TX_THROTTLE;
	/* emulate BRK as add'l line status */
	if (port->break_ctl)
		status |= UART_LSR_BI << 24;

	return status;
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
          struct fwtty_port * port = (struct fwtty_port *) malloc(_len_port0*sizeof(struct fwtty_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port->mctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        port->break_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = __fwtty_port_line_status(port);
          printf("%u\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}