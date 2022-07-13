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
struct iwl_rate_scale_data {scalar_t__ stamp; void* average_tpt; scalar_t__ counter; void* success_ratio; scalar_t__ success_counter; scalar_t__ data; } ;

/* Variables and functions */
 void* IWL_INVALID_VALUE ; 

__attribute__((used)) static void rs_rate_scale_clear_window(struct iwl_rate_scale_data *window)
{
	window->data = 0;
	window->success_counter = 0;
	window->success_ratio = IWL_INVALID_VALUE;
	window->counter = 0;
	window->average_tpt = IWL_INVALID_VALUE;
	window->stamp = 0;
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
          int _len_window0 = 1;
          struct iwl_rate_scale_data * window = (struct iwl_rate_scale_data *) malloc(_len_window0*sizeof(struct iwl_rate_scale_data));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].success_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_rate_scale_clear_window(window);
          free(window);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_window0 = 65025;
          struct iwl_rate_scale_data * window = (struct iwl_rate_scale_data *) malloc(_len_window0*sizeof(struct iwl_rate_scale_data));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].success_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_rate_scale_clear_window(window);
          free(window);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_window0 = 100;
          struct iwl_rate_scale_data * window = (struct iwl_rate_scale_data *) malloc(_len_window0*sizeof(struct iwl_rate_scale_data));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].success_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        window[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_rate_scale_clear_window(window);
          free(window);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
