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
typedef  int /*<<< orphan*/  mrb_state ;
struct TYPE_3__ {int /*<<< orphan*/  live; int /*<<< orphan*/  live_after_mark; int /*<<< orphan*/  heaps; int /*<<< orphan*/  sweeps; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ mrb_gc ;

/* Variables and functions */
 int /*<<< orphan*/  MRB_GC_STATE_SWEEP ; 

__attribute__((used)) static void
prepare_incremental_sweep(mrb_state *mrb, mrb_gc *gc)
{
  gc->state = MRB_GC_STATE_SWEEP;
  gc->sweeps = gc->heaps;
  gc->live_after_mark = gc->live;
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
          int _len_mrb0 = 65025;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gc0 = 1;
          struct TYPE_3__ * gc = (struct TYPE_3__ *) malloc(_len_gc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gc0; _i0++) {
            gc->live = ((-2 * (next_i()%2)) + 1) * next_i();
        gc->live_after_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        gc->heaps = ((-2 * (next_i()%2)) + 1) * next_i();
        gc->sweeps = ((-2 * (next_i()%2)) + 1) * next_i();
        gc->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepare_incremental_sweep(mrb,gc);
          free(mrb);
          free(gc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
