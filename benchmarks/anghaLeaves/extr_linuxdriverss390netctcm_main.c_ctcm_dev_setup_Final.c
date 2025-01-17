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
struct net_device {int tx_queue_len; int flags; int min_mtu; int max_mtu; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  ARPHRD_SLIP ; 
 int IFF_NOARP ; 
 int IFF_POINTOPOINT ; 

__attribute__((used)) static void ctcm_dev_setup(struct net_device *dev)
{
	dev->type = ARPHRD_SLIP;
	dev->tx_queue_len = 100;
	dev->flags = IFF_POINTOPOINT | IFF_NOARP;
	dev->min_mtu = 576;
	dev->max_mtu = 65527;
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
            dev[_i0].tx_queue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].min_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].max_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ctcm_dev_setup(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
