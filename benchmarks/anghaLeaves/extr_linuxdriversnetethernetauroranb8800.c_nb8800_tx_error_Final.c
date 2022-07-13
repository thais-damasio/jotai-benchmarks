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
typedef  int u32 ;
struct TYPE_2__ {int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  tx_fifo_errors; int /*<<< orphan*/  tx_dropped; int /*<<< orphan*/  collisions; } ;
struct net_device {TYPE_1__ stats; } ;

/* Variables and functions */
 int TX_FIFO_UNDERRUN ; 
 int TX_LATE_COLLISION ; 
 int TX_PACKET_DROPPED ; 

__attribute__((used)) static void nb8800_tx_error(struct net_device *dev, u32 report)
{
	if (report & TX_LATE_COLLISION)
		dev->stats.collisions++;

	if (report & TX_PACKET_DROPPED)
		dev->stats.tx_dropped++;

	if (report & TX_FIFO_UNDERRUN)
		dev->stats.tx_fifo_errors++;

	dev->stats.tx_errors++;
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
          int report = 100;
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nb8800_tx_error(dev,report);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int report = 255;
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nb8800_tx_error(dev,report);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int report = 10;
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nb8800_tx_error(dev,report);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
