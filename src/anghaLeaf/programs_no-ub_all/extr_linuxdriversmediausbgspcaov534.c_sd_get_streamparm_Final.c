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
struct v4l2_fract {int numerator; int /*<<< orphan*/  denominator; } ;
struct v4l2_captureparm {struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct sd {int /*<<< orphan*/  frame_rate; } ;
struct gspca_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void sd_get_streamparm(struct gspca_dev *gspca_dev,
			     struct v4l2_streamparm *parm)
{
	struct v4l2_captureparm *cp = &parm->parm.capture;
	struct v4l2_fract *tpf = &cp->timeperframe;
	struct sd *sd = (struct sd *) gspca_dev;

	tpf->numerator = 1;
	tpf->denominator = sd->frame_rate;
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
          int _len_gspca_dev0 = 1;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
            gspca_dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parm0 = 1;
          struct v4l2_streamparm * parm = (struct v4l2_streamparm *) malloc(_len_parm0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_parm0; _i0++) {
            parm->parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        parm->parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sd_get_streamparm(gspca_dev,parm);
          free(gspca_dev);
          free(parm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}