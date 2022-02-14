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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  dr7; int /*<<< orphan*/  dr6; int /*<<< orphan*/  dr3; int /*<<< orphan*/  dr2; int /*<<< orphan*/  dr1; int /*<<< orphan*/  dr0; int /*<<< orphan*/  dr5; int /*<<< orphan*/  dr4; } ;
typedef  TYPE_1__ x86_debug_state64_t ;
typedef  scalar_t__ boolean_t ;

/* Variables and functions */

void
copy_debug_state64(
		x86_debug_state64_t *src,
		x86_debug_state64_t *target,
		boolean_t all)
{
	if (all) {
		target->dr4 = src->dr4;
		target->dr5 = src->dr5;
	}

	target->dr0 = src->dr0;
	target->dr1 = src->dr1;
	target->dr2 = src->dr2;
	target->dr3 = src->dr3;
	target->dr6 = src->dr6;
	target->dr7 = src->dr7;
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
          long all = 255;
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src->dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
        src->dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 1;
          struct TYPE_4__ * target = (struct TYPE_4__ *) malloc(_len_target0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target->dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
        target->dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_debug_state64(src,target,all);
          free(src);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}