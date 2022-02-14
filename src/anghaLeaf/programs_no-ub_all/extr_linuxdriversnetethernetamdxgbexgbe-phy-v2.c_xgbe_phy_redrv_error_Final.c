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
struct xgbe_phy_data {scalar_t__ redrv_if; int redrv_model; int redrv_lane; int /*<<< orphan*/  redrv; } ;

/* Variables and functions */
 scalar_t__ XGBE_PHY_REDRV_IF_MAX ; 
#define  XGBE_PHY_REDRV_MODEL_4223 129 
#define  XGBE_PHY_REDRV_MODEL_4227 128 

__attribute__((used)) static bool xgbe_phy_redrv_error(struct xgbe_phy_data *phy_data)
{
	if (!phy_data->redrv)
		return false;

	if (phy_data->redrv_if >= XGBE_PHY_REDRV_IF_MAX)
		return true;

	switch (phy_data->redrv_model) {
	case XGBE_PHY_REDRV_MODEL_4223:
		if (phy_data->redrv_lane > 3)
			return true;
		break;
	case XGBE_PHY_REDRV_MODEL_4227:
		if (phy_data->redrv_lane > 1)
			return true;
		break;
	default:
		return true;
	}

	return false;
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
          int _len_phy_data0 = 1;
          struct xgbe_phy_data * phy_data = (struct xgbe_phy_data *) malloc(_len_phy_data0*sizeof(struct xgbe_phy_data));
          for(int _i0 = 0; _i0 < _len_phy_data0; _i0++) {
            phy_data->redrv_if = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data->redrv_model = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data->redrv_lane = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data->redrv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xgbe_phy_redrv_error(phy_data);
          printf("%d\n", benchRet); 
          free(phy_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}