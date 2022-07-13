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

/* Type definitions */
struct wlr_layer_surface_v1 {struct sway_layer_surface* data; } ;
struct sway_layer_surface {int dummy; } ;

/* Variables and functions */

struct sway_layer_surface *layer_from_wlr_layer_surface_v1(
		struct wlr_layer_surface_v1 *layer_surface) {
	return layer_surface->data;
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
          int _len_layer_surface0 = 1;
          struct wlr_layer_surface_v1 * layer_surface = (struct wlr_layer_surface_v1 *) malloc(_len_layer_surface0*sizeof(struct wlr_layer_surface_v1));
          for(int _i0 = 0; _i0 < _len_layer_surface0; _i0++) {
              int _len_layer_surface__i0__data0 = 1;
          layer_surface[_i0].data = (struct sway_layer_surface *) malloc(_len_layer_surface__i0__data0*sizeof(struct sway_layer_surface));
          for(int _j0 = 0; _j0 < _len_layer_surface__i0__data0; _j0++) {
            layer_surface[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sway_layer_surface * benchRet = layer_from_wlr_layer_surface_v1(layer_surface);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_layer_surface0; _aux++) {
          free(layer_surface[_aux].data);
          }
          free(layer_surface);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_layer_surface0 = 65025;
          struct wlr_layer_surface_v1 * layer_surface = (struct wlr_layer_surface_v1 *) malloc(_len_layer_surface0*sizeof(struct wlr_layer_surface_v1));
          for(int _i0 = 0; _i0 < _len_layer_surface0; _i0++) {
              int _len_layer_surface__i0__data0 = 1;
          layer_surface[_i0].data = (struct sway_layer_surface *) malloc(_len_layer_surface__i0__data0*sizeof(struct sway_layer_surface));
          for(int _j0 = 0; _j0 < _len_layer_surface__i0__data0; _j0++) {
            layer_surface[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sway_layer_surface * benchRet = layer_from_wlr_layer_surface_v1(layer_surface);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_layer_surface0; _aux++) {
          free(layer_surface[_aux].data);
          }
          free(layer_surface);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_layer_surface0 = 100;
          struct wlr_layer_surface_v1 * layer_surface = (struct wlr_layer_surface_v1 *) malloc(_len_layer_surface0*sizeof(struct wlr_layer_surface_v1));
          for(int _i0 = 0; _i0 < _len_layer_surface0; _i0++) {
              int _len_layer_surface__i0__data0 = 1;
          layer_surface[_i0].data = (struct sway_layer_surface *) malloc(_len_layer_surface__i0__data0*sizeof(struct sway_layer_surface));
          for(int _j0 = 0; _j0 < _len_layer_surface__i0__data0; _j0++) {
            layer_surface[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sway_layer_surface * benchRet = layer_from_wlr_layer_surface_v1(layer_surface);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_layer_surface0; _aux++) {
          free(layer_surface[_aux].data);
          }
          free(layer_surface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
