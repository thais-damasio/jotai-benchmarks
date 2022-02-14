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
typedef  int uint64_t ;
struct ws_interval {int ts_start; int phi0; int dphi0; int ddphi; } ;
typedef  int int64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t phi_at(struct ws_interval *in, int64_t ts)
{
    uint64_t dt = ts - in->ts_start;
    uint64_t dt2 = dt & 1 ? /* dt * (dt - 1) / 2 without overflow */
                   dt * ((dt - 1) >> 1) : (dt >> 1) * (dt - 1);
    return in->phi0 + dt * in->dphi0 + dt2 * in->ddphi;
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
          int ts = 255;
          int _len_in0 = 1;
          struct ws_interval * in = (struct ws_interval *) malloc(_len_in0*sizeof(struct ws_interval));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in->ts_start = ((-2 * (next_i()%2)) + 1) * next_i();
        in->phi0 = ((-2 * (next_i()%2)) + 1) * next_i();
        in->dphi0 = ((-2 * (next_i()%2)) + 1) * next_i();
        in->ddphi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phi_at(in,ts);
          printf("%d\n", benchRet); 
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
