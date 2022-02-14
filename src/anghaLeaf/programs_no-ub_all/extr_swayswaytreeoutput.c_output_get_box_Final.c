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

/* Type definitions */
struct wlr_box {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  y; int /*<<< orphan*/  x; } ;
struct sway_output {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  ly; int /*<<< orphan*/  lx; } ;

/* Variables and functions */

void output_get_box(struct sway_output *output, struct wlr_box *box) {
	box->x = output->lx;
	box->y = output->ly;
	box->width = output->width;
	box->height = output->height;
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
          int _len_output0 = 1;
          struct sway_output * output = (struct sway_output *) malloc(_len_output0*sizeof(struct sway_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output->height = ((-2 * (next_i()%2)) + 1) * next_i();
        output->width = ((-2 * (next_i()%2)) + 1) * next_i();
        output->ly = ((-2 * (next_i()%2)) + 1) * next_i();
        output->lx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_box0 = 1;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
            box->height = ((-2 * (next_i()%2)) + 1) * next_i();
        box->width = ((-2 * (next_i()%2)) + 1) * next_i();
        box->y = ((-2 * (next_i()%2)) + 1) * next_i();
        box->x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          output_get_box(output,box);
          free(output);
          free(box);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}