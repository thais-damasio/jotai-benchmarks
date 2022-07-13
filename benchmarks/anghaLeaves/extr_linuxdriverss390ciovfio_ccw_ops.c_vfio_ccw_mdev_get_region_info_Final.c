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
typedef  int /*<<< orphan*/  u16 ;
struct vfio_region_info {int index; int size; int flags; int /*<<< orphan*/  offset; } ;
struct ccw_io_region {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
#define  VFIO_CCW_CONFIG_REGION_INDEX 128 
 int VFIO_REGION_INFO_FLAG_READ ; 
 int VFIO_REGION_INFO_FLAG_WRITE ; 

__attribute__((used)) static int vfio_ccw_mdev_get_region_info(struct vfio_region_info *info,
					 u16 *cap_type_id,
					 void **cap_type)
{
	switch (info->index) {
	case VFIO_CCW_CONFIG_REGION_INDEX:
		info->offset = 0;
		info->size = sizeof(struct ccw_io_region);
		info->flags = VFIO_REGION_INFO_FLAG_READ
			      | VFIO_REGION_INFO_FLAG_WRITE;
		return 0;
	default:
		return -EINVAL;
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

    // int-bounds
    case 0:
    {
          int _len_info0 = 1;
          struct vfio_region_info * info = (struct vfio_region_info *) malloc(_len_info0*sizeof(struct vfio_region_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type_id0 = 1;
          int * cap_type_id = (int *) malloc(_len_cap_type_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cap_type_id0; _i0++) {
            cap_type_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type0 = 1;
          void ** cap_type = (void **) malloc(_len_cap_type0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cap_type0; _i0++) {
          }
          int benchRet = vfio_ccw_mdev_get_region_info(info,cap_type_id,cap_type);
          printf("%d\n", benchRet); 
          free(info);
          free(cap_type_id);
          for(int i1 = 0; i1 < _len_cap_type0; i1++) {
            int _len_cap_type1 = 1;
              }
          free(cap_type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct vfio_region_info * info = (struct vfio_region_info *) malloc(_len_info0*sizeof(struct vfio_region_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type_id0 = 65025;
          int * cap_type_id = (int *) malloc(_len_cap_type_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cap_type_id0; _i0++) {
            cap_type_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type0 = 65025;
          void ** cap_type = (void **) malloc(_len_cap_type0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cap_type0; _i0++) {
          }
          int benchRet = vfio_ccw_mdev_get_region_info(info,cap_type_id,cap_type);
          printf("%d\n", benchRet); 
          free(info);
          free(cap_type_id);
          for(int i1 = 0; i1 < _len_cap_type0; i1++) {
            int _len_cap_type1 = 1;
              }
          free(cap_type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct vfio_region_info * info = (struct vfio_region_info *) malloc(_len_info0*sizeof(struct vfio_region_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type_id0 = 100;
          int * cap_type_id = (int *) malloc(_len_cap_type_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cap_type_id0; _i0++) {
            cap_type_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap_type0 = 100;
          void ** cap_type = (void **) malloc(_len_cap_type0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cap_type0; _i0++) {
          }
          int benchRet = vfio_ccw_mdev_get_region_info(info,cap_type_id,cap_type);
          printf("%d\n", benchRet); 
          free(info);
          free(cap_type_id);
          for(int i1 = 0; i1 < _len_cap_type0; i1++) {
            int _len_cap_type1 = 1;
              }
          free(cap_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
