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
struct TYPE_2__ {int vram_size; } ;
struct cirrus_device {TYPE_1__ mc; } ;

/* Variables and functions */
 int cirrus_bpp ; 

bool cirrus_check_framebuffer(struct cirrus_device *cdev, int width, int height,
			      int bpp, int pitch)
{
	const int max_pitch = 0x1FF << 3; /* (4096 - 1) & ~111b bytes */
	const int max_size = cdev->mc.vram_size;

	if (bpp > cirrus_bpp)
		return false;
	if (bpp > 32)
		return false;

	if (pitch > max_pitch)
		return false;

	if (pitch * height > max_size)
		return false;

	return true;
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
          int width = 100;
          int height = 100;
          int bpp = 100;
          int pitch = 100;
          int _len_cdev0 = 1;
          struct cirrus_device * cdev = (struct cirrus_device *) malloc(_len_cdev0*sizeof(struct cirrus_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].mc.vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cirrus_check_framebuffer(cdev,width,height,bpp,pitch);
          printf("%d\n", benchRet); 
          free(cdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int bpp = 255;
          int pitch = 255;
          int _len_cdev0 = 65025;
          struct cirrus_device * cdev = (struct cirrus_device *) malloc(_len_cdev0*sizeof(struct cirrus_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].mc.vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cirrus_check_framebuffer(cdev,width,height,bpp,pitch);
          printf("%d\n", benchRet); 
          free(cdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int bpp = 10;
          int pitch = 10;
          int _len_cdev0 = 100;
          struct cirrus_device * cdev = (struct cirrus_device *) malloc(_len_cdev0*sizeof(struct cirrus_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].mc.vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cirrus_check_framebuffer(cdev,width,height,bpp,pitch);
          printf("%d\n", benchRet); 
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
