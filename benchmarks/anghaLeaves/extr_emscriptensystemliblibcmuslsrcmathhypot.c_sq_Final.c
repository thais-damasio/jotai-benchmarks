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
typedef  double double_t ;

/* Variables and functions */
 double SPLIT ; 

__attribute__((used)) static void sq(double_t *hi, double_t *lo, double x)
{
	double_t xh, xl, xc;

	xc = (double_t)x*SPLIT;
	xh = x - xc + xc;
	xl = x - xh;
	*hi = (double_t)x*x;
	*lo = xh*xh - *hi + 2*xh*xl + xl*xl;
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
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_hi0 = 1;
          double * hi = (double *) malloc(_len_hi0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_hi0; _i0++) {
            hi[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lo0 = 1;
          double * lo = (double *) malloc(_len_lo0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lo0; _i0++) {
            lo[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sq(hi,lo,x);
          free(hi);
          free(lo);
        
        break;
    }
    // big-arr
    case 1:
    {
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_hi0 = 65025;
          double * hi = (double *) malloc(_len_hi0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_hi0; _i0++) {
            hi[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lo0 = 65025;
          double * lo = (double *) malloc(_len_lo0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lo0; _i0++) {
            lo[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sq(hi,lo,x);
          free(hi);
          free(lo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_hi0 = 100;
          double * hi = (double *) malloc(_len_hi0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_hi0; _i0++) {
            hi[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lo0 = 100;
          double * lo = (double *) malloc(_len_lo0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lo0; _i0++) {
            lo[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sq(hi,lo,x);
          free(hi);
          free(lo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
