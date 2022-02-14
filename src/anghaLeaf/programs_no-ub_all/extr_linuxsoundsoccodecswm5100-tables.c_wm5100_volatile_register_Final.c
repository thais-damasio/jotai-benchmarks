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
struct device {int dummy; } ;

/* Variables and functions */
#define  WM5100_DEVICE_REVISION 141 
 unsigned int WM5100_DSP1_DM_0 ; 
 unsigned int WM5100_DSP1_DM_511 ; 
 unsigned int WM5100_DSP1_PM_0 ; 
 unsigned int WM5100_DSP1_PM_1535 ; 
 unsigned int WM5100_DSP1_ZM_0 ; 
 unsigned int WM5100_DSP1_ZM_2047 ; 
 unsigned int WM5100_DSP2_DM_0 ; 
 unsigned int WM5100_DSP2_DM_511 ; 
 unsigned int WM5100_DSP2_PM_0 ; 
 unsigned int WM5100_DSP2_PM_1535 ; 
 unsigned int WM5100_DSP2_ZM_0 ; 
 unsigned int WM5100_DSP2_ZM_2047 ; 
 unsigned int WM5100_DSP3_DM_0 ; 
 unsigned int WM5100_DSP3_DM_511 ; 
 unsigned int WM5100_DSP3_PM_0 ; 
 unsigned int WM5100_DSP3_PM_1535 ; 
 unsigned int WM5100_DSP3_ZM_0 ; 
 unsigned int WM5100_DSP3_ZM_2047 ; 
#define  WM5100_FX_CTRL 140 
#define  WM5100_INPUT_ENABLES_STATUS 139 
#define  WM5100_INTERRUPT_RAW_STATUS_2 138 
#define  WM5100_INTERRUPT_RAW_STATUS_3 137 
#define  WM5100_INTERRUPT_RAW_STATUS_4 136 
#define  WM5100_INTERRUPT_STATUS_1 135 
#define  WM5100_INTERRUPT_STATUS_2 134 
#define  WM5100_INTERRUPT_STATUS_3 133 
#define  WM5100_INTERRUPT_STATUS_4 132 
#define  WM5100_MIC_DETECT_3 131 
#define  WM5100_OUTPUT_STATUS_1 130 
#define  WM5100_OUTPUT_STATUS_2 129 
#define  WM5100_SOFTWARE_RESET 128 

bool wm5100_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM5100_SOFTWARE_RESET:
	case WM5100_DEVICE_REVISION:
	case WM5100_FX_CTRL:
	case WM5100_INTERRUPT_STATUS_1:
	case WM5100_INTERRUPT_STATUS_2:
	case WM5100_INTERRUPT_STATUS_3:
	case WM5100_INTERRUPT_STATUS_4:
	case WM5100_INTERRUPT_RAW_STATUS_2:
	case WM5100_INTERRUPT_RAW_STATUS_3:
	case WM5100_INTERRUPT_RAW_STATUS_4:
	case WM5100_OUTPUT_STATUS_1:
	case WM5100_OUTPUT_STATUS_2:
	case WM5100_INPUT_ENABLES_STATUS:
	case WM5100_MIC_DETECT_3:
		return true;
	default:
		if ((reg >= WM5100_DSP1_PM_0 && reg <= WM5100_DSP1_PM_1535) ||
		    (reg >= WM5100_DSP1_ZM_0 && reg <= WM5100_DSP1_ZM_2047) ||
		    (reg >= WM5100_DSP1_DM_0 && reg <= WM5100_DSP1_DM_511) ||
		    (reg >= WM5100_DSP2_PM_0 && reg <= WM5100_DSP2_PM_1535) ||
		    (reg >= WM5100_DSP2_ZM_0 && reg <= WM5100_DSP2_ZM_2047) ||
		    (reg >= WM5100_DSP2_DM_0 && reg <= WM5100_DSP2_DM_511) ||
		    (reg >= WM5100_DSP3_PM_0 && reg <= WM5100_DSP3_PM_1535) ||
		    (reg >= WM5100_DSP3_ZM_0 && reg <= WM5100_DSP3_ZM_2047) ||
		    (reg >= WM5100_DSP3_DM_0 && reg <= WM5100_DSP3_DM_511))
			return true;
		else
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

    // big-arr
    case 0:
    {
          unsigned int reg = 255;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm5100_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
