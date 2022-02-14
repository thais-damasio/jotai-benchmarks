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
struct vfio_device_info {int /*<<< orphan*/  num_irqs; int /*<<< orphan*/  num_regions; int /*<<< orphan*/  flags; } ;
struct mdev_device {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  VFIO_DEVICE_FLAGS_PCI ; 
 int /*<<< orphan*/  VFIO_PCI_NUM_IRQS ; 
 int /*<<< orphan*/  VFIO_PCI_NUM_REGIONS ; 

int mtty_get_device_info(struct mdev_device *mdev,
			 struct vfio_device_info *dev_info)
{
	dev_info->flags = VFIO_DEVICE_FLAGS_PCI;
	dev_info->num_regions = VFIO_PCI_NUM_REGIONS;
	dev_info->num_irqs = VFIO_PCI_NUM_IRQS;

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

    // big-arr
    case 0:
    {
          int _len_mdev0 = 1;
          struct mdev_device * mdev = (struct mdev_device *) malloc(_len_mdev0*sizeof(struct mdev_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev_info0 = 1;
          struct vfio_device_info * dev_info = (struct vfio_device_info *) malloc(_len_dev_info0*sizeof(struct vfio_device_info));
          for(int _i0 = 0; _i0 < _len_dev_info0; _i0++) {
            dev_info->num_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_info->num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtty_get_device_info(mdev,dev_info);
          printf("%d\n", benchRet); 
          free(mdev);
          free(dev_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
