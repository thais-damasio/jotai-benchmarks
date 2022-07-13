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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ state; } ;
typedef  scalar_t__* PULONG ;
typedef  TYPE_1__* PTCP_PCB ;

/* Variables and functions */

void
LibTCPGetSocketStatus(
    PTCP_PCB pcb,
    PULONG State)
{
    /* Translate state from enum tcp_state -> MIB_TCP_STATE */
    *State = pcb->state + 1;
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
          int _len_pcb0 = 1;
          struct TYPE_3__ * pcb = (struct TYPE_3__ *) malloc(_len_pcb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pcb0; _i0++) {
            pcb[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_State0 = 1;
          long * State = (long *) malloc(_len_State0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_State0; _i0++) {
            State[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LibTCPGetSocketStatus(pcb,State);
          free(pcb);
          free(State);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pcb0 = 65025;
          struct TYPE_3__ * pcb = (struct TYPE_3__ *) malloc(_len_pcb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pcb0; _i0++) {
            pcb[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_State0 = 65025;
          long * State = (long *) malloc(_len_State0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_State0; _i0++) {
            State[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LibTCPGetSocketStatus(pcb,State);
          free(pcb);
          free(State);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pcb0 = 100;
          struct TYPE_3__ * pcb = (struct TYPE_3__ *) malloc(_len_pcb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pcb0; _i0++) {
            pcb[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_State0 = 100;
          long * State = (long *) malloc(_len_State0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_State0; _i0++) {
            State[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LibTCPGetSocketStatus(pcb,State);
          free(pcb);
          free(State);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
