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
#define  REG_SPDIF_SCR 142 
#define  REG_SPDIF_SIE 141 
#define  REG_SPDIF_SIS 140 
#define  REG_SPDIF_SRCD 139 
#define  REG_SPDIF_SRCSH 138 
#define  REG_SPDIF_SRCSL 137 
#define  REG_SPDIF_SRFM 136 
#define  REG_SPDIF_SRL 135 
#define  REG_SPDIF_SRPC 134 
#define  REG_SPDIF_SRQ 133 
#define  REG_SPDIF_SRR 132 
#define  REG_SPDIF_SRU 131 
#define  REG_SPDIF_STC 130 
#define  REG_SPDIF_STCSCH 129 
#define  REG_SPDIF_STCSCL 128 

__attribute__((used)) static bool fsl_spdif_readable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case REG_SPDIF_SCR:
	case REG_SPDIF_SRCD:
	case REG_SPDIF_SRPC:
	case REG_SPDIF_SIE:
	case REG_SPDIF_SIS:
	case REG_SPDIF_SRL:
	case REG_SPDIF_SRR:
	case REG_SPDIF_SRCSH:
	case REG_SPDIF_SRCSL:
	case REG_SPDIF_SRU:
	case REG_SPDIF_SRQ:
	case REG_SPDIF_STCSCH:
	case REG_SPDIF_STCSCL:
	case REG_SPDIF_SRFM:
	case REG_SPDIF_STC:
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
          int benchRet = fsl_spdif_readable_reg(dev,reg);
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
