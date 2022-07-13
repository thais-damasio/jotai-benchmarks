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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int u32 ;
struct TYPE_2__ {scalar_t__ grayscale; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_1__ var; } ;

/* Variables and functions */
 unsigned int BLUE_SHIFT ; 
 int EINVAL ; 
 unsigned int GREEN_SHIFT ; 
 unsigned int PALETTE_ENTRIES_NO ; 
 unsigned int RED_SHIFT ; 

__attribute__((used)) static int
xilinx_fb_setcolreg(unsigned int regno, unsigned int red, unsigned int green,
		    unsigned int blue, unsigned int transp, struct fb_info *fbi)
{
	u32 *palette = fbi->pseudo_palette;

	if (regno >= PALETTE_ENTRIES_NO)
		return -EINVAL;

	if (fbi->var.grayscale) {
		/* Convert color to grayscale.
		 * grayscale = 0.30*R + 0.59*G + 0.11*B
		 */
		blue = (red * 77 + green * 151 + blue * 28 + 127) >> 8;
		green = blue;
		red = green;
	}

	/* fbi->fix.visual is always FB_VISUAL_TRUECOLOR */

	/* We only handle 8 bits of each color. */
	red >>= 8;
	green >>= 8;
	blue >>= 8;
	palette[regno] = (red << RED_SHIFT) | (green << GREEN_SHIFT) |
			 (blue << BLUE_SHIFT);

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
          unsigned int regno = 100;
          unsigned int red = 100;
          unsigned int green = 100;
          unsigned int blue = 100;
          unsigned int transp = 100;
          int _len_fbi0 = 1;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
              int _len_fbi__i0__pseudo_palette0 = 1;
          fbi[_i0].pseudo_palette = (unsigned int *) malloc(_len_fbi__i0__pseudo_palette0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_fbi__i0__pseudo_palette0; _j0++) {
            fbi[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xilinx_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fbi0; _aux++) {
          free(fbi[_aux].pseudo_palette);
          }
          free(fbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int regno = 255;
          unsigned int red = 255;
          unsigned int green = 255;
          unsigned int blue = 255;
          unsigned int transp = 255;
          int _len_fbi0 = 65025;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
              int _len_fbi__i0__pseudo_palette0 = 1;
          fbi[_i0].pseudo_palette = (unsigned int *) malloc(_len_fbi__i0__pseudo_palette0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_fbi__i0__pseudo_palette0; _j0++) {
            fbi[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xilinx_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fbi0; _aux++) {
          free(fbi[_aux].pseudo_palette);
          }
          free(fbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int regno = 10;
          unsigned int red = 10;
          unsigned int green = 10;
          unsigned int blue = 10;
          unsigned int transp = 10;
          int _len_fbi0 = 100;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
              int _len_fbi__i0__pseudo_palette0 = 1;
          fbi[_i0].pseudo_palette = (unsigned int *) malloc(_len_fbi__i0__pseudo_palette0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_fbi__i0__pseudo_palette0; _j0++) {
            fbi[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xilinx_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fbi0; _aux++) {
          free(fbi[_aux].pseudo_palette);
          }
          free(fbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
