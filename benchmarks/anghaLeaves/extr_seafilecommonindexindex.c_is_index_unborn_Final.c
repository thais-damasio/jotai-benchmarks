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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  sec; } ;
struct index_state {TYPE_1__ timestamp; int /*<<< orphan*/  alloc; int /*<<< orphan*/  cache_nr; } ;

/* Variables and functions */

int is_index_unborn(struct index_state *istate)
{
    return (!istate->cache_nr && !istate->alloc && !istate->timestamp.sec);
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
          int _len_istate0 = 1;
          struct index_state * istate = (struct index_state *) malloc(_len_istate0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_istate0; _i0++) {
            istate[_i0].timestamp.sec = ((-2 * (next_i()%2)) + 1) * next_i();
        istate[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        istate[_i0].cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_index_unborn(istate);
          printf("%d\n", benchRet); 
          free(istate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
