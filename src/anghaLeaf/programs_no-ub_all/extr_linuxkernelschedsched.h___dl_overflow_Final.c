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
typedef  int u64 ;
struct dl_bw {int bw; int total_bw; } ;

/* Variables and functions */

__attribute__((used)) static inline
bool __dl_overflow(struct dl_bw *dl_b, int cpus, u64 old_bw, u64 new_bw)
{
	return dl_b->bw != -1 &&
	       dl_b->bw * cpus < dl_b->total_bw - old_bw + new_bw;
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
          int cpus = 255;
          int old_bw = 255;
          int new_bw = 255;
          int _len_dl_b0 = 1;
          struct dl_bw * dl_b = (struct dl_bw *) malloc(_len_dl_b0*sizeof(struct dl_bw));
          for(int _i0 = 0; _i0 < _len_dl_b0; _i0++) {
            dl_b->bw = ((-2 * (next_i()%2)) + 1) * next_i();
        dl_b->total_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __dl_overflow(dl_b,cpus,old_bw,new_bw);
          printf("%d\n", benchRet); 
          free(dl_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
