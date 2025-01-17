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
struct w8001 {unsigned int max_pen_x; unsigned int max_touch_x; unsigned int max_pen_y; unsigned int max_touch_y; } ;

/* Variables and functions */

__attribute__((used)) static void scale_touch_coordinates(struct w8001 *w8001,
				    unsigned int *x, unsigned int *y)
{
	if (w8001->max_pen_x && w8001->max_touch_x)
		*x = *x * w8001->max_pen_x / w8001->max_touch_x;

	if (w8001->max_pen_y && w8001->max_touch_y)
		*y = *y * w8001->max_pen_y / w8001->max_touch_y;
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
          int _len_w80010 = 1;
          struct w8001 * w8001 = (struct w8001 *) malloc(_len_w80010*sizeof(struct w8001));
          for(int _i0 = 0; _i0 < _len_w80010; _i0++) {
            w8001[_i0].max_pen_x = ((-2 * (next_i()%2)) + 1) * next_i();
        w8001[_i0].max_touch_x = ((-2 * (next_i()%2)) + 1) * next_i();
        w8001[_i0].max_pen_y = ((-2 * (next_i()%2)) + 1) * next_i();
        w8001[_i0].max_touch_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x0 = 1;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scale_touch_coordinates(w8001,x,y);
          free(w8001);
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
