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
typedef  int u32 ;
struct drm_plane_state {scalar_t__ color_encoding; } ;

/* Variables and functions */
 int CFG_CSC_RGB_COMPUTER ; 
 int CFG_CSC_YUV_CCIR601 ; 
 int CFG_CSC_YUV_CCIR709 ; 
 scalar_t__ DRM_COLOR_YCBCR_BT709 ; 

__attribute__((used)) static inline u32 armada_csc(struct drm_plane_state *state)
{
	/*
	 * The CFG_CSC_RGB_* settings control the output of the colour space
	 * converter, setting the range of output values it produces.  Since
	 * we will be blending with the full-range graphics, we need to
	 * produce full-range RGB output from the conversion.
	 */
	return CFG_CSC_RGB_COMPUTER |
	       (state->color_encoding == DRM_COLOR_YCBCR_BT709 ?
			CFG_CSC_YUV_CCIR709 : CFG_CSC_YUV_CCIR601);
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
          int _len_state0 = 1;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].color_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = armada_csc(state);
          printf("%d\n", benchRet); 
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].color_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = armada_csc(state);
          printf("%d\n", benchRet); 
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].color_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = armada_csc(state);
          printf("%d\n", benchRet); 
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
