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
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int flags; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int V4L2_MBUS_DATA_ACTIVE_HIGH ; 
 int V4L2_MBUS_HSYNC_ACTIVE_HIGH ; 
 int V4L2_MBUS_HSYNC_ACTIVE_LOW ; 
 int V4L2_MBUS_MASTER ; 
 int /*<<< orphan*/  V4L2_MBUS_PARALLEL ; 
 int V4L2_MBUS_PCLK_SAMPLE_FALLING ; 
 int V4L2_MBUS_PCLK_SAMPLE_RISING ; 
 int V4L2_MBUS_VSYNC_ACTIVE_HIGH ; 
 int V4L2_MBUS_VSYNC_ACTIVE_LOW ; 

__attribute__((used)) static int ov6650_g_mbus_config(struct v4l2_subdev *sd,
				struct v4l2_mbus_config *cfg)
{

	cfg->flags = V4L2_MBUS_MASTER |
		V4L2_MBUS_PCLK_SAMPLE_RISING | V4L2_MBUS_PCLK_SAMPLE_FALLING |
		V4L2_MBUS_HSYNC_ACTIVE_HIGH | V4L2_MBUS_HSYNC_ACTIVE_LOW |
		V4L2_MBUS_VSYNC_ACTIVE_HIGH | V4L2_MBUS_VSYNC_ACTIVE_LOW |
		V4L2_MBUS_DATA_ACTIVE_HIGH;
	cfg->type = V4L2_MBUS_PARALLEL;

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
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 1;
          struct v4l2_mbus_config * cfg = (struct v4l2_mbus_config *) malloc(_len_cfg0*sizeof(struct v4l2_mbus_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov6650_g_mbus_config(sd,cfg);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sd0 = 65025;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 65025;
          struct v4l2_mbus_config * cfg = (struct v4l2_mbus_config *) malloc(_len_cfg0*sizeof(struct v4l2_mbus_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov6650_g_mbus_config(sd,cfg);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sd0 = 100;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 100;
          struct v4l2_mbus_config * cfg = (struct v4l2_mbus_config *) malloc(_len_cfg0*sizeof(struct v4l2_mbus_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov6650_g_mbus_config(sd,cfg);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
