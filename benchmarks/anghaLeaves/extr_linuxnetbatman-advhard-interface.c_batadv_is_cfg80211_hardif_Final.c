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
       1            big-arr-10x\n\
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

/* Type definitions */
typedef  int u32 ;
struct batadv_hard_iface {int wifi_flags; } ;

/* Variables and functions */
 int BATADV_HARDIF_WIFI_CFG80211_DIRECT ; 
 int BATADV_HARDIF_WIFI_CFG80211_INDIRECT ; 

bool batadv_is_cfg80211_hardif(struct batadv_hard_iface *hard_iface)
{
	u32 allowed_flags = 0;

	allowed_flags |= BATADV_HARDIF_WIFI_CFG80211_DIRECT;
	allowed_flags |= BATADV_HARDIF_WIFI_CFG80211_INDIRECT;

	return !!(hard_iface->wifi_flags & allowed_flags);
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
          int _len_hard_iface0 = 1;
          struct batadv_hard_iface * hard_iface = (struct batadv_hard_iface *) malloc(_len_hard_iface0*sizeof(struct batadv_hard_iface));
          for(int _i0 = 0; _i0 < _len_hard_iface0; _i0++) {
            hard_iface[_i0].wifi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = batadv_is_cfg80211_hardif(hard_iface);
          printf("%d\n", benchRet); 
          free(hard_iface);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hard_iface0 = 100;
          struct batadv_hard_iface * hard_iface = (struct batadv_hard_iface *) malloc(_len_hard_iface0*sizeof(struct batadv_hard_iface));
          for(int _i0 = 0; _i0 < _len_hard_iface0; _i0++) {
            hard_iface[_i0].wifi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = batadv_is_cfg80211_hardif(hard_iface);
          printf("%d\n", benchRet); 
          free(hard_iface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
