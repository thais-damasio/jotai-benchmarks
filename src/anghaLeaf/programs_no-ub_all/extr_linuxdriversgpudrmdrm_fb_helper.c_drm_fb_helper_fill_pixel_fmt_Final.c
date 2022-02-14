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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; int /*<<< orphan*/  offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;

/* Variables and functions */

__attribute__((used)) static void drm_fb_helper_fill_pixel_fmt(struct fb_var_screeninfo *var,
					 u8 depth)
{
	switch (depth) {
	case 8:
		var->red.offset = 0;
		var->green.offset = 0;
		var->blue.offset = 0;
		var->red.length = 8; /* 8bit DAC */
		var->green.length = 8;
		var->blue.length = 8;
		var->transp.offset = 0;
		var->transp.length = 0;
		break;
	case 15:
		var->red.offset = 10;
		var->green.offset = 5;
		var->blue.offset = 0;
		var->red.length = 5;
		var->green.length = 5;
		var->blue.length = 5;
		var->transp.offset = 15;
		var->transp.length = 1;
		break;
	case 16:
		var->red.offset = 11;
		var->green.offset = 5;
		var->blue.offset = 0;
		var->red.length = 5;
		var->green.length = 6;
		var->blue.length = 5;
		var->transp.offset = 0;
		break;
	case 24:
		var->red.offset = 16;
		var->green.offset = 8;
		var->blue.offset = 0;
		var->red.length = 8;
		var->green.length = 8;
		var->blue.length = 8;
		var->transp.offset = 0;
		var->transp.length = 0;
		break;
	case 32:
		var->red.offset = 16;
		var->green.offset = 8;
		var->blue.offset = 0;
		var->red.length = 8;
		var->green.length = 8;
		var->blue.length = 8;
		var->transp.offset = 24;
		var->transp.length = 8;
		break;
	default:
		break;
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
          int depth = 255;
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_fb_helper_fill_pixel_fmt(var,depth);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
