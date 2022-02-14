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
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {int index; scalar_t__ width; scalar_t__ height; TYPE_1__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ VGA_HEIGHT ; 
 scalar_t__ VGA_WIDTH ; 

__attribute__((used)) static int ov7740_enum_frame_interval(struct v4l2_subdev *sd,
				struct v4l2_subdev_pad_config *cfg,
				struct v4l2_subdev_frame_interval_enum *fie)
{
	if (fie->pad)
		return -EINVAL;

	if (fie->index >= 1)
		return -EINVAL;

	if ((fie->width != VGA_WIDTH) || (fie->height != VGA_HEIGHT))
		return -EINVAL;

	fie->interval.numerator = 1;
	fie->interval.denominator = 60;

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
          int _len_fie0 = 1;
          struct v4l2_subdev_frame_interval_enum * fie = (struct v4l2_subdev_frame_interval_enum *) malloc(_len_fie0*sizeof(struct v4l2_subdev_frame_interval_enum));
          for(int _i0 = 0; _i0 < _len_fie0; _i0++) {
            fie->index = ((-2 * (next_i()%2)) + 1) * next_i();
        fie->width = ((-2 * (next_i()%2)) + 1) * next_i();
        fie->height = ((-2 * (next_i()%2)) + 1) * next_i();
        fie->interval.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        fie->interval.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        fie->pad = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov7740_enum_frame_interval(sd,cfg,fie);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
          free(fie);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
