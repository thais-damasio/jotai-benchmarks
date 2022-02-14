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
struct zd_mc_hash {int high; scalar_t__ low; } ;

/* Variables and functions */

__attribute__((used)) static inline void zd_mc_clear(struct zd_mc_hash *hash)
{
	hash->low = 0;
	/* The interfaces must always received broadcasts.
	 * The hash of the broadcast address ff:ff:ff:ff:ff:ff is 63.
	 */
	hash->high = 0x80000000;
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
          int _len_hash0 = 1;
          struct zd_mc_hash * hash = (struct zd_mc_hash *) malloc(_len_hash0*sizeof(struct zd_mc_hash));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash->high = ((-2 * (next_i()%2)) + 1) * next_i();
        hash->low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zd_mc_clear(hash);
          free(hash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
