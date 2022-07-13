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

/* Type definitions */
typedef  scalar_t__ npy_datetime ;

/* Variables and functions */

__attribute__((used)) static int
is_holiday(npy_datetime date,
            npy_datetime *holidays_begin, npy_datetime *holidays_end)
{
    npy_datetime *trial;

    /* Simple binary search */
    while (holidays_begin < holidays_end) {
        trial = holidays_begin + (holidays_end - holidays_begin) / 2;

        if (date < *trial) {
            holidays_end = trial;
        }
        else if (date > *trial) {
            holidays_begin = trial + 1;
        }
        else {
            return 1;
        }
    }

    /* Not found */
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
          long date = 255;
          int _len_holidays_begin0 = 65025;
          long * holidays_begin = (long *) malloc(_len_holidays_begin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_holidays_begin0; _i0++) {
            holidays_begin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_holidays_end0 = 65025;
          long * holidays_end = (long *) malloc(_len_holidays_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_holidays_end0; _i0++) {
            holidays_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_holiday(date,holidays_begin,holidays_end);
          printf("%d\n", benchRet); 
          free(holidays_begin);
          free(holidays_end);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long date = 10;
          int _len_holidays_begin0 = 100;
          long * holidays_begin = (long *) malloc(_len_holidays_begin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_holidays_begin0; _i0++) {
            holidays_begin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_holidays_end0 = 100;
          long * holidays_end = (long *) malloc(_len_holidays_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_holidays_end0; _i0++) {
            holidays_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_holiday(date,holidays_begin,holidays_end);
          printf("%d\n", benchRet); 
          free(holidays_begin);
          free(holidays_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
