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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct drm_fb_helper_connector {TYPE_2__* connector; } ;
struct TYPE_3__ {int specified; } ;
struct TYPE_4__ {TYPE_1__ cmdline_mode; } ;

/* Variables and functions */

__attribute__((used)) static bool drm_has_cmdline_mode(struct drm_fb_helper_connector *fb_connector)
{
	return fb_connector->connector->cmdline_mode.specified;
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
          int _len_fb_connector0 = 1;
          struct drm_fb_helper_connector * fb_connector = (struct drm_fb_helper_connector *) malloc(_len_fb_connector0*sizeof(struct drm_fb_helper_connector));
          for(int _i0 = 0; _i0 < _len_fb_connector0; _i0++) {
              int _len_fb_connector__i0__connector0 = 1;
          fb_connector[_i0].connector = (struct TYPE_4__ *) malloc(_len_fb_connector__i0__connector0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fb_connector__i0__connector0; _j0++) {
            fb_connector[_i0].connector->cmdline_mode.specified = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = drm_has_cmdline_mode(fb_connector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fb_connector0; _aux++) {
          free(fb_connector[_aux].connector);
          }
          free(fb_connector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
