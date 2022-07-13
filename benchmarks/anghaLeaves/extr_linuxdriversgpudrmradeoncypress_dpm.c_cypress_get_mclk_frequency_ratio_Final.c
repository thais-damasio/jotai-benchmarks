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
typedef  int u8 ;
typedef  int u32 ;
struct radeon_device {scalar_t__ family; } ;

/* Variables and functions */
 scalar_t__ CHIP_BARTS ; 

u8 cypress_get_mclk_frequency_ratio(struct radeon_device *rdev,
				    u32 memory_clock, bool strobe_mode)
{
	u8 mc_para_index;

	if (rdev->family >= CHIP_BARTS) {
		if (strobe_mode) {
			if (memory_clock < 10000)
				mc_para_index = 0x00;
			else if (memory_clock > 47500)
				mc_para_index = 0x0f;
			else
				mc_para_index = (u8)((memory_clock - 10000) / 2500);
		} else {
			if (memory_clock < 65000)
				mc_para_index = 0x00;
			else if (memory_clock > 135000)
				mc_para_index = 0x0f;
			else
				mc_para_index = (u8)((memory_clock - 60000) / 5000);
		}
	} else {
		if (strobe_mode) {
			if (memory_clock < 10000)
				mc_para_index = 0x00;
			else if (memory_clock > 47500)
				mc_para_index = 0x0f;
			else
				mc_para_index = (u8)((memory_clock - 10000) / 2500);
		} else {
			if (memory_clock < 40000)
				mc_para_index = 0x00;
			else if (memory_clock > 115000)
				mc_para_index = 0x0f;
			else
				mc_para_index = (u8)((memory_clock - 40000) / 5000);
		}
	}
	return mc_para_index;
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
          int memory_clock = 100;
          int strobe_mode = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cypress_get_mclk_frequency_ratio(rdev,memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int memory_clock = 255;
          int strobe_mode = 255;
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cypress_get_mclk_frequency_ratio(rdev,memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int memory_clock = 10;
          int strobe_mode = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cypress_get_mclk_frequency_ratio(rdev,memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
