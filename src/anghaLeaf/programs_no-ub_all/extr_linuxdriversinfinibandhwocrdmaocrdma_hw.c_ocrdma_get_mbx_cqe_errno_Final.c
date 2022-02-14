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
typedef  int u16 ;

/* Variables and functions */
 int EINVAL ; 
 int EPERM ; 
#define  OCRDMA_MBX_CQE_STATUS_DMA_FAILED 132 
#define  OCRDMA_MBX_CQE_STATUS_INSUFFICIENT_PRIVILEDGES 131 
#define  OCRDMA_MBX_CQE_STATUS_INSUFFICIENT_RESOURCES 130 
#define  OCRDMA_MBX_CQE_STATUS_INVALID_PARAMETER 129 
#define  OCRDMA_MBX_CQE_STATUS_QUEUE_FLUSHING 128 

__attribute__((used)) static int ocrdma_get_mbx_cqe_errno(u16 cqe_status)
{
	int err_num = -EINVAL;

	switch (cqe_status) {
	case OCRDMA_MBX_CQE_STATUS_INSUFFICIENT_PRIVILEDGES:
		err_num = -EPERM;
		break;
	case OCRDMA_MBX_CQE_STATUS_INVALID_PARAMETER:
		err_num = -EINVAL;
		break;
	case OCRDMA_MBX_CQE_STATUS_INSUFFICIENT_RESOURCES:
	case OCRDMA_MBX_CQE_STATUS_QUEUE_FLUSHING:
		err_num = -EINVAL;
		break;
	case OCRDMA_MBX_CQE_STATUS_DMA_FAILED:
	default:
		err_num = -EINVAL;
		break;
	}
	return err_num;
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
          int cqe_status = 255;
          int benchRet = ocrdma_get_mbx_cqe_errno(cqe_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
