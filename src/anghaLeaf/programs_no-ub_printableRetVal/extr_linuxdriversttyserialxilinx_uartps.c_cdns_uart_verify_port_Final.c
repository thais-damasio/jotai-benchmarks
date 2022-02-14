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
struct uart_port {scalar_t__ irq; scalar_t__ iobase; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; scalar_t__ io_type; scalar_t__ port; scalar_t__ hub6; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_UNKNOWN ; 
 scalar_t__ PORT_XUARTPS ; 
 scalar_t__ UPIO_MEM ; 

__attribute__((used)) static int cdns_uart_verify_port(struct uart_port *port,
					struct serial_struct *ser)
{
	if (ser->type != PORT_UNKNOWN && ser->type != PORT_XUARTPS)
		return -EINVAL;
	if (port->irq != ser->irq)
		return -EINVAL;
	if (ser->io_type != UPIO_MEM)
		return -EINVAL;
	if (port->iobase != ser->port)
		return -EINVAL;
	if (ser->hub6 != 0)
		return -EINVAL;
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
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        port->iobase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ser0 = 1;
          struct serial_struct * ser = (struct serial_struct *) malloc(_len_ser0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_ser0; _i0++) {
            ser->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ser->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        ser->io_type = ((-2 * (next_i()%2)) + 1) * next_i();
        ser->port = ((-2 * (next_i()%2)) + 1) * next_i();
        ser->hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cdns_uart_verify_port(port,ser);
          printf("%d\n", benchRet); 
          free(port);
          free(ser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
