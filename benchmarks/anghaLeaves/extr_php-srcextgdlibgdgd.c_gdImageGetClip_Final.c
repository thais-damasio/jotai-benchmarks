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
typedef  TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int cx1; int cy1; int cx2; int cy2; } ;

/* Variables and functions */

void gdImageGetClip (gdImagePtr im, int *x1P, int *y1P, int *x2P, int *y2P)
{
	*x1P = im->cx1;
	*y1P = im->cy1;
	*x2P = im->cx2;
	*y2P = im->cy2;
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
          int _len_im0 = 1;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x1P0 = 1;
          int * x1P = (int *) malloc(_len_x1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x1P0; _i0++) {
            x1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y1P0 = 1;
          int * y1P = (int *) malloc(_len_y1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y1P0; _i0++) {
            y1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x2P0 = 1;
          int * x2P = (int *) malloc(_len_x2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x2P0; _i0++) {
            x2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y2P0 = 1;
          int * y2P = (int *) malloc(_len_y2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y2P0; _i0++) {
            y2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdImageGetClip(im,x1P,y1P,x2P,y2P);
          free(im);
          free(x1P);
          free(y1P);
          free(x2P);
          free(y2P);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_im0 = 65025;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x1P0 = 65025;
          int * x1P = (int *) malloc(_len_x1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x1P0; _i0++) {
            x1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y1P0 = 65025;
          int * y1P = (int *) malloc(_len_y1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y1P0; _i0++) {
            y1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x2P0 = 65025;
          int * x2P = (int *) malloc(_len_x2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x2P0; _i0++) {
            x2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y2P0 = 65025;
          int * y2P = (int *) malloc(_len_y2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y2P0; _i0++) {
            y2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdImageGetClip(im,x1P,y1P,x2P,y2P);
          free(im);
          free(x1P);
          free(y1P);
          free(x2P);
          free(y2P);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_im0 = 100;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x1P0 = 100;
          int * x1P = (int *) malloc(_len_x1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x1P0; _i0++) {
            x1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y1P0 = 100;
          int * y1P = (int *) malloc(_len_y1P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y1P0; _i0++) {
            y1P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x2P0 = 100;
          int * x2P = (int *) malloc(_len_x2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x2P0; _i0++) {
            x2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y2P0 = 100;
          int * y2P = (int *) malloc(_len_y2P0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y2P0; _i0++) {
            y2P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdImageGetClip(im,x1P,y1P,x2P,y2P);
          free(im);
          free(x1P);
          free(y1P);
          free(x2P);
          free(y2P);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
