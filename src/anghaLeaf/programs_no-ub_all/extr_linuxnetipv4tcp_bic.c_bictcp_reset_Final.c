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
struct bictcp {int delayed_ack; scalar_t__ epoch_start; scalar_t__ last_time; scalar_t__ last_cwnd; scalar_t__ last_max_cwnd; scalar_t__ cnt; } ;

/* Variables and functions */
 int ACK_RATIO_SHIFT ; 

__attribute__((used)) static inline void bictcp_reset(struct bictcp *ca)
{
	ca->cnt = 0;
	ca->last_max_cwnd = 0;
	ca->last_cwnd = 0;
	ca->last_time = 0;
	ca->epoch_start = 0;
	ca->delayed_ack = 2 << ACK_RATIO_SHIFT;
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
          int _len_ca0 = 1;
          struct bictcp * ca = (struct bictcp *) malloc(_len_ca0*sizeof(struct bictcp));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca->delayed_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->epoch_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->last_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->last_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->last_max_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bictcp_reset(ca);
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
