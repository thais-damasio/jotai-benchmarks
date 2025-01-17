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
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_ogm_packet {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
batadv_nc_update_nc_node(struct batadv_priv *bat_priv,
			 struct batadv_orig_node *orig_node,
			 struct batadv_orig_node *orig_neigh_node,
			 struct batadv_ogm_packet *ogm_packet,
			 int is_single_hop_neigh)
{
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
          int is_single_hop_neigh = 100;
          int _len_bat_priv0 = 1;
          struct batadv_priv * bat_priv = (struct batadv_priv *) malloc(_len_bat_priv0*sizeof(struct batadv_priv));
          for(int _i0 = 0; _i0 < _len_bat_priv0; _i0++) {
            bat_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_orig_node0 = 1;
          struct batadv_orig_node * orig_node = (struct batadv_orig_node *) malloc(_len_orig_node0*sizeof(struct batadv_orig_node));
          for(int _i0 = 0; _i0 < _len_orig_node0; _i0++) {
            orig_node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_orig_neigh_node0 = 1;
          struct batadv_orig_node * orig_neigh_node = (struct batadv_orig_node *) malloc(_len_orig_neigh_node0*sizeof(struct batadv_orig_node));
          for(int _i0 = 0; _i0 < _len_orig_neigh_node0; _i0++) {
            orig_neigh_node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ogm_packet0 = 1;
          struct batadv_ogm_packet * ogm_packet = (struct batadv_ogm_packet *) malloc(_len_ogm_packet0*sizeof(struct batadv_ogm_packet));
          for(int _i0 = 0; _i0 < _len_ogm_packet0; _i0++) {
            ogm_packet[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          batadv_nc_update_nc_node(bat_priv,orig_node,orig_neigh_node,ogm_packet,is_single_hop_neigh);
          free(bat_priv);
          free(orig_node);
          free(orig_neigh_node);
          free(ogm_packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
