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

/* Variables and functions */
#define  USB_CHG_TYPE_BC12_CDP 137 
#define  USB_CHG_TYPE_BC12_DCP 136 
#define  USB_CHG_TYPE_BC12_SDP 135 
#define  USB_CHG_TYPE_C 134 
#define  USB_CHG_TYPE_NONE 133 
#define  USB_CHG_TYPE_OTHER 132 
#define  USB_CHG_TYPE_PD 131 
#define  USB_CHG_TYPE_PROPRIETARY 130 
#define  USB_CHG_TYPE_UNKNOWN 129 
#define  USB_CHG_TYPE_VBUS 128 

__attribute__((used)) static bool cros_ec_usb_power_type_is_wall_wart(unsigned int type,
						unsigned int role)
{
	switch (type) {
	/* FIXME : Guppy, Donnettes, and other chargers will be miscategorized
	 * because they identify with USB_CHG_TYPE_C, but we can't return true
	 * here from that code because that breaks Suzy-Q and other kinds of
	 * USB Type-C cables and peripherals.
	 */
	case USB_CHG_TYPE_PROPRIETARY:
	case USB_CHG_TYPE_BC12_DCP:
		return true;
	case USB_CHG_TYPE_PD:
	case USB_CHG_TYPE_C:
	case USB_CHG_TYPE_BC12_CDP:
	case USB_CHG_TYPE_BC12_SDP:
	case USB_CHG_TYPE_OTHER:
	case USB_CHG_TYPE_VBUS:
	case USB_CHG_TYPE_UNKNOWN:
	case USB_CHG_TYPE_NONE:
	default:
		return false;
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
          unsigned int type = 100;
          unsigned int role = 100;
          int benchRet = cros_ec_usb_power_type_is_wall_wart(type,role);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          unsigned int role = 255;
          int benchRet = cros_ec_usb_power_type_is_wall_wart(type,role);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          unsigned int role = 10;
          int benchRet = cros_ec_usb_power_type_is_wall_wart(type,role);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
