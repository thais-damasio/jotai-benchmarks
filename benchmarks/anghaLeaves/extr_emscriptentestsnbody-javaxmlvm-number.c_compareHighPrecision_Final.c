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
typedef  scalar_t__ U_64 ;
typedef  size_t IDATA ;

/* Variables and functions */

IDATA
compareHighPrecision (U_64 * arg1, IDATA length1, U_64 * arg2, IDATA length2)
{
	while (--length1 >= 0 && arg1[length1] == 0);
	while (--length2 >= 0 && arg2[length2] == 0);

	if (length1 > length2)
		return 1;
	else if (length1 < length2)
		return -1;
	else if (length1 > -1)
    {
		do
        {
			if (arg1[length1] > arg2[length1])
				return 1;
			else if (arg1[length1] < arg2[length1])
				return -1;
        }
		while (--length1 >= 0);
    }

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
          unsigned long length1 = 255;
          unsigned long length2 = 255;
          int _len_arg10 = 65025;
          long * arg1 = (long *) malloc(_len_arg10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg20 = 65025;
          long * arg2 = (long *) malloc(_len_arg20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = compareHighPrecision(arg1,length1,arg2,length2);
          printf("%lu\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long length1 = 10;
          unsigned long length2 = 10;
          int _len_arg10 = 100;
          long * arg1 = (long *) malloc(_len_arg10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg20 = 100;
          long * arg2 = (long *) malloc(_len_arg20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = compareHighPrecision(arg1,length1,arg2,length2);
          printf("%lu\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
