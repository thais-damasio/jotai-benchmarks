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
typedef  int u32 ;
struct radeon_device {int dummy; } ;
typedef  enum radeon_pcie_gen { ____Placeholder_radeon_pcie_gen } radeon_pcie_gen ;

/* Variables and functions */
#define  RADEON_PCIE_GEN1 130 
#define  RADEON_PCIE_GEN2 129 
#define  RADEON_PCIE_GEN3 128 
 int RADEON_PCIE_SPEED_50 ; 
 int RADEON_PCIE_SPEED_80 ; 

enum radeon_pcie_gen r600_get_pcie_gen_support(struct radeon_device *rdev,
					       u32 sys_mask,
					       enum radeon_pcie_gen asic_gen,
					       enum radeon_pcie_gen default_gen)
{
	switch (asic_gen) {
	case RADEON_PCIE_GEN1:
		return RADEON_PCIE_GEN1;
	case RADEON_PCIE_GEN2:
		return RADEON_PCIE_GEN2;
	case RADEON_PCIE_GEN3:
		return RADEON_PCIE_GEN3;
	default:
		if ((sys_mask & RADEON_PCIE_SPEED_80) && (default_gen == RADEON_PCIE_GEN3))
			return RADEON_PCIE_GEN3;
		else if ((sys_mask & RADEON_PCIE_SPEED_50) && (default_gen == RADEON_PCIE_GEN2))
			return RADEON_PCIE_GEN2;
		else
			return RADEON_PCIE_GEN1;
	}
	return RADEON_PCIE_GEN1;
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
          int sys_mask = 255;
          enum radeon_pcie_gen asic_gen = 0;
          enum radeon_pcie_gen default_gen = 0;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum radeon_pcie_gen benchRet = r600_get_pcie_gen_support(rdev,sys_mask,asic_gen,default_gen);
          printf("{{other_type}} %p\n", &benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}