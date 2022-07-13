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
typedef  int /*<<< orphan*/  u8 ;
struct net_device {int priv_flags; } ;
struct TYPE_2__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
typedef  enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;

/* Variables and functions */
 int EBUSY ; 
 int EOPNOTSUPP ; 
 int IFF_BRIDGE_PORT ; 
#define  NL80211_IFTYPE_AP_VLAN 129 
#define  NL80211_IFTYPE_STATION 128 
 int WIPHY_FLAG_4ADDR_AP ; 
 int WIPHY_FLAG_4ADDR_STATION ; 

__attribute__((used)) static int nl80211_valid_4addr(struct cfg80211_registered_device *rdev,
			       struct net_device *netdev, u8 use_4addr,
			       enum nl80211_iftype iftype)
{
	if (!use_4addr) {
		if (netdev && (netdev->priv_flags & IFF_BRIDGE_PORT))
			return -EBUSY;
		return 0;
	}

	switch (iftype) {
	case NL80211_IFTYPE_AP_VLAN:
		if (rdev->wiphy.flags & WIPHY_FLAG_4ADDR_AP)
			return 0;
		break;
	case NL80211_IFTYPE_STATION:
		if (rdev->wiphy.flags & WIPHY_FLAG_4ADDR_STATION)
			return 0;
		break;
	default:
		break;
	}

	return -EOPNOTSUPP;
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
          int use_4addr = 100;
          enum nl80211_iftype iftype = 0;
          int _len_rdev0 = 1;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].wiphy.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_valid_4addr(rdev,netdev,use_4addr,iftype);
          printf("%d\n", benchRet); 
          free(rdev);
          free(netdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int use_4addr = 255;
          enum nl80211_iftype iftype = 0;
          int _len_rdev0 = 65025;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].wiphy.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 65025;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_valid_4addr(rdev,netdev,use_4addr,iftype);
          printf("%d\n", benchRet); 
          free(rdev);
          free(netdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int use_4addr = 10;
          enum nl80211_iftype iftype = 0;
          int _len_rdev0 = 100;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].wiphy.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 100;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].priv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_valid_4addr(rdev,netdev,use_4addr,iftype);
          printf("%d\n", benchRet); 
          free(rdev);
          free(netdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
