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
struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct checkout {int clone; } ;
struct TYPE_2__ {int /*<<< orphan*/  ce_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  CE_MATCHED ; 

__attribute__((used)) static void setup_collided_checkout_detection(struct checkout *state,
					      struct index_state *index)
{
	int i;

	state->clone = 1;
	for (i = 0; i < index->cache_nr; i++)
		index->cache[i]->ce_flags &= ~CE_MATCHED;
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
          int _len_state0 = 1;
          struct checkout * state = (struct checkout *) malloc(_len_state0*sizeof(struct checkout));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].clone = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index0 = 1;
          struct index_state * index = (struct index_state *) malloc(_len_index0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0].cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_index__i0__cache0 = 1;
          index[_i0].cache = (struct TYPE_2__ **) malloc(_len_index__i0__cache0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_index__i0__cache0; _j0++) {
            int _len_index__i0__cache1 = 1;
            index[_i0].cache[_j0] = (struct TYPE_2__ *) malloc(_len_index__i0__cache1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_index__i0__cache1; _j1++) {
              index[_i0].cache[_j0]->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          setup_collided_checkout_detection(state,index);
          free(state);
          for(int _aux = 0; _aux < _len_index0; _aux++) {
          free(*(index[_aux].cache));
        free(index[_aux].cache);
          }
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
