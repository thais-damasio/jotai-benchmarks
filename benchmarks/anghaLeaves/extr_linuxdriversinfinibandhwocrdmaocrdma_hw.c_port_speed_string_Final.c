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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct TYPE_2__ {int fixed_speeds_supported; int auto_speeds_supported; } ;
struct ocrdma_dev {TYPE_1__ phy; } ;

/* Variables and functions */
 int OCRDMA_PHY_SPEED_10GBPS ; 
 int OCRDMA_PHY_SPEED_1GBPS ; 
 int OCRDMA_PHY_SPEED_40GBPS ; 

char *port_speed_string(struct ocrdma_dev *dev)
{
	char *str = "";
	u16 speeds_supported;

	speeds_supported = dev->phy.fixed_speeds_supported |
				dev->phy.auto_speeds_supported;
	if (speeds_supported & OCRDMA_PHY_SPEED_40GBPS)
		str = "40Gbps ";
	else if (speeds_supported & OCRDMA_PHY_SPEED_10GBPS)
		str = "10Gbps ";
	else if (speeds_supported & OCRDMA_PHY_SPEED_1GBPS)
		str = "1Gbps ";

	return str;
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
          int _len_dev0 = 1;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.fixed_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.auto_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = port_speed_string(dev);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.fixed_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.auto_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = port_speed_string(dev);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.fixed_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.auto_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = port_speed_string(dev);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
