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
typedef  int u32 ;
struct rfkill {int state; } ;

/* Variables and functions */
 int RFKILL_BLOCK_SW ; 
 int RFKILL_BLOCK_SW_PREV ; 
 int RFKILL_BLOCK_SW_SETCALL ; 

__attribute__((used)) static void __rfkill_set_sw_state(struct rfkill *rfkill, bool blocked)
{
	u32 bit = RFKILL_BLOCK_SW;

	/* if in a ops->set_block right now, use other bit */
	if (rfkill->state & RFKILL_BLOCK_SW_SETCALL)
		bit = RFKILL_BLOCK_SW_PREV;

	if (blocked)
		rfkill->state |= bit;
	else
		rfkill->state &= ~bit;
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
          int blocked = 255;
          int _len_rfkill0 = 1;
          struct rfkill * rfkill = (struct rfkill *) malloc(_len_rfkill0*sizeof(struct rfkill));
          for(int _i0 = 0; _i0 < _len_rfkill0; _i0++) {
            rfkill->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __rfkill_set_sw_state(rfkill,blocked);
          free(rfkill);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
