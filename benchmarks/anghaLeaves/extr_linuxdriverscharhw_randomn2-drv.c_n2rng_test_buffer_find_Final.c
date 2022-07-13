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
struct n2rng {scalar_t__* test_buffer; } ;

/* Variables and functions */
 int SELFTEST_BUFFER_WORDS ; 

__attribute__((used)) static int n2rng_test_buffer_find(struct n2rng *np, u64 val)
{
	int i, count = 0;

	/* Purposefully skip over the first word.  */
	for (i = 1; i < SELFTEST_BUFFER_WORDS; i++) {
		if (np->test_buffer[i] == val)
			count++;
	}
	return count;
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
          long val = 100;
          int _len_np0 = 1;
          struct n2rng * np = (struct n2rng *) malloc(_len_np0*sizeof(struct n2rng));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__test_buffer0 = 1;
          np[_i0].test_buffer = (long *) malloc(_len_np__i0__test_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__test_buffer0; _j0++) {
            np[_i0].test_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = n2rng_test_buffer_find(np,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].test_buffer);
          }
          free(np);
        
        break;
    }
    // big-arr
    case 1:
    {
          long val = 255;
          int _len_np0 = 65025;
          struct n2rng * np = (struct n2rng *) malloc(_len_np0*sizeof(struct n2rng));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__test_buffer0 = 1;
          np[_i0].test_buffer = (long *) malloc(_len_np__i0__test_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__test_buffer0; _j0++) {
            np[_i0].test_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = n2rng_test_buffer_find(np,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].test_buffer);
          }
          free(np);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long val = 10;
          int _len_np0 = 100;
          struct n2rng * np = (struct n2rng *) malloc(_len_np0*sizeof(struct n2rng));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__test_buffer0 = 1;
          np[_i0].test_buffer = (long *) malloc(_len_np__i0__test_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__test_buffer0; _j0++) {
            np[_i0].test_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = n2rng_test_buffer_find(np,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].test_buffer);
          }
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
