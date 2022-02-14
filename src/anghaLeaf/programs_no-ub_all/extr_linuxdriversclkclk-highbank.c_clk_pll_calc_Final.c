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
typedef  int u32 ;

/* Variables and functions */
 unsigned long HB_PLL_MAX_FREQ ; 
 unsigned long HB_PLL_MIN_FREQ ; 
 unsigned long HB_PLL_VCO_MIN_FREQ ; 

__attribute__((used)) static void clk_pll_calc(unsigned long rate, unsigned long ref_freq,
			u32 *pdivq, u32 *pdivf)
{
	u32 divq, divf;
	unsigned long vco_freq;

	if (rate < HB_PLL_MIN_FREQ)
		rate = HB_PLL_MIN_FREQ;
	if (rate > HB_PLL_MAX_FREQ)
		rate = HB_PLL_MAX_FREQ;

	for (divq = 1; divq <= 6; divq++) {
		if ((rate * (1 << divq)) >= HB_PLL_VCO_MIN_FREQ)
			break;
	}

	vco_freq = rate * (1 << divq);
	divf = (vco_freq + (ref_freq / 2)) / ref_freq;
	divf--;

	*pdivq = divq;
	*pdivf = divf;
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
          unsigned long rate = 255;
          unsigned long ref_freq = 255;
          int _len_pdivq0 = 65025;
          int * pdivq = (int *) malloc(_len_pdivq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdivq0; _i0++) {
            pdivq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdivf0 = 65025;
          int * pdivf = (int *) malloc(_len_pdivf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdivf0; _i0++) {
            pdivf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clk_pll_calc(rate,ref_freq,pdivq,pdivf);
          free(pdivq);
          free(pdivf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
