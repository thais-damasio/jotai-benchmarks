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
struct clk_hw {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long mmc_clk_recalc_rate(struct clk_hw *hw,
		       unsigned long parent_rate)
{
	switch (parent_rate) {
	case 26000000:
		return 13000000;
	case 180000000:
		return 25000000;
	case 360000000:
		return 50000000;
	case 720000000:
		return 100000000;
	case 1440000000:
		return 180000000;
	default:
		return parent_rate;
	}
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
          unsigned long parent_rate = 255;
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = mmc_clk_recalc_rate(hw,parent_rate);
          printf("%lu\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}