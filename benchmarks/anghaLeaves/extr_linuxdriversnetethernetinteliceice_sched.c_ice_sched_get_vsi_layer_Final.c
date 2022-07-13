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
typedef  scalar_t__ u8 ;
struct ice_hw {scalar_t__ num_tx_sched_layers; scalar_t__ sw_entry_point_layer; } ;

/* Variables and functions */
 scalar_t__ ICE_VSI_LAYER_OFFSET ; 

__attribute__((used)) static u8 ice_sched_get_vsi_layer(struct ice_hw *hw)
{
	/* Num Layers       VSI layer
	 *     9               6
	 *     7               4
	 *     5 or less       sw_entry_point_layer
	 */
	/* calculate the vsi layer based on number of layers. */
	if (hw->num_tx_sched_layers > ICE_VSI_LAYER_OFFSET + 1) {
		u8 layer = hw->num_tx_sched_layers - ICE_VSI_LAYER_OFFSET;

		if (layer > hw->sw_entry_point_layer)
			return layer;
	}
	return hw->sw_entry_point_layer;
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
          int _len_hw0 = 1;
          struct ice_hw * hw = (struct ice_hw *) malloc(_len_hw0*sizeof(struct ice_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].num_tx_sched_layers = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].sw_entry_point_layer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ice_sched_get_vsi_layer(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ice_hw * hw = (struct ice_hw *) malloc(_len_hw0*sizeof(struct ice_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].num_tx_sched_layers = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].sw_entry_point_layer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ice_sched_get_vsi_layer(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ice_hw * hw = (struct ice_hw *) malloc(_len_hw0*sizeof(struct ice_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].num_tx_sched_layers = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].sw_entry_point_layer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ice_sched_get_vsi_layer(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
