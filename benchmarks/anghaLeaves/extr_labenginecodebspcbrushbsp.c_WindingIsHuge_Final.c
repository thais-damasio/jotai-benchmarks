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
struct TYPE_3__ {int numpoints; int** p; } ;
typedef  TYPE_1__ winding_t ;
typedef  int qboolean ;

/* Variables and functions */
 int BOGUS_RANGE ; 

qboolean WindingIsHuge (winding_t *w)
{
	int		i, j;

	for (i=0 ; i<w->numpoints ; i++)
	{
		for (j=0 ; j<3 ; j++)
			if (w->p[i][j] < -BOGUS_RANGE+1 || w->p[i][j] > BOGUS_RANGE-1)
				return true;
	}
	return false;
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
          int _len_w0 = 1;
          struct TYPE_3__ * w = (struct TYPE_3__ *) malloc(_len_w0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__p0 = 1;
          w[_i0].p = (int **) malloc(_len_w__i0__p0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_w__i0__p0; _j0++) {
            int _len_w__i0__p1 = 1;
            w[_i0].p[_j0] = (int *) malloc(_len_w__i0__p1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_w__i0__p1; _j1++) {
              w[_i0].p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = WindingIsHuge(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(*(w[_aux].p));
        free(w[_aux].p);
          }
          free(w);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_w0 = 65025;
          struct TYPE_3__ * w = (struct TYPE_3__ *) malloc(_len_w0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__p0 = 1;
          w[_i0].p = (int **) malloc(_len_w__i0__p0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_w__i0__p0; _j0++) {
            int _len_w__i0__p1 = 1;
            w[_i0].p[_j0] = (int *) malloc(_len_w__i0__p1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_w__i0__p1; _j1++) {
              w[_i0].p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = WindingIsHuge(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(*(w[_aux].p));
        free(w[_aux].p);
          }
          free(w);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_w0 = 100;
          struct TYPE_3__ * w = (struct TYPE_3__ *) malloc(_len_w0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__p0 = 1;
          w[_i0].p = (int **) malloc(_len_w__i0__p0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_w__i0__p0; _j0++) {
            int _len_w__i0__p1 = 1;
            w[_i0].p[_j0] = (int *) malloc(_len_w__i0__p1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_w__i0__p1; _j1++) {
              w[_i0].p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = WindingIsHuge(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(*(w[_aux].p));
        free(w[_aux].p);
          }
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
