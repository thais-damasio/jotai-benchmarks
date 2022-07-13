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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct t3_wq {TYPE_2__* queue; } ;
struct TYPE_3__ {int err; } ;
struct TYPE_4__ {TYPE_1__ wq_in_err; } ;

/* Variables and functions */

__attribute__((used)) static inline void cxio_disable_wq_db(struct t3_wq *wq)
{
	wq->queue->wq_in_err.err |= 2;
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
          int _len_wq0 = 1;
          struct t3_wq * wq = (struct t3_wq *) malloc(_len_wq0*sizeof(struct t3_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              int _len_wq__i0__queue0 = 1;
          wq[_i0].queue = (struct TYPE_4__ *) malloc(_len_wq__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wq__i0__queue0; _j0++) {
            wq[_i0].queue->wq_in_err.err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxio_disable_wq_db(wq);
          for(int _aux = 0; _aux < _len_wq0; _aux++) {
          free(wq[_aux].queue);
          }
          free(wq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wq0 = 65025;
          struct t3_wq * wq = (struct t3_wq *) malloc(_len_wq0*sizeof(struct t3_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              int _len_wq__i0__queue0 = 1;
          wq[_i0].queue = (struct TYPE_4__ *) malloc(_len_wq__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wq__i0__queue0; _j0++) {
            wq[_i0].queue->wq_in_err.err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxio_disable_wq_db(wq);
          for(int _aux = 0; _aux < _len_wq0; _aux++) {
          free(wq[_aux].queue);
          }
          free(wq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wq0 = 100;
          struct t3_wq * wq = (struct t3_wq *) malloc(_len_wq0*sizeof(struct t3_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              int _len_wq__i0__queue0 = 1;
          wq[_i0].queue = (struct TYPE_4__ *) malloc(_len_wq__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wq__i0__queue0; _j0++) {
            wq[_i0].queue->wq_in_err.err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxio_disable_wq_db(wq);
          for(int _aux = 0; _aux < _len_wq0; _aux++) {
          free(wq[_aux].queue);
          }
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
