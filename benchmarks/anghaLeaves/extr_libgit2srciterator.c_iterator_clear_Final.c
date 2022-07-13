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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int started; int ended; int /*<<< orphan*/  flags; scalar_t__ pathlist_walk_idx; scalar_t__ stat_calls; } ;
typedef  TYPE_1__ git_iterator ;

/* Variables and functions */
 int /*<<< orphan*/  GIT_ITERATOR_FIRST_ACCESS ; 

__attribute__((used)) static void iterator_clear(git_iterator *iter)
{
	iter->started = false;
	iter->ended = false;
	iter->stat_calls = 0;
	iter->pathlist_walk_idx = 0;
	iter->flags &= ~GIT_ITERATOR_FIRST_ACCESS;
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
          int _len_iter0 = 1;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iterator_clear(iter);
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iter0 = 65025;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iterator_clear(iter);
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iter0 = 100;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iterator_clear(iter);
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
