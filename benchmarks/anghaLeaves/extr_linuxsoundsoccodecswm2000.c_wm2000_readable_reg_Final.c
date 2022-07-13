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
struct device {int dummy; } ;

/* Variables and functions */
#define  WM2000_REG_ANA_MIC_CTL 150 
#define  WM2000_REG_ANA_VMID_PD_TIME 149 
#define  WM2000_REG_ANA_VMID_PU_TIME 148 
#define  WM2000_REG_ANC_GAIN_CTRL 147 
#define  WM2000_REG_ANC_STAT 146 
#define  WM2000_REG_CAT_FLTR_INDX 145 
#define  WM2000_REG_CAT_GAIN_0 144 
#define  WM2000_REG_ID1 143 
#define  WM2000_REG_ID2 142 
#define  WM2000_REG_IF_CTL 141 
#define  WM2000_REG_MSE_TH1 140 
#define  WM2000_REG_MSE_TH2 139 
#define  WM2000_REG_REVISON 138 
#define  WM2000_REG_SPEECH_CLARITY 137 
#define  WM2000_REG_SPK_CTL 136 
#define  WM2000_REG_SYS_CTL1 135 
#define  WM2000_REG_SYS_CTL2 134 
#define  WM2000_REG_SYS_MODE_CNTRL 133 
#define  WM2000_REG_SYS_START 132 
#define  WM2000_REG_SYS_START0 131 
#define  WM2000_REG_SYS_START1 130 
#define  WM2000_REG_SYS_STATUS 129 
#define  WM2000_REG_SYS_WATCHDOG 128 

__attribute__((used)) static bool wm2000_readable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM2000_REG_SYS_START:
	case WM2000_REG_ANC_GAIN_CTRL:
	case WM2000_REG_MSE_TH1:
	case WM2000_REG_MSE_TH2:
	case WM2000_REG_SPEECH_CLARITY:
	case WM2000_REG_SYS_WATCHDOG:
	case WM2000_REG_ANA_VMID_PD_TIME:
	case WM2000_REG_ANA_VMID_PU_TIME:
	case WM2000_REG_CAT_FLTR_INDX:
	case WM2000_REG_CAT_GAIN_0:
	case WM2000_REG_SYS_STATUS:
	case WM2000_REG_SYS_MODE_CNTRL:
	case WM2000_REG_SYS_START0:
	case WM2000_REG_SYS_START1:
	case WM2000_REG_ID1:
	case WM2000_REG_ID2:
	case WM2000_REG_REVISON:
	case WM2000_REG_SYS_CTL1:
	case WM2000_REG_SYS_CTL2:
	case WM2000_REG_ANC_STAT:
	case WM2000_REG_IF_CTL:
	case WM2000_REG_ANA_MIC_CTL:
	case WM2000_REG_SPK_CTL:
		return true;
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm2000_readable_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm2000_readable_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm2000_readable_reg(dev,reg);
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
