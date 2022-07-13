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
typedef  int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;

/* Variables and functions */
 int V4L2_STD_NTSC ; 
 int V4L2_STD_PAL ; 

__attribute__((used)) static int tw9910_g_tvnorms(struct v4l2_subdev *sd, v4l2_std_id *norm)
{
	*norm = V4L2_STD_NTSC | V4L2_STD_PAL;
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
          int _len_norm0 = 1;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tw9910_g_tvnorms(sd,norm);
          printf("%d\n", benchRet); 
          free(sd);
          free(norm);
        
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
          int _len_norm0 = 65025;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tw9910_g_tvnorms(sd,norm);
          printf("%d\n", benchRet); 
          free(sd);
          free(norm);
        
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
          int _len_norm0 = 100;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tw9910_g_tvnorms(sd,norm);
          printf("%d\n", benchRet); 
          free(sd);
          free(norm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
