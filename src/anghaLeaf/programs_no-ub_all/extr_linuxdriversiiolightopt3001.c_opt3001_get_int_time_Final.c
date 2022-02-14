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
struct opt3001 {int int_time; } ;

/* Variables and functions */
 int IIO_VAL_INT_PLUS_MICRO ; 

__attribute__((used)) static int opt3001_get_int_time(struct opt3001 *opt, int *val, int *val2)
{
	*val = 0;
	*val2 = opt->int_time;

	return IIO_VAL_INT_PLUS_MICRO;
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
          int _len_opt0 = 1;
          struct opt3001 * opt = (struct opt3001 *) malloc(_len_opt0*sizeof(struct opt3001));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt->int_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val20 = 65025;
          int * val2 = (int *) malloc(_len_val20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val20; _i0++) {
            val2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = opt3001_get_int_time(opt,val,val2);
          printf("%d\n", benchRet); 
          free(opt);
          free(val);
          free(val2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
