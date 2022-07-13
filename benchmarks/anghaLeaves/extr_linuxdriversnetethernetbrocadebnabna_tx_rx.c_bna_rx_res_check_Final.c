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
struct bna_rx_mod {scalar_t__ rx_free_count; scalar_t__ rxp_free_count; int rxq_free_count; } ;
struct bna_rx_config {scalar_t__ rxp_type; scalar_t__ num_paths; } ;

/* Variables and functions */
 scalar_t__ BNA_RXP_SINGLE ; 

__attribute__((used)) static int
bna_rx_res_check(struct bna_rx_mod *rx_mod, struct bna_rx_config *rx_cfg)
{
	if ((rx_mod->rx_free_count == 0) ||
		(rx_mod->rxp_free_count == 0) ||
		(rx_mod->rxq_free_count == 0))
		return 0;

	if (rx_cfg->rxp_type == BNA_RXP_SINGLE) {
		if ((rx_mod->rxp_free_count < rx_cfg->num_paths) ||
			(rx_mod->rxq_free_count < rx_cfg->num_paths))
				return 0;
	} else {
		if ((rx_mod->rxp_free_count < rx_cfg->num_paths) ||
			(rx_mod->rxq_free_count < (2 * rx_cfg->num_paths)))
			return 0;
	}

	return 1;
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
          int _len_rx_mod0 = 1;
          struct bna_rx_mod * rx_mod = (struct bna_rx_mod *) malloc(_len_rx_mod0*sizeof(struct bna_rx_mod));
          for(int _i0 = 0; _i0 < _len_rx_mod0; _i0++) {
            rx_mod[_i0].rx_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxp_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxq_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_cfg0 = 1;
          struct bna_rx_config * rx_cfg = (struct bna_rx_config *) malloc(_len_rx_cfg0*sizeof(struct bna_rx_config));
          for(int _i0 = 0; _i0 < _len_rx_cfg0; _i0++) {
            rx_cfg[_i0].rxp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_cfg[_i0].num_paths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bna_rx_res_check(rx_mod,rx_cfg);
          printf("%d\n", benchRet); 
          free(rx_mod);
          free(rx_cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rx_mod0 = 65025;
          struct bna_rx_mod * rx_mod = (struct bna_rx_mod *) malloc(_len_rx_mod0*sizeof(struct bna_rx_mod));
          for(int _i0 = 0; _i0 < _len_rx_mod0; _i0++) {
            rx_mod[_i0].rx_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxp_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxq_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_cfg0 = 65025;
          struct bna_rx_config * rx_cfg = (struct bna_rx_config *) malloc(_len_rx_cfg0*sizeof(struct bna_rx_config));
          for(int _i0 = 0; _i0 < _len_rx_cfg0; _i0++) {
            rx_cfg[_i0].rxp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_cfg[_i0].num_paths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bna_rx_res_check(rx_mod,rx_cfg);
          printf("%d\n", benchRet); 
          free(rx_mod);
          free(rx_cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rx_mod0 = 100;
          struct bna_rx_mod * rx_mod = (struct bna_rx_mod *) malloc(_len_rx_mod0*sizeof(struct bna_rx_mod));
          for(int _i0 = 0; _i0 < _len_rx_mod0; _i0++) {
            rx_mod[_i0].rx_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxp_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_mod[_i0].rxq_free_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_cfg0 = 100;
          struct bna_rx_config * rx_cfg = (struct bna_rx_config *) malloc(_len_rx_cfg0*sizeof(struct bna_rx_config));
          for(int _i0 = 0; _i0 < _len_rx_cfg0; _i0++) {
            rx_cfg[_i0].rxp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_cfg[_i0].num_paths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bna_rx_res_check(rx_mod,rx_cfg);
          printf("%d\n", benchRet); 
          free(rx_mod);
          free(rx_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
