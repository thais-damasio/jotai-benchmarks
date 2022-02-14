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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int curButton; int count; int rectX0; int rectY0; int rectX1; int rectY1; uintptr_t prevTime; } ;
typedef  TYPE_1__ uiprivClickCounter ;
typedef  int int32_t ;

/* Variables and functions */

int uiprivClickCounterClick(uiprivClickCounter *c, int button, int x, int y, uintptr_t time, uintptr_t maxTime, int32_t xdist, int32_t ydist)
{
	// different button than before? if so, don't count
	if (button != c->curButton)
		c->count = 0;

	// (x, y) in the allowed region for a double-click? if not, don't count
	if (x < c->rectX0)
		c->count = 0;
	if (y < c->rectY0)
		c->count = 0;
	if (x >= c->rectX1)
		c->count = 0;
	if (y >= c->rectY1)
		c->count = 0;

	// too slow? if so, don't count
	// note the below expression; time > (c.prevTime + maxTime) can overflow!
	if ((time - c->prevTime) > maxTime)	// too slow; don't count
		c->count = 0;

	c->count++;		// if either of the above ifs happened, this will make the click count 1; otherwise it will make the click count 2, 3, 4, 5, ...

	// now we need to update the internal structures for the next test
	c->curButton = button;
	c->prevTime = time;
	c->rectX0 = x - xdist;
	c->rectY0 = y - ydist;
	c->rectX1 = x + xdist;
	c->rectY1 = y + ydist;

	return c->count;
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
          int button = 255;
          int x = 255;
          int y = 255;
          unsigned long time = 255;
          unsigned long maxTime = 255;
          int xdist = 255;
          int ydist = 255;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c->curButton = ((-2 * (next_i()%2)) + 1) * next_i();
        c->count = ((-2 * (next_i()%2)) + 1) * next_i();
        c->rectX0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c->rectY0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c->rectX1 = ((-2 * (next_i()%2)) + 1) * next_i();
        c->rectY1 = ((-2 * (next_i()%2)) + 1) * next_i();
        c->prevTime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uiprivClickCounterClick(c,button,x,y,time,maxTime,xdist,ydist);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
