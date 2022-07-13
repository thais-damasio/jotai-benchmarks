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
struct ethtool_rx_flow_spec {int flow_type; } ;

/* Variables and functions */
 int FLOW_EXT ; 
#define  IP_USER_FLOW 131 
#define  SCTP_V4_FLOW 130 
#define  TCP_V4_FLOW 129 
#define  UDP_V4_FLOW 128 

__attribute__((used)) static const char *i40e_flow_str(struct ethtool_rx_flow_spec *fsp)
{
	switch (fsp->flow_type & ~FLOW_EXT) {
	case TCP_V4_FLOW:
		return "tcp4";
	case UDP_V4_FLOW:
		return "udp4";
	case SCTP_V4_FLOW:
		return "sctp4";
	case IP_USER_FLOW:
		return "ip4";
	default:
		return "unknown";
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

    // int-bounds
    case 0:
    {
          int _len_fsp0 = 1;
          struct ethtool_rx_flow_spec * fsp = (struct ethtool_rx_flow_spec *) malloc(_len_fsp0*sizeof(struct ethtool_rx_flow_spec));
          for(int _i0 = 0; _i0 < _len_fsp0; _i0++) {
            fsp[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = i40e_flow_str(fsp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(fsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fsp0 = 65025;
          struct ethtool_rx_flow_spec * fsp = (struct ethtool_rx_flow_spec *) malloc(_len_fsp0*sizeof(struct ethtool_rx_flow_spec));
          for(int _i0 = 0; _i0 < _len_fsp0; _i0++) {
            fsp[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = i40e_flow_str(fsp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(fsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fsp0 = 100;
          struct ethtool_rx_flow_spec * fsp = (struct ethtool_rx_flow_spec *) malloc(_len_fsp0*sizeof(struct ethtool_rx_flow_spec));
          for(int _i0 = 0; _i0 < _len_fsp0; _i0++) {
            fsp[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = i40e_flow_str(fsp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(fsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
