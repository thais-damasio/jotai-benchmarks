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

/* Variables and functions */
#define  ALGORITHM_LEFT_ASYMMETRIC_6 134 
#define  ALGORITHM_LEFT_SYMMETRIC_6 133 
#define  ALGORITHM_PARITY_0 132 
#define  ALGORITHM_PARITY_0_6 131 
#define  ALGORITHM_PARITY_N 130 
#define  ALGORITHM_RIGHT_ASYMMETRIC_6 129 
#define  ALGORITHM_RIGHT_SYMMETRIC_6 128 

__attribute__((used)) static int only_parity(int raid_disk, int algo, int raid_disks, int max_degraded)
{
	switch (algo) {
	case ALGORITHM_PARITY_0:
		if (raid_disk < max_degraded)
			return 1;
		break;
	case ALGORITHM_PARITY_N:
		if (raid_disk >= raid_disks - max_degraded)
			return 1;
		break;
	case ALGORITHM_PARITY_0_6:
		if (raid_disk == 0 ||
		    raid_disk == raid_disks - 1)
			return 1;
		break;
	case ALGORITHM_LEFT_ASYMMETRIC_6:
	case ALGORITHM_RIGHT_ASYMMETRIC_6:
	case ALGORITHM_LEFT_SYMMETRIC_6:
	case ALGORITHM_RIGHT_SYMMETRIC_6:
		if (raid_disk == raid_disks - 1)
			return 1;
	}
	return 0;
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
          int raid_disk = 100;
          int algo = 100;
          int raid_disks = 100;
          int max_degraded = 100;
          int benchRet = only_parity(raid_disk,algo,raid_disks,max_degraded);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int raid_disk = 255;
          int algo = 255;
          int raid_disks = 255;
          int max_degraded = 255;
          int benchRet = only_parity(raid_disk,algo,raid_disks,max_degraded);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int raid_disk = 10;
          int algo = 10;
          int raid_disks = 10;
          int max_degraded = 10;
          int benchRet = only_parity(raid_disk,algo,raid_disks,max_degraded);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
