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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct qede_rx_queue {int dummy; } ;
struct TYPE_2__ {int offset; } ;

/* Variables and functions */
 int QEDE_NUM_RQSTATS ; 
 TYPE_1__* qede_rqstats_arr ; 

__attribute__((used)) static void qede_get_ethtool_stats_rxq(struct qede_rx_queue *rxq, u64 **buf)
{
	int i;

	for (i = 0; i < QEDE_NUM_RQSTATS; i++) {
		**buf = *((u64 *)(((void *)rxq) + qede_rqstats_arr[i].offset));
		(*buf)++;
	}
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
          int _len_rxq0 = 1;
          struct qede_rx_queue * rxq = (struct qede_rx_queue *) malloc(_len_rxq0*sizeof(struct qede_rx_queue));
          for(int _i0 = 0; _i0 < _len_rxq0; _i0++) {
            rxq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int ** buf = (int **) malloc(_len_buf0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            int _len_buf1 = 1;
            buf[_i0] = (int *) malloc(_len_buf1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_buf1; _i1++) {
              buf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          qede_get_ethtool_stats_rxq(rxq,buf);
          free(rxq);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              free(buf[i1]);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
