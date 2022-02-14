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
struct regulator_dev {int dummy; } ;

/* Variables and functions */
 unsigned int REGULATOR_MODE_IDLE ; 
 unsigned int REGULATOR_MODE_NORMAL ; 
 unsigned int REGULATOR_MODE_STANDBY ; 

__attribute__((used)) static unsigned int wm831x_gp_ldo_get_optimum_mode(struct regulator_dev *rdev,
						   int input_uV,
						   int output_uV, int load_uA)
{
	if (load_uA < 20000)
		return REGULATOR_MODE_STANDBY;
	if (load_uA < 50000)
		return REGULATOR_MODE_IDLE;
	return REGULATOR_MODE_NORMAL;
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
          int input_uV = 255;
          int output_uV = 255;
          int load_uA = 255;
          int _len_rdev0 = 1;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = wm831x_gp_ldo_get_optimum_mode(rdev,input_uV,output_uV,load_uA);
          printf("%u\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}