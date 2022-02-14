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
typedef  enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef  enum hns_roce_qp_state { ____Placeholder_hns_roce_qp_state } hns_roce_qp_state ;

/* Variables and functions */
#define  HNS_ROCE_QP_STATE_ERR 133 
#define  HNS_ROCE_QP_STATE_INIT 132 
#define  HNS_ROCE_QP_STATE_RST 131 
#define  HNS_ROCE_QP_STATE_RTR 130 
#define  HNS_ROCE_QP_STATE_RTS 129 
#define  HNS_ROCE_QP_STATE_SQD 128 
 int IB_QPS_ERR ; 
 int IB_QPS_INIT ; 
 int IB_QPS_RESET ; 
 int IB_QPS_RTR ; 
 int IB_QPS_RTS ; 
 int IB_QPS_SQD ; 

__attribute__((used)) static enum ib_qp_state to_ib_qp_state(enum hns_roce_qp_state state)
{
	switch (state) {
	case HNS_ROCE_QP_STATE_RST:
		return IB_QPS_RESET;
	case HNS_ROCE_QP_STATE_INIT:
		return IB_QPS_INIT;
	case HNS_ROCE_QP_STATE_RTR:
		return IB_QPS_RTR;
	case HNS_ROCE_QP_STATE_RTS:
		return IB_QPS_RTS;
	case HNS_ROCE_QP_STATE_SQD:
		return IB_QPS_SQD;
	case HNS_ROCE_QP_STATE_ERR:
		return IB_QPS_ERR;
	default:
		return IB_QPS_ERR;
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
          enum hns_roce_qp_state state = 0;
          enum ib_qp_state benchRet = to_ib_qp_state(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
