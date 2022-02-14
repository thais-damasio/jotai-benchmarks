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
struct xgbe_phy_data {int /*<<< orphan*/  sfp_base; } ;
typedef  enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;

/* Variables and functions */
#define  SPEED_100 131 
#define  SPEED_1000 130 
#define  SPEED_10000 129 
#define  SPEED_UNKNOWN 128 
 int XGBE_MODE_SFI ; 
 int XGBE_MODE_SGMII_100 ; 
 int XGBE_MODE_SGMII_1000 ; 
 int XGBE_MODE_UNKNOWN ; 
 int XGBE_MODE_X ; 
 int /*<<< orphan*/  XGBE_SFP_BASE_1000_T ; 

__attribute__((used)) static enum xgbe_mode xgbe_phy_get_sfp_mode(struct xgbe_phy_data *phy_data,
					    int speed)
{
	switch (speed) {
	case SPEED_100:
		return XGBE_MODE_SGMII_100;
	case SPEED_1000:
		if (phy_data->sfp_base == XGBE_SFP_BASE_1000_T)
			return XGBE_MODE_SGMII_1000;
		else
			return XGBE_MODE_X;
	case SPEED_10000:
	case SPEED_UNKNOWN:
		return XGBE_MODE_SFI;
	default:
		return XGBE_MODE_UNKNOWN;
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
          int speed = 255;
          int _len_phy_data0 = 1;
          struct xgbe_phy_data * phy_data = (struct xgbe_phy_data *) malloc(_len_phy_data0*sizeof(struct xgbe_phy_data));
          for(int _i0 = 0; _i0 < _len_phy_data0; _i0++) {
            phy_data->sfp_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xgbe_mode benchRet = xgbe_phy_get_sfp_mode(phy_data,speed);
          printf("{{other_type}} %p\n", &benchRet); 
          free(phy_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
