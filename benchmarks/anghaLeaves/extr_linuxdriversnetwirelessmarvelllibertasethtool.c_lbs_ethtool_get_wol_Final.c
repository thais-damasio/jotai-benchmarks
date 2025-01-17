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

/* Type definitions */
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int wol_criteria; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;

/* Variables and functions */
 int EHS_REMOVE_WAKEUP ; 
 int EHS_WAKE_ON_BROADCAST_DATA ; 
 int EHS_WAKE_ON_MAC_EVENT ; 
 int EHS_WAKE_ON_MULTICAST_DATA ; 
 int EHS_WAKE_ON_UNICAST_DATA ; 
 int WAKE_BCAST ; 
 int WAKE_MCAST ; 
 int WAKE_PHY ; 
 int WAKE_UCAST ; 

__attribute__((used)) static void lbs_ethtool_get_wol(struct net_device *dev,
				struct ethtool_wolinfo *wol)
{
	struct lbs_private *priv = dev->ml_priv;

	wol->supported = WAKE_UCAST|WAKE_MCAST|WAKE_BCAST|WAKE_PHY;

	if (priv->wol_criteria == EHS_REMOVE_WAKEUP)
		return;

	if (priv->wol_criteria & EHS_WAKE_ON_UNICAST_DATA)
		wol->wolopts |= WAKE_UCAST;
	if (priv->wol_criteria & EHS_WAKE_ON_MULTICAST_DATA)
		wol->wolopts |= WAKE_MCAST;
	if (priv->wol_criteria & EHS_WAKE_ON_BROADCAST_DATA)
		wol->wolopts |= WAKE_BCAST;
	if (priv->wol_criteria & EHS_WAKE_ON_MAC_EVENT)
		wol->wolopts |= WAKE_PHY;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct lbs_private *) malloc(_len_dev__i0__ml_priv0*sizeof(struct lbs_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
            dev[_i0].ml_priv->wol_criteria = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wol0 = 1;
          struct ethtool_wolinfo * wol = (struct ethtool_wolinfo *) malloc(_len_wol0*sizeof(struct ethtool_wolinfo));
          for(int _i0 = 0; _i0 < _len_wol0; _i0++) {
            wol[_i0].supported = ((-2 * (next_i()%2)) + 1) * next_i();
        wol[_i0].wolopts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lbs_ethtool_get_wol(dev,wol);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(wol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
