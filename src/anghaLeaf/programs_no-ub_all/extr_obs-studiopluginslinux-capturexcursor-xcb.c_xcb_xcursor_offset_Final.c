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
struct TYPE_3__ {int x_org; int y_org; } ;
typedef  TYPE_1__ xcb_xcursor_t ;

/* Variables and functions */

void xcb_xcursor_offset(xcb_xcursor_t* data, const int x_org, const int y_org)
{
	data->x_org = x_org;
	data->y_org = y_org;
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
          const int x_org = 255;
          const int y_org = 255;
          int _len_data0 = 1;
          struct TYPE_3__ * data = (struct TYPE_3__ *) malloc(_len_data0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data->x_org = ((-2 * (next_i()%2)) + 1) * next_i();
        data->y_org = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xcb_xcursor_offset(data,x_org,y_org);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}