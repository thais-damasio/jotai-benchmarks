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
struct mtpav {int num_ports; } ;

/* Variables and functions */
 int MTPAV_PIDX_ADAT ; 
 int MTPAV_PIDX_COMPUTER ; 

__attribute__((used)) static int translate_subdevice_to_hwport(struct mtpav *chip, int subdev)
{
	if (subdev < 0)
		return 0x01; /* invalid - use port 0 as default */
	else if (subdev < chip->num_ports)
		return subdev + 1; /* single mtp port */
	else if (subdev < chip->num_ports * 2)
		return subdev - chip->num_ports + 0x09; /* remote port */
	else if (subdev == chip->num_ports * 2 + MTPAV_PIDX_COMPUTER)
		return 0x11; /* computer port */
	else if (subdev == chip->num_ports + MTPAV_PIDX_ADAT)
		return 0x63;		/* ADAT */
	return 0; /* all ports */
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
          int subdev = 100;
          int _len_chip0 = 1;
          struct mtpav * chip = (struct mtpav *) malloc(_len_chip0*sizeof(struct mtpav));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_subdevice_to_hwport(chip,subdev);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int subdev = 255;
          int _len_chip0 = 65025;
          struct mtpav * chip = (struct mtpav *) malloc(_len_chip0*sizeof(struct mtpav));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_subdevice_to_hwport(chip,subdev);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int subdev = 10;
          int _len_chip0 = 100;
          struct mtpav * chip = (struct mtpav *) malloc(_len_chip0*sizeof(struct mtpav));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_subdevice_to_hwport(chip,subdev);
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
