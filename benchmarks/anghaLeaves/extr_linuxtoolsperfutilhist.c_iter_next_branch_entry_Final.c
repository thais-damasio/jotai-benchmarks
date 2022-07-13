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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hist_entry_iter {int curr; int total; struct branch_info* priv; } ;
struct TYPE_2__ {int /*<<< orphan*/  addr; int /*<<< orphan*/  sym; int /*<<< orphan*/  map; } ;
struct branch_info {TYPE_1__ to; } ;
struct addr_location {int /*<<< orphan*/  addr; int /*<<< orphan*/  sym; int /*<<< orphan*/  map; } ;

/* Variables and functions */

__attribute__((used)) static int
iter_next_branch_entry(struct hist_entry_iter *iter, struct addr_location *al)
{
	struct branch_info *bi = iter->priv;
	int i = iter->curr;

	if (bi == NULL)
		return 0;

	if (iter->curr >= iter->total)
		return 0;

	al->map = bi[i].to.map;
	al->sym = bi[i].to.sym;
	al->addr = bi[i].to.addr;
	return 1;
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
          struct hist_entry_iter * iter = (struct hist_entry_iter *) malloc(_len_iter0*sizeof(struct hist_entry_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].curr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__priv0 = 1;
          iter[_i0].priv = (struct branch_info *) malloc(_len_iter__i0__priv0*sizeof(struct branch_info));
          for(int _j0 = 0; _j0 < _len_iter__i0__priv0; _j0++) {
            iter[_i0].priv->to.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.sym = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_al0 = 1;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].sym = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iter_next_branch_entry(iter,al);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].priv);
          }
          free(iter);
          free(al);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iter0 = 65025;
          struct hist_entry_iter * iter = (struct hist_entry_iter *) malloc(_len_iter0*sizeof(struct hist_entry_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].curr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__priv0 = 1;
          iter[_i0].priv = (struct branch_info *) malloc(_len_iter__i0__priv0*sizeof(struct branch_info));
          for(int _j0 = 0; _j0 < _len_iter__i0__priv0; _j0++) {
            iter[_i0].priv->to.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.sym = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_al0 = 65025;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].sym = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iter_next_branch_entry(iter,al);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].priv);
          }
          free(iter);
          free(al);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iter0 = 100;
          struct hist_entry_iter * iter = (struct hist_entry_iter *) malloc(_len_iter0*sizeof(struct hist_entry_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].curr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__priv0 = 1;
          iter[_i0].priv = (struct branch_info *) malloc(_len_iter__i0__priv0*sizeof(struct branch_info));
          for(int _j0 = 0; _j0 < _len_iter__i0__priv0; _j0++) {
            iter[_i0].priv->to.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.sym = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].priv->to.map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_al0 = 100;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].sym = ((-2 * (next_i()%2)) + 1) * next_i();
        al[_i0].map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iter_next_branch_entry(iter,al);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].priv);
          }
          free(iter);
          free(al);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
