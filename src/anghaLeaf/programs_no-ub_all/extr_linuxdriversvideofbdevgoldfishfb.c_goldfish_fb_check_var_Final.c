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
struct fb_var_screeninfo {int rotate; int xres; int yres; int xres_virtual; int yres_virtual; scalar_t__ xoffset; scalar_t__ bits_per_pixel; scalar_t__ grayscale; } ;
struct TYPE_2__ {int rotate; int yres; int xres; scalar_t__ xoffset; scalar_t__ bits_per_pixel; scalar_t__ grayscale; } ;
struct fb_info {TYPE_1__ var; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int goldfish_fb_check_var(struct fb_var_screeninfo *var,
							struct fb_info *info)
{
	if ((var->rotate & 1) != (info->var.rotate & 1)) {
		if ((var->xres != info->var.yres) ||
				(var->yres != info->var.xres) ||
				(var->xres_virtual != info->var.yres) ||
				(var->yres_virtual > info->var.xres * 2) ||
				(var->yres_virtual < info->var.xres)) {
			return -EINVAL;
		}
	} else {
		if ((var->xres != info->var.xres) ||
		   (var->yres != info->var.yres) ||
		   (var->xres_virtual != info->var.xres) ||
		   (var->yres_virtual > info->var.yres * 2) ||
		   (var->yres_virtual < info->var.yres)) {
			return -EINVAL;
		}
	}
	if ((var->xoffset != info->var.xoffset) ||
			(var->bits_per_pixel != info->var.bits_per_pixel) ||
			(var->grayscale != info->var.grayscale)) {
		return -EINVAL;
	}
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->rotate = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var->grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info->var.rotate = ((-2 * (next_i()%2)) + 1) * next_i();
        info->var.yres = ((-2 * (next_i()%2)) + 1) * next_i();
        info->var.xres = ((-2 * (next_i()%2)) + 1) * next_i();
        info->var.xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        info->var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        info->var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = goldfish_fb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
