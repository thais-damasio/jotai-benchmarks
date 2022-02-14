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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ pcie_dev_rdy; scalar_t__ pcie_perf_req; } ;
struct radeon_atcs {TYPE_1__ functions; } ;
struct radeon_device {struct radeon_atcs atcs; } ;

/* Variables and functions */

bool radeon_acpi_is_pcie_performance_request_supported(struct radeon_device *rdev)
{
	struct radeon_atcs *atcs = &rdev->atcs;

	if (atcs->functions.pcie_perf_req && atcs->functions.pcie_dev_rdy)
		return true;

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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev->atcs.functions.pcie_dev_rdy = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev->atcs.functions.pcie_perf_req = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = radeon_acpi_is_pcie_performance_request_supported(rdev);
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
