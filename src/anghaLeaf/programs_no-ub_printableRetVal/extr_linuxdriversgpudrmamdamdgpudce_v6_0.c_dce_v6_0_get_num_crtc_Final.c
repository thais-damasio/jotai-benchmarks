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
struct amdgpu_device {int asic_type; } ;

/* Variables and functions */
#define  CHIP_OLAND 131 
#define  CHIP_PITCAIRN 130 
#define  CHIP_TAHITI 129 
#define  CHIP_VERDE 128 

__attribute__((used)) static int dce_v6_0_get_num_crtc(struct amdgpu_device *adev)
{
	switch (adev->asic_type) {
	case CHIP_TAHITI:
	case CHIP_PITCAIRN:
	case CHIP_VERDE:
		return 6;
	case CHIP_OLAND:
		return 2;
	default:
		return 0;
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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev->asic_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dce_v6_0_get_num_crtc(adev);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}