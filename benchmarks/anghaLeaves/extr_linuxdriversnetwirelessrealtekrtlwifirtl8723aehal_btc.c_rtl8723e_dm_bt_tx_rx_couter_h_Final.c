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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ high_priority_rx; scalar_t__ high_priority_tx; } ;

/* Variables and functions */
 TYPE_1__ hal_coex_8723 ; 

__attribute__((used)) static u32 rtl8723e_dm_bt_tx_rx_couter_h(struct ieee80211_hw *hw)
{
	u32	counters = 0;

	counters = hal_coex_8723.high_priority_tx +
			hal_coex_8723.high_priority_rx;
	return counters;
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
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = rtl8723e_dm_bt_tx_rx_couter_h(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = rtl8723e_dm_bt_tx_rx_couter_h(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = rtl8723e_dm_bt_tx_rx_couter_h(hw);
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
