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
struct mthca_wq {scalar_t__ tail; scalar_t__ head; scalar_t__ max; scalar_t__ last_comp; scalar_t__ next_ind; } ;

/* Variables and functions */

__attribute__((used)) static void mthca_wq_reset(struct mthca_wq *wq)
{
	wq->next_ind  = 0;
	wq->last_comp = wq->max - 1;
	wq->head      = 0;
	wq->tail      = 0;
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
          int _len_wq0 = 1;
          struct mthca_wq * wq = (struct mthca_wq *) malloc(_len_wq0*sizeof(struct mthca_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].last_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].next_ind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mthca_wq_reset(wq);
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
