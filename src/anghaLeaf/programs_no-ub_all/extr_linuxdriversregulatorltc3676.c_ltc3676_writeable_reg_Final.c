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
#define  LTC3676_BUCK1 150 
#define  LTC3676_BUCK2 149 
#define  LTC3676_BUCK3 148 
#define  LTC3676_BUCK4 147 
#define  LTC3676_CLIRQ 146 
#define  LTC3676_CNTRL 145 
#define  LTC3676_DVB1A 144 
#define  LTC3676_DVB1B 143 
#define  LTC3676_DVB2A 142 
#define  LTC3676_DVB2B 141 
#define  LTC3676_DVB3A 140 
#define  LTC3676_DVB3B 139 
#define  LTC3676_DVB4A 138 
#define  LTC3676_DVB4B 137 
#define  LTC3676_HRST 136 
#define  LTC3676_IRQSTAT 135 
#define  LTC3676_LDOA 134 
#define  LTC3676_LDOB 133 
#define  LTC3676_MSKIRQ 132 
#define  LTC3676_MSKPG 131 
#define  LTC3676_SQD1 130 
#define  LTC3676_SQD2 129 
#define  LTC3676_USER 128 

__attribute__((used)) static bool ltc3676_writeable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case LTC3676_IRQSTAT:
	case LTC3676_BUCK1:
	case LTC3676_BUCK2:
	case LTC3676_BUCK3:
	case LTC3676_BUCK4:
	case LTC3676_LDOA:
	case LTC3676_LDOB:
	case LTC3676_SQD1:
	case LTC3676_SQD2:
	case LTC3676_CNTRL:
	case LTC3676_DVB1A:
	case LTC3676_DVB1B:
	case LTC3676_DVB2A:
	case LTC3676_DVB2B:
	case LTC3676_DVB3A:
	case LTC3676_DVB3B:
	case LTC3676_DVB4A:
	case LTC3676_DVB4B:
	case LTC3676_MSKIRQ:
	case LTC3676_MSKPG:
	case LTC3676_USER:
	case LTC3676_HRST:
	case LTC3676_CLIRQ:
		return true;
	}
	return false;
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
          int benchRet = ltc3676_writeable_reg(dev,reg);
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
