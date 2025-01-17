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
struct clk_hw {int dummy; } ;

/* Variables and functions */
 unsigned long HDMI_PCLK_MAX_FREQ ; 
 unsigned long HDMI_PCLK_MIN_FREQ ; 

__attribute__((used)) static long hdmi_8996_pll_round_rate(struct clk_hw *hw,
				     unsigned long rate,
				     unsigned long *parent_rate)
{
	if (rate < HDMI_PCLK_MIN_FREQ)
		return HDMI_PCLK_MIN_FREQ;
	else if (rate > HDMI_PCLK_MAX_FREQ)
		return HDMI_PCLK_MAX_FREQ;
	else
		return rate;
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
          unsigned long rate = 100;
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent_rate0 = 1;
          unsigned long * parent_rate = (unsigned long *) malloc(_len_parent_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_parent_rate0; _i0++) {
            parent_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = hdmi_8996_pll_round_rate(hw,rate,parent_rate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(parent_rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
