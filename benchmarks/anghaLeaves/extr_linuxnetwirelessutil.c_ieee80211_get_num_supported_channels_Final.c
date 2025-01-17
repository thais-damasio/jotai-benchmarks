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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct wiphy {TYPE_1__** bands; } ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {scalar_t__ n_channels; } ;

/* Variables and functions */
 int NUM_NL80211_BANDS ; 

unsigned int ieee80211_get_num_supported_channels(struct wiphy *wiphy)
{
	enum nl80211_band band;
	unsigned int n_channels = 0;

	for (band = 0; band < NUM_NL80211_BANDS; band++)
		if (wiphy->bands[band])
			n_channels += wiphy->bands[band]->n_channels;

	return n_channels;
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
          int _len_wiphy0 = 1;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
              int _len_wiphy__i0__bands0 = 1;
          wiphy[_i0].bands = (struct TYPE_2__ **) malloc(_len_wiphy__i0__bands0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__bands0; _j0++) {
            int _len_wiphy__i0__bands1 = 1;
            wiphy[_i0].bands[_j0] = (struct TYPE_2__ *) malloc(_len_wiphy__i0__bands1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_wiphy__i0__bands1; _j1++) {
              wiphy[_i0].bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          unsigned int benchRet = ieee80211_get_num_supported_channels(wiphy);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(*(wiphy[_aux].bands));
        free(wiphy[_aux].bands);
          }
          free(wiphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
