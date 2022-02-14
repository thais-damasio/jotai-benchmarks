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
typedef  int u8 ;
typedef  scalar_t__ u16 ;
struct il_priv {int dummy; } ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;

/* Variables and functions */
 int IL_ACTIVE_DWELL_FACTOR_24GHZ ; 
 int IL_ACTIVE_DWELL_FACTOR_52GHZ ; 
 scalar_t__ IL_ACTIVE_DWELL_TIME_24 ; 
 scalar_t__ IL_ACTIVE_DWELL_TIME_52 ; 
 int NL80211_BAND_5GHZ ; 

u16
il_get_active_dwell_time(struct il_priv *il, enum nl80211_band band,
			 u8 n_probes)
{
	if (band == NL80211_BAND_5GHZ)
		return IL_ACTIVE_DWELL_TIME_52 +
		    IL_ACTIVE_DWELL_FACTOR_52GHZ * (n_probes + 1);
	else
		return IL_ACTIVE_DWELL_TIME_24 +
		    IL_ACTIVE_DWELL_FACTOR_24GHZ * (n_probes + 1);
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
          enum nl80211_band band = 0;
          int n_probes = 255;
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = il_get_active_dwell_time(il,band,n_probes);
          printf("%ld\n", benchRet); 
          free(il);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
