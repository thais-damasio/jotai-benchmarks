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
       1            big-arr-10x\n\
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
struct TYPE_3__ {int nrec; scalar_t__* rchg; } ;
typedef  TYPE_1__ xdfile_t ;
struct xdlgroup {int end; int start; } ;

/* Variables and functions */

__attribute__((used)) static inline int group_next(xdfile_t *xdf, struct xdlgroup *g)
{
	if (g->end == xdf->nrec)
		return -1;

	g->start = g->end + 1;
	for (g->end = g->start; xdf->rchg[g->end]; g->end++)
		;

	return 0;
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
          int _len_xdf0 = 65025;
          struct TYPE_3__ * xdf = (struct TYPE_3__ *) malloc(_len_xdf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_xdf0; _i0++) {
            xdf[_i0].nrec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdf__i0__rchg0 = 1;
          xdf[_i0].rchg = (long *) malloc(_len_xdf__i0__rchg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_xdf__i0__rchg0; _j0++) {
            xdf[_i0].rchg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_g0 = 65025;
          struct xdlgroup * g = (struct xdlgroup *) malloc(_len_g0*sizeof(struct xdlgroup));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = group_next(xdf,g);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdf0; _aux++) {
          free(xdf[_aux].rchg);
          }
          free(xdf);
          free(g);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_xdf0 = 100;
          struct TYPE_3__ * xdf = (struct TYPE_3__ *) malloc(_len_xdf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_xdf0; _i0++) {
            xdf[_i0].nrec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdf__i0__rchg0 = 1;
          xdf[_i0].rchg = (long *) malloc(_len_xdf__i0__rchg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_xdf__i0__rchg0; _j0++) {
            xdf[_i0].rchg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_g0 = 100;
          struct xdlgroup * g = (struct xdlgroup *) malloc(_len_g0*sizeof(struct xdlgroup));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = group_next(xdf,g);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdf0; _aux++) {
          free(xdf[_aux].rchg);
          }
          free(xdf);
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
