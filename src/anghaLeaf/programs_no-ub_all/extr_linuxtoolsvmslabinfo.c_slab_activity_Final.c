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
struct slabinfo {unsigned long alloc_fastpath; unsigned long free_fastpath; unsigned long alloc_slowpath; unsigned long free_slowpath; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long slab_activity(struct slabinfo *s)
{
	return 	s->alloc_fastpath + s->free_fastpath +
		s->alloc_slowpath + s->free_slowpath;
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
          int _len_s0 = 1;
          struct slabinfo * s = (struct slabinfo *) malloc(_len_s0*sizeof(struct slabinfo));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->alloc_fastpath = ((-2 * (next_i()%2)) + 1) * next_i();
        s->free_fastpath = ((-2 * (next_i()%2)) + 1) * next_i();
        s->alloc_slowpath = ((-2 * (next_i()%2)) + 1) * next_i();
        s->free_slowpath = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = slab_activity(s);
          printf("%lu\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}