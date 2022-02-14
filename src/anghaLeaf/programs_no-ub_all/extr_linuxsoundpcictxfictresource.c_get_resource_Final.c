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
typedef  int u8 ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int
get_resource(u8 *rscs, unsigned int amount,
	     unsigned int multi, unsigned int *ridx)
{
	int i, j, k, n;

	/* Check whether there are sufficient resources to meet request. */
	for (i = 0, n = multi; i < amount; i++) {
		j = i / 8;
		k = i % 8;
		if (rscs[j] & ((u8)1 << k)) {
			n = multi;
			continue;
		}
		if (!(--n))
			break; /* found sufficient contiguous resources */
	}

	if (i >= amount) {
		/* Can not find sufficient contiguous resources */
		return -ENOENT;
	}

	/* Mark the contiguous bits in resource bit-map as used */
	for (n = multi; n > 0; n--) {
		j = i / 8;
		k = i % 8;
		rscs[j] |= ((u8)1 << k);
		i--;
	}

	*ridx = i + 1;

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
          unsigned int amount = 255;
          unsigned int multi = 255;
          int _len_rscs0 = 65025;
          int * rscs = (int *) malloc(_len_rscs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rscs0; _i0++) {
            rscs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ridx0 = 65025;
          unsigned int * ridx = (unsigned int *) malloc(_len_ridx0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ridx0; _i0++) {
            ridx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_resource(rscs,amount,multi,ridx);
          printf("%d\n", benchRet); 
          free(rscs);
          free(ridx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}