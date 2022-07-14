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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct clk_hw {TYPE_1__* core; } ;
struct TYPE_2__ {unsigned long min_rate; unsigned long max_rate; } ;

/* Variables and functions */

void clk_hw_set_rate_range(struct clk_hw *hw, unsigned long min_rate,
			   unsigned long max_rate)
{
	hw->core->min_rate = min_rate;
	hw->core->max_rate = max_rate;
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
          unsigned long min_rate = 100;
          unsigned long max_rate = 100;
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__core0 = 1;
          hw[_i0].core = (struct TYPE_2__ *) malloc(_len_hw__i0__core0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw__i0__core0; _j0++) {
            hw[_i0].core->min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].core->max_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clk_hw_set_rate_range(hw,min_rate,max_rate);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].core);
          }
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long min_rate = 255;
          unsigned long max_rate = 255;
          int _len_hw0 = 65025;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__core0 = 1;
          hw[_i0].core = (struct TYPE_2__ *) malloc(_len_hw__i0__core0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw__i0__core0; _j0++) {
            hw[_i0].core->min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].core->max_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clk_hw_set_rate_range(hw,min_rate,max_rate);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].core);
          }
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long min_rate = 10;
          unsigned long max_rate = 10;
          int _len_hw0 = 100;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__core0 = 1;
          hw[_i0].core = (struct TYPE_2__ *) malloc(_len_hw__i0__core0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw__i0__core0; _j0++) {
            hw[_i0].core->min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].core->max_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clk_hw_set_rate_range(hw,min_rate,max_rate);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].core);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}