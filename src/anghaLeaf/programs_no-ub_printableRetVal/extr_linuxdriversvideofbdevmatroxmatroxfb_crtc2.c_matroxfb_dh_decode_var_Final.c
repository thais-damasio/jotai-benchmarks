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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {unsigned int len_usable; } ;
struct matroxfb_dh_fb_info {TYPE_1__ video; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres_virtual; int yres; int xres_virtual; int xres; int xoffset; int yoffset; int left_margin; int right_margin; int hsync_len; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;

/* Variables and functions */
 int EINVAL ; 
 int FB_VISUAL_TRUECOLOR ; 

__attribute__((used)) static int matroxfb_dh_decode_var(struct matroxfb_dh_fb_info* m2info,
		struct fb_var_screeninfo* var,
		int *visual,
		int *video_cmap_len,
		int *mode) {
	unsigned int mask;
	unsigned int memlen;
	unsigned int vramlen;

	switch (var->bits_per_pixel) {
		case 16:	mask = 0x1F;
				break;
		case 32:	mask = 0x0F;
				break;
		default:	return -EINVAL;
	}
	vramlen = m2info->video.len_usable;
	if (var->yres_virtual < var->yres)
		var->yres_virtual = var->yres;
	if (var->xres_virtual < var->xres)
		var->xres_virtual = var->xres;
	var->xres_virtual = (var->xres_virtual + mask) & ~mask;
	if (var->yres_virtual > 32767)
		return -EINVAL;
	memlen = var->xres_virtual * var->yres_virtual * (var->bits_per_pixel >> 3);
	if (memlen > vramlen)
		return -EINVAL;
	if (var->xoffset + var->xres > var->xres_virtual)
		var->xoffset = var->xres_virtual - var->xres;
	if (var->yoffset + var->yres > var->yres_virtual)
		var->yoffset = var->yres_virtual - var->yres;

	var->xres &= ~7;
	var->left_margin &= ~7;
	var->right_margin &= ~7;
	var->hsync_len &= ~7;

	*mode = var->bits_per_pixel;
	if (var->bits_per_pixel == 16) {
		if (var->green.length == 5) {
			var->red.offset = 10;
			var->red.length = 5;
			var->green.offset = 5;
			var->green.length = 5;
			var->blue.offset = 0;
			var->blue.length = 5;
			var->transp.offset = 15;
			var->transp.length = 1;
			*mode = 15;
		} else {
			var->red.offset = 11;
			var->red.length = 5;
			var->green.offset = 5;
			var->green.length = 6;
			var->blue.offset = 0;
			var->blue.length = 5;
			var->transp.offset = 0;
			var->transp.length = 0;
		}
	} else {
			var->red.offset = 16;
			var->red.length = 8;
			var->green.offset = 8;
			var->green.length = 8;
			var->blue.offset = 0;
			var->blue.length = 8;
			var->transp.offset = 24;
			var->transp.length = 8;
	}
	*visual = FB_VISUAL_TRUECOLOR;
	*video_cmap_len = 16;
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
          int _len_m2info0 = 1;
          struct matroxfb_dh_fb_info * m2info = (struct matroxfb_dh_fb_info *) malloc(_len_m2info0*sizeof(struct matroxfb_dh_fb_info));
          for(int _i0 = 0; _i0 < _len_m2info0; _i0++) {
            m2info->video.len_usable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_visual0 = 65025;
          int * visual = (int *) malloc(_len_visual0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_visual0; _i0++) {
            visual[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_video_cmap_len0 = 65025;
          int * video_cmap_len = (int *) malloc(_len_video_cmap_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_video_cmap_len0; _i0++) {
            video_cmap_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 65025;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = matroxfb_dh_decode_var(m2info,var,visual,video_cmap_len,mode);
          printf("%d\n", benchRet); 
          free(m2info);
          free(var);
          free(visual);
          free(video_cmap_len);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}