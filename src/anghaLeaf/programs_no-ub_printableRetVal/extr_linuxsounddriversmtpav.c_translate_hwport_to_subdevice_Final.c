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
struct mtpav {int num_ports; } ;

/* Variables and functions */
 int MTPAV_PIDX_ADAT ; 
 int MTPAV_PIDX_BROADCAST ; 
 int MTPAV_PIDX_COMPUTER ; 

__attribute__((used)) static int translate_hwport_to_subdevice(struct mtpav *chip, int hwport)
{
	int p;
	if (hwport <= 0x00) /* all ports */
		return chip->num_ports + MTPAV_PIDX_BROADCAST;
	else if (hwport <= 0x08) { /* single port */
		p = hwport - 1;
		if (p >= chip->num_ports)
			p = 0;
		return p;
	} else if (hwport <= 0x10) { /* remote port */
		p = hwport - 0x09 + chip->num_ports;
		if (p >= chip->num_ports * 2)
			p = chip->num_ports;
		return p;
	} else if (hwport == 0x11)  /* computer port */
		return chip->num_ports + MTPAV_PIDX_COMPUTER;
	else  /* ADAT */
		return chip->num_ports + MTPAV_PIDX_ADAT;
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
          int hwport = 255;
          int _len_chip0 = 1;
          struct mtpav * chip = (struct mtpav *) malloc(_len_chip0*sizeof(struct mtpav));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_hwport_to_subdevice(chip,hwport);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}