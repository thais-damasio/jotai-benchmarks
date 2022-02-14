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
struct TYPE_2__ {int clock; int hAct_high; int vAct_high; int valid; int pwr_delay; scalar_t__ vblank; scalar_t__ vSync_width; scalar_t__ vOver_plus; scalar_t__ hblank; scalar_t__ hSync_width; scalar_t__ hOver_plus; int /*<<< orphan*/  yres; int /*<<< orphan*/  xres; } ;
struct radeonfb_info {TYPE_1__ panel_info; } ;
struct fb_var_screeninfo {int pixclock; int sync; scalar_t__ vsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ hsync_len; scalar_t__ right_margin; scalar_t__ left_margin; int /*<<< orphan*/  yres; int /*<<< orphan*/  xres; } ;

/* Variables and functions */
 int FB_SYNC_HOR_HIGH_ACT ; 
 int FB_SYNC_VERT_HIGH_ACT ; 

__attribute__((used)) static void radeon_var_to_panel_info(struct radeonfb_info *rinfo, struct fb_var_screeninfo *var)
{
	rinfo->panel_info.xres = var->xres;
	rinfo->panel_info.yres = var->yres;
	rinfo->panel_info.clock = 100000000 / var->pixclock;
	rinfo->panel_info.hOver_plus = var->right_margin;
	rinfo->panel_info.hSync_width = var->hsync_len;
       	rinfo->panel_info.hblank = var->left_margin +
		(var->right_margin + var->hsync_len);
	rinfo->panel_info.vOver_plus = var->lower_margin;
	rinfo->panel_info.vSync_width = var->vsync_len;
       	rinfo->panel_info.vblank = var->upper_margin +
		(var->lower_margin + var->vsync_len);
	rinfo->panel_info.hAct_high =
		(var->sync & FB_SYNC_HOR_HIGH_ACT) != 0;
	rinfo->panel_info.vAct_high =
		(var->sync & FB_SYNC_VERT_HIGH_ACT) != 0;
	rinfo->panel_info.valid = 1;
	/* We use a default of 200ms for the panel power delay, 
	 * I need to have a real schedule() instead of mdelay's in the panel code.
	 * we might be possible to figure out a better power delay either from
	 * MacOS OF tree or from the EDID block (proprietary extensions ?)
	 */
	rinfo->panel_info.pwr_delay = 200;
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
          int _len_rinfo0 = 1;
          struct radeonfb_info * rinfo = (struct radeonfb_info *) malloc(_len_rinfo0*sizeof(struct radeonfb_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo->panel_info.clock = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.hAct_high = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.vAct_high = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.pwr_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.vblank = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.vSync_width = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.vOver_plus = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.hblank = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.hSync_width = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.hOver_plus = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.yres = ((-2 * (next_i()%2)) + 1) * next_i();
        rinfo->panel_info.xres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var->sync = ((-2 * (next_i()%2)) + 1) * next_i();
        var->vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_var_to_panel_info(rinfo,var);
          free(rinfo);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
