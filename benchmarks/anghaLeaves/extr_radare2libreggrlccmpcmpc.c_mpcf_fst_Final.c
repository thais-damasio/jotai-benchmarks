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

/* Type definitions */
typedef  int /*<<< orphan*/  mpc_val_t ;

/* Variables and functions */

mpc_val_t *mpcf_fst(int n, mpc_val_t **xs) { (void) n; return xs[0]; }


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
          int n = 100;
          int _len_xs0 = 1;
          int ** xs = (int **) malloc(_len_xs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_xs0; _i0++) {
            int _len_xs1 = 1;
            xs[_i0] = (int *) malloc(_len_xs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_xs1; _i1++) {
              xs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = mpcf_fst(n,xs);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_xs0; i1++) {
            int _len_xs1 = 1;
              free(xs[i1]);
          }
          free(xs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_xs0 = 65025;
          int ** xs = (int **) malloc(_len_xs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_xs0; _i0++) {
            int _len_xs1 = 1;
            xs[_i0] = (int *) malloc(_len_xs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_xs1; _i1++) {
              xs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = mpcf_fst(n,xs);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_xs0; i1++) {
            int _len_xs1 = 1;
              free(xs[i1]);
          }
          free(xs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_xs0 = 100;
          int ** xs = (int **) malloc(_len_xs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_xs0; _i0++) {
            int _len_xs1 = 1;
            xs[_i0] = (int *) malloc(_len_xs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_xs1; _i1++) {
              xs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = mpcf_fst(n,xs);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_xs0; i1++) {
            int _len_xs1 = 1;
              free(xs[i1]);
          }
          free(xs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
