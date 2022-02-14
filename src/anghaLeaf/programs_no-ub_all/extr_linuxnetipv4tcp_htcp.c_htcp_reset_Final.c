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
struct htcp {int /*<<< orphan*/  last_cong; int /*<<< orphan*/  old_maxB; int /*<<< orphan*/  undo_old_maxB; int /*<<< orphan*/  maxRTT; int /*<<< orphan*/  undo_maxRTT; int /*<<< orphan*/  undo_last_cong; } ;

/* Variables and functions */
 int /*<<< orphan*/  jiffies ; 

__attribute__((used)) static inline void htcp_reset(struct htcp *ca)
{
	ca->undo_last_cong = ca->last_cong;
	ca->undo_maxRTT = ca->maxRTT;
	ca->undo_old_maxB = ca->old_maxB;

	ca->last_cong = jiffies;
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
          struct htcp * ca = (struct htcp *) malloc(_len_ca0*sizeof(struct htcp));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca->last_cong = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->old_maxB = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->undo_old_maxB = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->maxRTT = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->undo_maxRTT = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->undo_last_cong = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          htcp_reset(ca);
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
