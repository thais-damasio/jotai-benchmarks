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
struct sxgbe_priv_data {int dummy; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;

/* Variables and functions */
#define  AH_ESP_V4_FLOW 141 
#define  AH_ESP_V6_FLOW 140 
#define  AH_V4_FLOW 139 
#define  AH_V6_FLOW 138 
 int EINVAL ; 
#define  ESP_V4_FLOW 137 
#define  ESP_V6_FLOW 136 
#define  IPV4_FLOW 135 
#define  IPV6_FLOW 134 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
#define  SCTP_V4_FLOW 133 
#define  SCTP_V6_FLOW 132 
#define  TCP_V4_FLOW 131 
#define  TCP_V6_FLOW 130 
#define  UDP_V4_FLOW 129 
#define  UDP_V6_FLOW 128 

__attribute__((used)) static int sxgbe_get_rss_hash_opts(struct sxgbe_priv_data *priv,
				   struct ethtool_rxnfc *cmd)
{
	cmd->data = 0;

	/* Report default options for RSS on sxgbe */
	switch (cmd->flow_type) {
	case TCP_V4_FLOW:
	case UDP_V4_FLOW:
		cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* Fall through */
	case SCTP_V4_FLOW:
	case AH_ESP_V4_FLOW:
	case AH_V4_FLOW:
	case ESP_V4_FLOW:
	case IPV4_FLOW:
		cmd->data |= RXH_IP_SRC | RXH_IP_DST;
		break;
	case TCP_V6_FLOW:
	case UDP_V6_FLOW:
		cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* Fall through */
	case SCTP_V6_FLOW:
	case AH_ESP_V6_FLOW:
	case AH_V6_FLOW:
	case ESP_V6_FLOW:
	case IPV6_FLOW:
		cmd->data |= RXH_IP_SRC | RXH_IP_DST;
		break;
	default:
		return -EINVAL;
	}

	return 0;
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
          int _len_priv0 = 1;
          struct sxgbe_priv_data * priv = (struct sxgbe_priv_data *) malloc(_len_priv0*sizeof(struct sxgbe_priv_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sxgbe_get_rss_hash_opts(priv,cmd);
          printf("%d\n", benchRet); 
          free(priv);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct sxgbe_priv_data * priv = (struct sxgbe_priv_data *) malloc(_len_priv0*sizeof(struct sxgbe_priv_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sxgbe_get_rss_hash_opts(priv,cmd);
          printf("%d\n", benchRet); 
          free(priv);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct sxgbe_priv_data * priv = (struct sxgbe_priv_data *) malloc(_len_priv0*sizeof(struct sxgbe_priv_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sxgbe_get_rss_hash_opts(priv,cmd);
          printf("%d\n", benchRet); 
          free(priv);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
