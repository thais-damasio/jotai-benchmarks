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
#define  ZPA2326_CTRL_REG0_REG 137 
#define  ZPA2326_CTRL_REG1_REG 136 
#define  ZPA2326_CTRL_REG2_REG 135 
#define  ZPA2326_CTRL_REG3_REG 134 
#define  ZPA2326_REF_P_H_REG 133 
#define  ZPA2326_REF_P_L_REG 132 
#define  ZPA2326_REF_P_XL_REG 131 
#define  ZPA2326_RES_CONF_REG 130 
#define  ZPA2326_THS_P_HIGH_REG 129 
#define  ZPA2326_THS_P_LOW_REG 128 

bool zpa2326_isreg_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case ZPA2326_REF_P_XL_REG:
	case ZPA2326_REF_P_L_REG:
	case ZPA2326_REF_P_H_REG:
	case ZPA2326_RES_CONF_REG:
	case ZPA2326_CTRL_REG0_REG:
	case ZPA2326_CTRL_REG1_REG:
	case ZPA2326_CTRL_REG2_REG:
	case ZPA2326_CTRL_REG3_REG:
	case ZPA2326_THS_P_LOW_REG:
	case ZPA2326_THS_P_HIGH_REG:
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

    // big-arr
    case 0:
    {
          unsigned int reg = 255;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zpa2326_isreg_writeable(dev,reg);
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