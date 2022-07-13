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
typedef  int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int ah_ant_mode; } ;

/* Variables and functions */
#define  AR5K_ANTMODE_DEFAULT 130 
#define  AR5K_ANTMODE_FIXED_A 129 
#define  AR5K_ANTMODE_FIXED_B 128 

__attribute__((used)) static int
ath5k_get_antenna(struct ieee80211_hw *hw, u32 *tx_ant, u32 *rx_ant)
{
	struct ath5k_hw *ah = hw->priv;

	switch (ah->ah_ant_mode) {
	case AR5K_ANTMODE_FIXED_A:
		*tx_ant = 1; *rx_ant = 1; break;
	case AR5K_ANTMODE_FIXED_B:
		*tx_ant = 2; *rx_ant = 2; break;
	case AR5K_ANTMODE_DEFAULT:
		*tx_ant = 3; *rx_ant = 3; break;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath5k_hw *) malloc(_len_hw__i0__priv0*sizeof(struct ath5k_hw));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->ah_ant_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_ant0 = 1;
          int * tx_ant = (int *) malloc(_len_tx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_ant0; _i0++) {
            tx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ant0 = 1;
          int * rx_ant = (int *) malloc(_len_rx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_ant0; _i0++) {
            rx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_get_antenna(hw,tx_ant,rx_ant);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(tx_ant);
          free(rx_ant);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath5k_hw *) malloc(_len_hw__i0__priv0*sizeof(struct ath5k_hw));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->ah_ant_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_ant0 = 65025;
          int * tx_ant = (int *) malloc(_len_tx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_ant0; _i0++) {
            tx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ant0 = 65025;
          int * rx_ant = (int *) malloc(_len_rx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_ant0; _i0++) {
            rx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_get_antenna(hw,tx_ant,rx_ant);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(tx_ant);
          free(rx_ant);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath5k_hw *) malloc(_len_hw__i0__priv0*sizeof(struct ath5k_hw));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->ah_ant_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_ant0 = 100;
          int * tx_ant = (int *) malloc(_len_tx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_ant0; _i0++) {
            tx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ant0 = 100;
          int * rx_ant = (int *) malloc(_len_rx_ant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_ant0; _i0++) {
            rx_ant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_get_antenna(hw,tx_ant,rx_ant);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(tx_ant);
          free(rx_ant);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
