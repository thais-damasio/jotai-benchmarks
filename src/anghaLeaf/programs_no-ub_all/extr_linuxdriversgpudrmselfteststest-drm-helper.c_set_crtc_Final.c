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
struct drm_plane_state {int crtc_x; int crtc_y; unsigned int crtc_w; unsigned int crtc_h; } ;

/* Variables and functions */

__attribute__((used)) static void set_crtc(struct drm_plane_state *plane_state,
		     int crtc_x, int crtc_y,
		     unsigned crtc_w, unsigned crtc_h)
{
	plane_state->crtc_x = crtc_x;
	plane_state->crtc_y = crtc_y;
	plane_state->crtc_w = crtc_w;
	plane_state->crtc_h = crtc_h;
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
          int crtc_x = 255;
          int crtc_y = 255;
          unsigned int crtc_w = 255;
          unsigned int crtc_h = 255;
          int _len_plane_state0 = 1;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
            plane_state->crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state->crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state->crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state->crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_crtc(plane_state,crtc_x,crtc_y,crtc_w,crtc_h);
          free(plane_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
