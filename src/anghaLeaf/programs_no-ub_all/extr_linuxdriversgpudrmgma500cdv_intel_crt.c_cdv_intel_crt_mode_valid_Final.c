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
struct drm_display_mode {int flags; int clock; } ;
struct drm_connector {int dummy; } ;
typedef  enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;

/* Variables and functions */
 int DRM_MODE_FLAG_DBLSCAN ; 
 int MODE_CLOCK_HIGH ; 
 int MODE_CLOCK_LOW ; 
 int MODE_NO_DBLESCAN ; 
 int MODE_OK ; 

__attribute__((used)) static enum drm_mode_status cdv_intel_crt_mode_valid(struct drm_connector *connector,
				struct drm_display_mode *mode)
{
	if (mode->flags & DRM_MODE_FLAG_DBLSCAN)
		return MODE_NO_DBLESCAN;

	/* The lowest clock for CDV is 20000KHz */
	if (mode->clock < 20000)
		return MODE_CLOCK_LOW;

	/* The max clock for CDV is 355 instead of 400 */
	if (mode->clock > 355000)
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

    // big-arr
    case 0:
    {
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        mode->clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = cdv_intel_crt_mode_valid(connector,mode);
          printf("{{other_type}} %p\n", &benchRet); 
          free(connector);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}