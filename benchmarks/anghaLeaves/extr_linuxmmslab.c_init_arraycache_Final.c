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
struct array_cache {int limit; int batchcount; scalar_t__ touched; scalar_t__ avail; } ;

/* Variables and functions */

__attribute__((used)) static void init_arraycache(struct array_cache *ac, int limit, int batch)
{
	if (ac) {
		ac->avail = 0;
		ac->limit = limit;
		ac->batchcount = batch;
		ac->touched = 0;
	}
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
          int limit = 100;
          int batch = 100;
          int _len_ac0 = 1;
          struct array_cache * ac = (struct array_cache *) malloc(_len_ac0*sizeof(struct array_cache));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
            ac[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].batchcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].touched = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_arraycache(ac,limit,batch);
          free(ac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int limit = 255;
          int batch = 255;
          int _len_ac0 = 65025;
          struct array_cache * ac = (struct array_cache *) malloc(_len_ac0*sizeof(struct array_cache));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
            ac[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].batchcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].touched = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_arraycache(ac,limit,batch);
          free(ac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int limit = 10;
          int batch = 10;
          int _len_ac0 = 100;
          struct array_cache * ac = (struct array_cache *) malloc(_len_ac0*sizeof(struct array_cache));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
            ac[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].batchcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].touched = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_arraycache(ac,limit,batch);
          free(ac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
