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
typedef  enum ocrdma_qp_state { ____Placeholder_ocrdma_qp_state } ocrdma_qp_state ;
typedef  enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;

/* Variables and functions */
 int IB_QPS_ERR ; 
 int IB_QPS_INIT ; 
 int IB_QPS_RESET ; 
 int IB_QPS_RTR ; 
 int IB_QPS_RTS ; 
 int IB_QPS_SQD ; 
 int IB_QPS_SQE ; 
#define  OCRDMA_QPS_ERR 135 
#define  OCRDMA_QPS_INIT 134 
#define  OCRDMA_QPS_RST 133 
#define  OCRDMA_QPS_RTR 132 
#define  OCRDMA_QPS_RTS 131 
#define  OCRDMA_QPS_SQD 130 
#define  OCRDMA_QPS_SQE 129 
#define  OCRDMA_QPS_SQ_DRAINING 128 

enum ib_qp_state get_ibqp_state(enum ocrdma_qp_state qps)
{
	switch (qps) {
	case OCRDMA_QPS_RST:
		return IB_QPS_RESET;
	case OCRDMA_QPS_INIT:
		return IB_QPS_INIT;
	case OCRDMA_QPS_RTR:
		return IB_QPS_RTR;
	case OCRDMA_QPS_RTS:
		return IB_QPS_RTS;
	case OCRDMA_QPS_SQD:
	case OCRDMA_QPS_SQ_DRAINING:
		return IB_QPS_SQD;
	case OCRDMA_QPS_SQE:
		return IB_QPS_SQE;
	case OCRDMA_QPS_ERR:
		return IB_QPS_ERR;
	}
	return IB_QPS_ERR;
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
          enum ocrdma_qp_state qps = 0;
          enum ib_qp_state benchRet = get_ibqp_state(qps);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
