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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct ef4_tx_queue {TYPE_2__ txd; } ;
typedef  int /*<<< orphan*/  ef4_qword_t ;

/* Variables and functions */

__attribute__((used)) static inline ef4_qword_t *
ef4_tx_desc(struct ef4_tx_queue *tx_queue, unsigned int index)
{
	return ((ef4_qword_t *) (tx_queue->txd.buf.addr)) + index;
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
          unsigned int index = 255;
          int _len_tx_queue0 = 1;
          struct ef4_tx_queue * tx_queue = (struct ef4_tx_queue *) malloc(_len_tx_queue0*sizeof(struct ef4_tx_queue));
          for(int _i0 = 0; _i0 < _len_tx_queue0; _i0++) {
            tx_queue->txd.buf.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = ef4_tx_desc(tx_queue,index);
          printf("{{other_type}} %p\n", &benchRet); 
          free(tx_queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}