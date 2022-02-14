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

/* Variables and functions */
#define  DWC3_TRBCTL_CONTROL_DATA 135 
#define  DWC3_TRBCTL_CONTROL_SETUP 134 
#define  DWC3_TRBCTL_CONTROL_STATUS2 133 
#define  DWC3_TRBCTL_CONTROL_STATUS3 132 
#define  DWC3_TRBCTL_ISOCHRONOUS 131 
#define  DWC3_TRBCTL_ISOCHRONOUS_FIRST 130 
#define  DWC3_TRBCTL_LINK_TRB 129 
#define  DWC3_TRBCTL_NORMAL 128 

__attribute__((used)) static inline const char *dwc3_trb_type_string(unsigned int type)
{
	switch (type) {
	case DWC3_TRBCTL_NORMAL:
		return "normal";
	case DWC3_TRBCTL_CONTROL_SETUP:
		return "setup";
	case DWC3_TRBCTL_CONTROL_STATUS2:
		return "status2";
	case DWC3_TRBCTL_CONTROL_STATUS3:
		return "status3";
	case DWC3_TRBCTL_CONTROL_DATA:
		return "data";
	case DWC3_TRBCTL_ISOCHRONOUS_FIRST:
		return "isoc-first";
	case DWC3_TRBCTL_ISOCHRONOUS:
		return "isoc";
	case DWC3_TRBCTL_LINK_TRB:
		return "link";
	default:
		return "UNKNOWN";
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

    // big-arr
    case 0:
    {
          unsigned int type = 255;
          const char * benchRet = dwc3_trb_type_string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
