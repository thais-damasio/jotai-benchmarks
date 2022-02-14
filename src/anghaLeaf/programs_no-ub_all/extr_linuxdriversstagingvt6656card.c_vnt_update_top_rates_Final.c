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
       0            big-arr\n\
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
typedef  int u8 ;
typedef  int u16 ;
struct vnt_private {int basic_rates; int top_ofdm_basic_rate; int top_cck_basic_rate; } ;

/* Variables and functions */
 int RATE_11M ; 
 int RATE_1M ; 
 int RATE_24M ; 
 int RATE_54M ; 
 int RATE_6M ; 

void vnt_update_top_rates(struct vnt_private *priv)
{
	u8 top_ofdm = RATE_24M, top_cck = RATE_1M;
	u8 i;

	/*Determines the highest basic rate.*/
	for (i = RATE_54M; i >= RATE_6M; i--) {
		if (priv->basic_rates & (u16)(1 << i)) {
			top_ofdm = i;
			break;
		}
	}

	priv->top_ofdm_basic_rate = top_ofdm;

	for (i = RATE_11M;; i--) {
		if (priv->basic_rates & (u16)(1 << i)) {
			top_cck = i;
			break;
		}
		if (i == RATE_1M)
			break;
	}

	priv->top_cck_basic_rate = top_cck;
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

    // big-arr
    case 0:
    {
          int _len_priv0 = 1;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv->basic_rates = ((-2 * (next_i()%2)) + 1) * next_i();
        priv->top_ofdm_basic_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        priv->top_cck_basic_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vnt_update_top_rates(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
