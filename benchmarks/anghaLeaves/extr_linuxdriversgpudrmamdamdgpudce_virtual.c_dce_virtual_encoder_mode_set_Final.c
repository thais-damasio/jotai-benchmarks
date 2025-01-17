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
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
dce_virtual_encoder_mode_set(struct drm_encoder *encoder,
			     struct drm_display_mode *mode,
			     struct drm_display_mode *adjusted_mode)
{
	return;
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
          int _len_encoder0 = 1;
          struct drm_encoder * encoder = (struct drm_encoder *) malloc(_len_encoder0*sizeof(struct drm_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
            encoder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adjusted_mode0 = 1;
          struct drm_display_mode * adjusted_mode = (struct drm_display_mode *) malloc(_len_adjusted_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_adjusted_mode0; _i0++) {
            adjusted_mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce_virtual_encoder_mode_set(encoder,mode,adjusted_mode);
          free(encoder);
          free(mode);
          free(adjusted_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
