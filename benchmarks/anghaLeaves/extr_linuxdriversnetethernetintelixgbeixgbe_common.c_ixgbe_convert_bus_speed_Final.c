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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
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
typedef  int u16 ;
typedef  enum ixgbe_bus_speed { ____Placeholder_ixgbe_bus_speed } ixgbe_bus_speed ;

/* Variables and functions */
 int IXGBE_PCI_LINK_SPEED ; 
#define  IXGBE_PCI_LINK_SPEED_2500 130 
#define  IXGBE_PCI_LINK_SPEED_5000 129 
#define  IXGBE_PCI_LINK_SPEED_8000 128 
 int ixgbe_bus_speed_2500 ; 
 int ixgbe_bus_speed_5000 ; 
 int ixgbe_bus_speed_8000 ; 
 int ixgbe_bus_speed_unknown ; 

enum ixgbe_bus_speed ixgbe_convert_bus_speed(u16 link_status)
{
	switch (link_status & IXGBE_PCI_LINK_SPEED) {
	case IXGBE_PCI_LINK_SPEED_2500:
		return ixgbe_bus_speed_2500;
	case IXGBE_PCI_LINK_SPEED_5000:
		return ixgbe_bus_speed_5000;
	case IXGBE_PCI_LINK_SPEED_8000:
		return ixgbe_bus_speed_8000;
	default:
		return ixgbe_bus_speed_unknown;
	}
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
          int link_status = 100;
          enum ixgbe_bus_speed benchRet = ixgbe_convert_bus_speed(link_status);
        
        break;
    }
    // big-arr
    case 1:
    {
          int link_status = 255;
          enum ixgbe_bus_speed benchRet = ixgbe_convert_bus_speed(link_status);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int link_status = 10;
          enum ixgbe_bus_speed benchRet = ixgbe_convert_bus_speed(link_status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
