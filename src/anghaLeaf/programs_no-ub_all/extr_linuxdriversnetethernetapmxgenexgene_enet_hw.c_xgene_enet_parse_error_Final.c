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
struct xgene_enet_desc_ring {int /*<<< orphan*/  rx_fifo_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  rx_crc_errors; } ;
typedef  enum xgene_enet_err_code { ____Placeholder_xgene_enet_err_code } xgene_enet_err_code ;

/* Variables and functions */
#define  INGRESS_CHECKSUM 134 
#define  INGRESS_CHECKSUM_COMPUTE 133 
#define  INGRESS_CRC 132 
#define  INGRESS_FIFO_OVERRUN 131 
#define  INGRESS_PKT_LEN 130 
#define  INGRESS_PKT_UNDER 129 
#define  INGRESS_TRUNC_FRAME 128 

void xgene_enet_parse_error(struct xgene_enet_desc_ring *ring,
			    enum xgene_enet_err_code status)
{
	switch (status) {
	case INGRESS_CRC:
		ring->rx_crc_errors++;
		break;
	case INGRESS_CHECKSUM:
	case INGRESS_CHECKSUM_COMPUTE:
		ring->rx_errors++;
		break;
	case INGRESS_TRUNC_FRAME:
		ring->rx_frame_errors++;
		break;
	case INGRESS_PKT_LEN:
		ring->rx_length_errors++;
		break;
	case INGRESS_PKT_UNDER:
		ring->rx_frame_errors++;
		break;
	case INGRESS_FIFO_OVERRUN:
		ring->rx_fifo_errors++;
		break;
	default:
		break;
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
          enum xgene_enet_err_code status = 0;
          int _len_ring0 = 1;
          struct xgene_enet_desc_ring * ring = (struct xgene_enet_desc_ring *) malloc(_len_ring0*sizeof(struct xgene_enet_desc_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring->rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        ring->rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        ring->rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        ring->rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        ring->rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgene_enet_parse_error(ring,status);
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}