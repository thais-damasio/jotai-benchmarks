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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct vop_vdev {TYPE_1__* dd; } ;
struct mic_copy_desc {scalar_t__ vr_idx; } ;
struct TYPE_2__ {scalar_t__ num_vq; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int vop_verify_copy_args(struct vop_vdev *vdev,
				       struct mic_copy_desc *copy)
{
	if (!vdev || copy->vr_idx >= vdev->dd->num_vq)
		return -EINVAL;
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
          int _len_vdev0 = 1;
          struct vop_vdev * vdev = (struct vop_vdev *) malloc(_len_vdev0*sizeof(struct vop_vdev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              int _len_vdev__i0__dd0 = 1;
          vdev[_i0].dd = (struct TYPE_2__ *) malloc(_len_vdev__i0__dd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vdev__i0__dd0; _j0++) {
            vdev[_i0].dd->num_vq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_copy0 = 1;
          struct mic_copy_desc * copy = (struct mic_copy_desc *) malloc(_len_copy0*sizeof(struct mic_copy_desc));
          for(int _i0 = 0; _i0 < _len_copy0; _i0++) {
            copy[_i0].vr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vop_verify_copy_args(vdev,copy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].dd);
          }
          free(vdev);
          free(copy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
