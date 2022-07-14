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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int width; unsigned int crop_w; unsigned int height; unsigned int crop_h; scalar_t__ crop_y; scalar_t__ crop_x; } ;
typedef  TYPE_1__ zbar_image_t ;

/* Variables and functions */

void zbar_image_set_size (zbar_image_t *img,
                          unsigned w,
                          unsigned h)
{
    img->crop_x = img->crop_y = 0;
    img->width = img->crop_w = w;
    img->height = img->crop_h = h;
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
          unsigned int w = 100;
          unsigned int h = 100;
          int _len_img0 = 1;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_w = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_h = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_y = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zbar_image_set_size(img,w,h);
          free(img);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int w = 255;
          unsigned int h = 255;
          int _len_img0 = 65025;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_w = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_h = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_y = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zbar_image_set_size(img,w,h);
          free(img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int w = 10;
          unsigned int h = 10;
          int _len_img0 = 100;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_w = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_h = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_y = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zbar_image_set_size(img,w,h);
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}