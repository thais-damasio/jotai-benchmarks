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
struct parport {int dummy; } ;

/* Variables and functions */
 int PARPORT_IRQ_NONE ; 

__attribute__((used)) static int irq_probe_EPP(struct parport *pb)
{
#ifndef ADVANCED_DETECT
	return PARPORT_IRQ_NONE;
#else
	int irqs;
	unsigned char oecr;

	if (pb->modes & PARPORT_MODE_PCECR)
		oecr = inb(ECONTROL(pb));

	irqs = probe_irq_on();

	if (pb->modes & PARPORT_MODE_PCECR)
		frob_econtrol(pb, 0x10, 0x10);

	clear_epp_timeout(pb);
	parport_pc_frob_control(pb, 0x20, 0x20);
	parport_pc_frob_control(pb, 0x10, 0x10);
	clear_epp_timeout(pb);

	/* Device isn't expecting an EPP read
	 * and generates an IRQ.
	 */
	parport_pc_read_epp(pb);
	udelay(20);

	pb->irq = probe_irq_off(irqs);
	if (pb->modes & PARPORT_MODE_PCECR)
		ECR_WRITE(pb, oecr);
	parport_pc_write_control(pb, 0xc);

	if (pb->irq <= 0)
		pb->irq = PARPORT_IRQ_NONE;

	return pb->irq;
#endif /* Advanced detection */
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
          int _len_pb0 = 1;
          struct parport * pb = (struct parport *) malloc(_len_pb0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pb0; _i0++) {
            pb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = irq_probe_EPP(pb);
          printf("%d\n", benchRet); 
          free(pb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pb0 = 65025;
          struct parport * pb = (struct parport *) malloc(_len_pb0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pb0; _i0++) {
            pb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = irq_probe_EPP(pb);
          printf("%d\n", benchRet); 
          free(pb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pb0 = 100;
          struct parport * pb = (struct parport *) malloc(_len_pb0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pb0; _i0++) {
            pb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = irq_probe_EPP(pb);
          printf("%d\n", benchRet); 
          free(pb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
