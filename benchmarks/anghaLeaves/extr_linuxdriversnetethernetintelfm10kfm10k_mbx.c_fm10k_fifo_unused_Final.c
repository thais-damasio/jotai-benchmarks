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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
typedef  scalar_t__ u16 ;
struct fm10k_mbx_fifo {scalar_t__ tail; scalar_t__ head; scalar_t__ size; } ;

/* Variables and functions */

__attribute__((used)) static u16 fm10k_fifo_unused(struct fm10k_mbx_fifo *fifo)
{
	return fifo->size + fifo->head - fifo->tail;
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
          int _len_fifo0 = 1;
          struct fm10k_mbx_fifo * fifo = (struct fm10k_mbx_fifo *) malloc(_len_fifo0*sizeof(struct fm10k_mbx_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = fm10k_fifo_unused(fifo);
          printf("%ld\n", benchRet); 
          free(fifo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
