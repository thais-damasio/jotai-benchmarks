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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */

__attribute__((used)) static void JumpToByteBoundary(size_t* storage_ix, uint8_t* storage) {
  *storage_ix = (*storage_ix + 7u) & ~7u;
  storage[*storage_ix >> 3] = 0;
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
          int _len_storage_ix0 = 65025;
          unsigned long * storage_ix = (unsigned long *) malloc(_len_storage_ix0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_storage_ix0; _i0++) {
            storage_ix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_storage0 = 65025;
          long * storage = (long *) malloc(_len_storage0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_storage0; _i0++) {
            storage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          JumpToByteBoundary(storage_ix,storage);
          free(storage_ix);
          free(storage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
