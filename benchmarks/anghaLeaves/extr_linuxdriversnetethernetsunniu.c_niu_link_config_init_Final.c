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
struct niu_link_config {int advertising; int autoneg; int /*<<< orphan*/  loopback_mode; int /*<<< orphan*/  active_duplex; int /*<<< orphan*/  duplex; int /*<<< orphan*/  active_speed; int /*<<< orphan*/  speed; } ;
struct niu {struct niu_link_config link_config; } ;

/* Variables and functions */
 int ADVERTISED_10000baseT_Full ; 
 int ADVERTISED_1000baseT_Full ; 
 int ADVERTISED_1000baseT_Half ; 
 int ADVERTISED_100baseT_Full ; 
 int ADVERTISED_100baseT_Half ; 
 int ADVERTISED_10baseT_Full ; 
 int ADVERTISED_10baseT_Half ; 
 int ADVERTISED_Autoneg ; 
 int /*<<< orphan*/  DUPLEX_FULL ; 
 int /*<<< orphan*/  DUPLEX_INVALID ; 
 int /*<<< orphan*/  LOOPBACK_DISABLED ; 
 int /*<<< orphan*/  SPEED_INVALID ; 

__attribute__((used)) static void niu_link_config_init(struct niu *np)
{
	struct niu_link_config *lp = &np->link_config;

	lp->advertising = (ADVERTISED_10baseT_Half |
			   ADVERTISED_10baseT_Full |
			   ADVERTISED_100baseT_Half |
			   ADVERTISED_100baseT_Full |
			   ADVERTISED_1000baseT_Half |
			   ADVERTISED_1000baseT_Full |
			   ADVERTISED_10000baseT_Full |
			   ADVERTISED_Autoneg);
	lp->speed = lp->active_speed = SPEED_INVALID;
	lp->duplex = DUPLEX_FULL;
	lp->active_duplex = DUPLEX_INVALID;
	lp->autoneg = 1;
#if 0
	lp->loopback_mode = LOOPBACK_MAC;
	lp->active_speed = SPEED_10000;
	lp->active_duplex = DUPLEX_FULL;
#else
	lp->loopback_mode = LOOPBACK_DISABLED;
#endif
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
          int _len_np0 = 1;
          struct niu * np = (struct niu *) malloc(_len_np0*sizeof(struct niu));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].link_config.advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.loopback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_link_config_init(np);
          free(np);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_np0 = 65025;
          struct niu * np = (struct niu *) malloc(_len_np0*sizeof(struct niu));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].link_config.advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.loopback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_link_config_init(np);
          free(np);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_np0 = 100;
          struct niu * np = (struct niu *) malloc(_len_np0*sizeof(struct niu));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].link_config.advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.loopback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.active_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].link_config.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_link_config_init(np);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
