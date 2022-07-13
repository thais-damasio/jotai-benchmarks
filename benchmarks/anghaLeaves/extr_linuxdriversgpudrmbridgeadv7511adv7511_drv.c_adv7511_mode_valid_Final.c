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
struct drm_display_mode {int clock; } ;
struct adv7511 {int dummy; } ;
typedef  enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;

/* Variables and functions */
 int MODE_CLOCK_HIGH ; 
 int MODE_OK ; 

__attribute__((used)) static enum drm_mode_status adv7511_mode_valid(struct adv7511 *adv7511,
			      struct drm_display_mode *mode)
{
	if (mode->clock > 165000)
		return MODE_CLOCK_HIGH;

	return MODE_OK;
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
          int _len_adv75110 = 1;
          struct adv7511 * adv7511 = (struct adv7511 *) malloc(_len_adv75110*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv75110; _i0++) {
            adv7511[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = adv7511_mode_valid(adv7511,mode);
          printf("{{other_type}} %p\n", &benchRet); 
          free(adv7511);
          free(mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adv75110 = 65025;
          struct adv7511 * adv7511 = (struct adv7511 *) malloc(_len_adv75110*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv75110; _i0++) {
            adv7511[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 65025;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = adv7511_mode_valid(adv7511,mode);
          printf("{{other_type}} %p\n", &benchRet); 
          free(adv7511);
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adv75110 = 100;
          struct adv7511 * adv7511 = (struct adv7511 *) malloc(_len_adv75110*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv75110; _i0++) {
            adv7511[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 100;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = adv7511_mode_valid(adv7511,mode);
          printf("{{other_type}} %p\n", &benchRet); 
          free(adv7511);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
