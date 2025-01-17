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
       1            big-arr-10x\n\
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
struct fb_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int platinumfb_blank(int blank,  struct fb_info *fb)
{
/*
 *  Blank the screen if blank_mode != 0, else unblank. If blank == NULL
 *  then the caller blanks by setting the CLUT (Color Look Up Table) to all
 *  black. Return 0 if blanking succeeded, != 0 if un-/blanking failed due
 *  to e.g. a video mode which doesn't support it. Implements VESA suspend
 *  and powerdown modes on hardware that supports disabling hsync/vsync:
 *    blank_mode == 2: suspend vsync
 *    blank_mode == 3: suspend hsync
 *    blank_mode == 4: powerdown
 */
/* [danj] I think there's something fishy about those constants... */
/*
	struct fb_info_platinum *info = (struct fb_info_platinum *) fb;
	int	ctrl;

	ctrl = le32_to_cpup(&info->platinum_regs->ctrl.r) | 0x33;
	if (blank)
		--blank_mode;
	if (blank & VESA_VSYNC_SUSPEND)
		ctrl &= ~3;
	if (blank & VESA_HSYNC_SUSPEND)
		ctrl &= ~0x30;
	out_le32(&info->platinum_regs->ctrl.r, ctrl);
*/
/* TODO: Figure out how the heck to powerdown this thing! */
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
          int blank = 100;
          int _len_fb0 = 1;
          struct fb_info * fb = (struct fb_info *) malloc(_len_fb0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = platinumfb_blank(blank,fb);
          printf("%d\n", benchRet); 
          free(fb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int blank = 10;
          int _len_fb0 = 100;
          struct fb_info * fb = (struct fb_info *) malloc(_len_fb0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = platinumfb_blank(blank,fb);
          printf("%d\n", benchRet); 
          free(fb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
