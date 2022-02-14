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
struct fb_var_screeninfo {int pixclock; unsigned long xres; unsigned long left_margin; unsigned long right_margin; unsigned long hsync_len; unsigned long yres; unsigned long upper_margin; unsigned long lower_margin; unsigned long vsync_len; } ;
struct fb_monspecs {unsigned long vfmin; unsigned long vfmax; unsigned long hfmin; unsigned long hfmax; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int
acornfb_validate_timing(struct fb_var_screeninfo *var,
			struct fb_monspecs *monspecs)
{
	unsigned long hs, vs;

	/*
	 * hs(Hz) = 10^12 / (pixclock * xtotal)
	 * vs(Hz) = hs(Hz) / ytotal
	 *
	 * No need to do long long divisions or anything
	 * like that if you factor it correctly
	 */
	hs = 1953125000 / var->pixclock;
	hs = hs * 512 /
	     (var->xres + var->left_margin + var->right_margin + var->hsync_len);
	vs = hs /
	     (var->yres + var->upper_margin + var->lower_margin + var->vsync_len);

	return (vs >= monspecs->vfmin && vs <= monspecs->vfmax &&
		hs >= monspecs->hfmin && hs <= monspecs->hfmax) ? 0 : -EINVAL;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_monspecs0 = 1;
          struct fb_monspecs * monspecs = (struct fb_monspecs *) malloc(_len_monspecs0*sizeof(struct fb_monspecs));
          for(int _i0 = 0; _i0 < _len_monspecs0; _i0++) {
            monspecs->vfmin = ((-2 * (next_i()%2)) + 1) * next_i();
        monspecs->vfmax = ((-2 * (next_i()%2)) + 1) * next_i();
        monspecs->hfmin = ((-2 * (next_i()%2)) + 1) * next_i();
        monspecs->hfmax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acornfb_validate_timing(var,monspecs);
          printf("%d\n", benchRet); 
          free(var);
          free(monspecs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
