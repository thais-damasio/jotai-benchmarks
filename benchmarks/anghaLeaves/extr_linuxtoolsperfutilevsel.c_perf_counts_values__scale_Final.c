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
typedef  scalar_t__ u64 ;
struct perf_counts_values {double run; double ena; scalar_t__ val; } ;
typedef  int s8 ;

/* Variables and functions */

void perf_counts_values__scale(struct perf_counts_values *count,
			       bool scale, s8 *pscaled)
{
	s8 scaled = 0;

	if (scale) {
		if (count->run == 0) {
			scaled = -1;
			count->val = 0;
		} else if (count->run < count->ena) {
			scaled = 1;
			count->val = (u64)((double) count->val * count->ena / count->run + 0.5);
		}
	} else
		count->ena = count->run = 0;

	if (pscaled)
		*pscaled = scaled;
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
          int scale = 100;
          int _len_count0 = 1;
          struct perf_counts_values * count = (struct perf_counts_values *) malloc(_len_count0*sizeof(struct perf_counts_values));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0].run = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].ena = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pscaled0 = 1;
          int * pscaled = (int *) malloc(_len_pscaled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pscaled0; _i0++) {
            pscaled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          perf_counts_values__scale(count,scale,pscaled);
          free(count);
          free(pscaled);
        
        break;
    }
    // big-arr
    case 1:
    {
          int scale = 255;
          int _len_count0 = 65025;
          struct perf_counts_values * count = (struct perf_counts_values *) malloc(_len_count0*sizeof(struct perf_counts_values));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0].run = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].ena = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pscaled0 = 65025;
          int * pscaled = (int *) malloc(_len_pscaled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pscaled0; _i0++) {
            pscaled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          perf_counts_values__scale(count,scale,pscaled);
          free(count);
          free(pscaled);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int scale = 10;
          int _len_count0 = 100;
          struct perf_counts_values * count = (struct perf_counts_values *) malloc(_len_count0*sizeof(struct perf_counts_values));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0].run = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].ena = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        count[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pscaled0 = 100;
          int * pscaled = (int *) malloc(_len_pscaled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pscaled0; _i0++) {
            pscaled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          perf_counts_values__scale(count,scale,pscaled);
          free(count);
          free(pscaled);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
