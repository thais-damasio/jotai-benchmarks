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
#define  TAS6424_AC_LOAD_DIAG_REP1 139 
#define  TAS6424_AC_LOAD_DIAG_REP2 138 
#define  TAS6424_AC_LOAD_DIAG_REP3 137 
#define  TAS6424_AC_LOAD_DIAG_REP4 136 
#define  TAS6424_CHANNEL_FAULT 135 
#define  TAS6424_CHANNEL_STATE 134 
#define  TAS6424_DC_LOAD_DIAG_REP12 133 
#define  TAS6424_DC_LOAD_DIAG_REP34 132 
#define  TAS6424_DC_LOAD_DIAG_REPLO 131 
#define  TAS6424_GLOB_FAULT1 130 
#define  TAS6424_GLOB_FAULT2 129 
#define  TAS6424_WARN 128 

__attribute__((used)) static bool tas6424_is_volatile_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case TAS6424_DC_LOAD_DIAG_REP12:
	case TAS6424_DC_LOAD_DIAG_REP34:
	case TAS6424_DC_LOAD_DIAG_REPLO:
	case TAS6424_CHANNEL_STATE:
	case TAS6424_CHANNEL_FAULT:
	case TAS6424_GLOB_FAULT1:
	case TAS6424_GLOB_FAULT2:
	case TAS6424_WARN:
	case TAS6424_AC_LOAD_DIAG_REP1:
	case TAS6424_AC_LOAD_DIAG_REP2:
	case TAS6424_AC_LOAD_DIAG_REP3:
	case TAS6424_AC_LOAD_DIAG_REP4:
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
          int benchRet = tas6424_is_volatile_reg(dev,reg);
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
