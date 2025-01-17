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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct net_device {struct adapter* ml_priv; } ;
struct ethtool_coalesce {int /*<<< orphan*/  use_adaptive_rx_coalesce; int /*<<< orphan*/  rate_sample_interval; int /*<<< orphan*/  rx_coalesce_usecs; } ;
struct TYPE_4__ {int /*<<< orphan*/  coalesce_enable; int /*<<< orphan*/  sample_interval_usecs; int /*<<< orphan*/  rx_coalesce_usecs; } ;
struct TYPE_3__ {TYPE_2__ sge; } ;
struct adapter {TYPE_1__ params; } ;

/* Variables and functions */

__attribute__((used)) static int get_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
{
	struct adapter *adapter = dev->ml_priv;

	c->rx_coalesce_usecs = adapter->params.sge.rx_coalesce_usecs;
	c->rate_sample_interval = adapter->params.sge.sample_interval_usecs;
	c->use_adaptive_rx_coalesce = adapter->params.sge.coalesce_enable;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct adapter *) malloc(_len_dev__i0__ml_priv0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
            dev[_i0].ml_priv->params.sge.coalesce_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ml_priv->params.sge.sample_interval_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ml_priv->params.sge.rx_coalesce_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 1;
          struct ethtool_coalesce * c = (struct ethtool_coalesce *) malloc(_len_c0*sizeof(struct ethtool_coalesce));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].use_adaptive_rx_coalesce = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rate_sample_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rx_coalesce_usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_coalesce(dev,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
