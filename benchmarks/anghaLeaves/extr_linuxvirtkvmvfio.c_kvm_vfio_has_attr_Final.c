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
struct kvm_device_attr {int group; int /*<<< orphan*/  attr; } ;
struct kvm_device {int dummy; } ;

/* Variables and functions */
 int ENXIO ; 
#define  KVM_DEV_VFIO_GROUP 130 
#define  KVM_DEV_VFIO_GROUP_ADD 129 
#define  KVM_DEV_VFIO_GROUP_DEL 128 

__attribute__((used)) static int kvm_vfio_has_attr(struct kvm_device *dev,
			     struct kvm_device_attr *attr)
{
	switch (attr->group) {
	case KVM_DEV_VFIO_GROUP:
		switch (attr->attr) {
		case KVM_DEV_VFIO_GROUP_ADD:
		case KVM_DEV_VFIO_GROUP_DEL:
#ifdef CONFIG_SPAPR_TCE_IOMMU
		case KVM_DEV_VFIO_GROUP_SET_SPAPR_TCE:
#endif
			return 0;
		}

		break;
	}

	return -ENXIO;
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
          int _len_dev0 = 1;
          struct kvm_device * dev = (struct kvm_device *) malloc(_len_dev0*sizeof(struct kvm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct kvm_device_attr * attr = (struct kvm_device_attr *) malloc(_len_attr0*sizeof(struct kvm_device_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].group = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vfio_has_attr(dev,attr);
          printf("%d\n", benchRet); 
          free(dev);
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct kvm_device * dev = (struct kvm_device *) malloc(_len_dev0*sizeof(struct kvm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 65025;
          struct kvm_device_attr * attr = (struct kvm_device_attr *) malloc(_len_attr0*sizeof(struct kvm_device_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].group = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vfio_has_attr(dev,attr);
          printf("%d\n", benchRet); 
          free(dev);
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct kvm_device * dev = (struct kvm_device *) malloc(_len_dev0*sizeof(struct kvm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 100;
          struct kvm_device_attr * attr = (struct kvm_device_attr *) malloc(_len_attr0*sizeof(struct kvm_device_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].group = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vfio_has_attr(dev,attr);
          printf("%d\n", benchRet); 
          free(dev);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}