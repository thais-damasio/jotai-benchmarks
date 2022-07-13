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

/* Type definitions */
struct be_rx_compl_info {scalar_t__ l4_csum; int /*<<< orphan*/  err; scalar_t__ tcpf; } ;

/* Variables and functions */

__attribute__((used)) static inline bool do_gro(struct be_rx_compl_info *rxcp)
{
	return (rxcp->tcpf && !rxcp->err && rxcp->l4_csum) ? true : false;
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
          int _len_rxcp0 = 1;
          struct be_rx_compl_info * rxcp = (struct be_rx_compl_info *) malloc(_len_rxcp0*sizeof(struct be_rx_compl_info));
          for(int _i0 = 0; _i0 < _len_rxcp0; _i0++) {
            rxcp[_i0].l4_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].tcpf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_gro(rxcp);
          printf("%d\n", benchRet); 
          free(rxcp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rxcp0 = 65025;
          struct be_rx_compl_info * rxcp = (struct be_rx_compl_info *) malloc(_len_rxcp0*sizeof(struct be_rx_compl_info));
          for(int _i0 = 0; _i0 < _len_rxcp0; _i0++) {
            rxcp[_i0].l4_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].tcpf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_gro(rxcp);
          printf("%d\n", benchRet); 
          free(rxcp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rxcp0 = 100;
          struct be_rx_compl_info * rxcp = (struct be_rx_compl_info *) malloc(_len_rxcp0*sizeof(struct be_rx_compl_info));
          for(int _i0 = 0; _i0 < _len_rxcp0; _i0++) {
            rxcp[_i0].l4_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].tcpf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_gro(rxcp);
          printf("%d\n", benchRet); 
          free(rxcp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
