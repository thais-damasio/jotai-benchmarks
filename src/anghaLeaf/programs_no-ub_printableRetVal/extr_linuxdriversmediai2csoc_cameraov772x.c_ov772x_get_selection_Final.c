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
struct TYPE_2__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  OV772X_MAX_HEIGHT ; 
 int /*<<< orphan*/  OV772X_MAX_WIDTH ; 
#define  V4L2_SEL_TGT_CROP 130 
#define  V4L2_SEL_TGT_CROP_BOUNDS 129 
#define  V4L2_SEL_TGT_CROP_DEFAULT 128 
 scalar_t__ V4L2_SUBDEV_FORMAT_ACTIVE ; 
 int /*<<< orphan*/  VGA_HEIGHT ; 
 int /*<<< orphan*/  VGA_WIDTH ; 

__attribute__((used)) static int ov772x_get_selection(struct v4l2_subdev *sd,
		struct v4l2_subdev_pad_config *cfg,
		struct v4l2_subdev_selection *sel)
{
	if (sel->which != V4L2_SUBDEV_FORMAT_ACTIVE)
		return -EINVAL;

	sel->r.left = 0;
	sel->r.top = 0;
	switch (sel->target) {
	case V4L2_SEL_TGT_CROP_BOUNDS:
	case V4L2_SEL_TGT_CROP_DEFAULT:
		sel->r.width = OV772X_MAX_WIDTH;
		sel->r.height = OV772X_MAX_HEIGHT;
		return 0;
	case V4L2_SEL_TGT_CROP:
		sel->r.width = VGA_WIDTH;
		sel->r.height = VGA_HEIGHT;
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

    // big-arr
    case 0:
    {
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 1;
          struct v4l2_subdev_pad_config * cfg = (struct v4l2_subdev_pad_config *) malloc(_len_cfg0*sizeof(struct v4l2_subdev_pad_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sel0 = 1;
          struct v4l2_subdev_selection * sel = (struct v4l2_subdev_selection *) malloc(_len_sel0*sizeof(struct v4l2_subdev_selection));
          for(int _i0 = 0; _i0 < _len_sel0; _i0++) {
            sel->which = ((-2 * (next_i()%2)) + 1) * next_i();
        sel->target = ((-2 * (next_i()%2)) + 1) * next_i();
        sel->r.height = ((-2 * (next_i()%2)) + 1) * next_i();
        sel->r.width = ((-2 * (next_i()%2)) + 1) * next_i();
        sel->r.top = ((-2 * (next_i()%2)) + 1) * next_i();
        sel->r.left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov772x_get_selection(sd,cfg,sel);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
          free(sel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}