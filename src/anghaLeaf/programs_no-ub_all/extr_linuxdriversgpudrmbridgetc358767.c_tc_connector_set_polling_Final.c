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
struct tc_data {int dummy; } ;
struct drm_connector {int polled; } ;

/* Variables and functions */
 int DRM_CONNECTOR_POLL_CONNECT ; 
 int DRM_CONNECTOR_POLL_DISCONNECT ; 

__attribute__((used)) static void tc_connector_set_polling(struct tc_data *tc,
				     struct drm_connector *connector)
{
	/* TODO: add support for HPD */
	connector->polled = DRM_CONNECTOR_POLL_CONNECT |
			    DRM_CONNECTOR_POLL_DISCONNECT;
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
          int _len_tc0 = 1;
          struct tc_data * tc = (struct tc_data *) malloc(_len_tc0*sizeof(struct tc_data));
          for(int _i0 = 0; _i0 < _len_tc0; _i0++) {
            tc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector->polled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tc_connector_set_polling(tc,connector);
          free(tc);
          free(connector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
