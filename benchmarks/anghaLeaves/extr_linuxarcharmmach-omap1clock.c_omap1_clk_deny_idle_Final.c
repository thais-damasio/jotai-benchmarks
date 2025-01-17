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
       1            big-arr-10x\n\
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
struct clk {int flags; } ;
struct arm_idlect1_clk {int idlect_shift; int /*<<< orphan*/  no_idle_count; } ;

/* Variables and functions */
 int CLOCK_IDLE_CONTROL ; 
 int arm_idlect1_mask ; 

__attribute__((used)) static void omap1_clk_deny_idle(struct clk *clk)
{
	struct arm_idlect1_clk * iclk = (struct arm_idlect1_clk *)clk;

	if (!(clk->flags & CLOCK_IDLE_CONTROL))
		return;

	if (iclk->no_idle_count++ == 0)
		arm_idlect1_mask &= ~(1 << iclk->idlect_shift);
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
          int _len_clk0 = 1;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
            clk[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap1_clk_deny_idle(clk);
          free(clk);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_clk0 = 100;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
            clk[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap1_clk_deny_idle(clk);
          free(clk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
