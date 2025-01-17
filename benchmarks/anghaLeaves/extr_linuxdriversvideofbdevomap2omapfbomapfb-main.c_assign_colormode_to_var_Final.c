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

/* Type definitions */
struct omapfb_colormode {int /*<<< orphan*/  transp; int /*<<< orphan*/  blue; int /*<<< orphan*/  green; int /*<<< orphan*/  red; int /*<<< orphan*/  nonstd; int /*<<< orphan*/  bits_per_pixel; } ;
struct fb_var_screeninfo {int /*<<< orphan*/  transp; int /*<<< orphan*/  blue; int /*<<< orphan*/  green; int /*<<< orphan*/  red; int /*<<< orphan*/  nonstd; int /*<<< orphan*/  bits_per_pixel; } ;

/* Variables and functions */

__attribute__((used)) static void assign_colormode_to_var(struct fb_var_screeninfo *var,
		struct omapfb_colormode *color)
{
	var->bits_per_pixel = color->bits_per_pixel;
	var->nonstd = color->nonstd;
	var->red = color->red;
	var->green = color->green;
	var->blue = color->blue;
	var->transp = color->transp;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].transp = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 1;
          struct omapfb_colormode * color = (struct omapfb_colormode *) malloc(_len_color0*sizeof(struct omapfb_colormode));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].transp = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].blue = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].green = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].red = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          assign_colormode_to_var(var,color);
          free(var);
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
