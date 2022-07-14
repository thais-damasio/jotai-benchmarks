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
#define  R_DACCRRDH 145 
#define  R_DACCRRDL 144 
#define  R_DACCRRDM 143 
#define  R_DACCRWDH 142 
#define  R_DACCRWDL 141 
#define  R_DACCRWDM 140 
#define  R_SPKCRRDH 139 
#define  R_SPKCRRDL 138 
#define  R_SPKCRRDM 137 
#define  R_SPKCRWDH 136 
#define  R_SPKCRWDL 135 
#define  R_SPKCRWDM 134 
#define  R_SUBCRRDH 133 
#define  R_SUBCRRDL 132 
#define  R_SUBCRRDM 131 
#define  R_SUBCRWDH 130 
#define  R_SUBCRWDL 129 
#define  R_SUBCRWDM 128 

__attribute__((used)) static bool tscs454_precious(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case R_SPKCRWDL:
	case R_SPKCRWDM:
	case R_SPKCRWDH:
	case R_SPKCRRDL:
	case R_SPKCRRDM:
	case R_SPKCRRDH:

	case R_DACCRWDL:
	case R_DACCRWDM:
	case R_DACCRWDH:
	case R_DACCRRDL:
	case R_DACCRRDM:
	case R_DACCRRDH:

	case R_SUBCRWDL:
	case R_SUBCRWDM:
	case R_SUBCRWDH:
	case R_SUBCRRDL:
	case R_SUBCRRDM:
	case R_SUBCRRDH:
		return true;
	default:
		return false;
	};
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
          int benchRet = tscs454_precious(dev,reg);
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
          int benchRet = tscs454_precious(dev,reg);
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
          int benchRet = tscs454_precious(dev,reg);
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