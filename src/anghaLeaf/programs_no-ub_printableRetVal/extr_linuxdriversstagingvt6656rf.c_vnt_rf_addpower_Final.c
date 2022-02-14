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
struct vnt_private {int current_rssi; scalar_t__ rf_type; } ;
typedef  int s32 ;

/* Variables and functions */
 scalar_t__ RF_VT3226D0 ; 

__attribute__((used)) static u8 vnt_rf_addpower(struct vnt_private *priv)
{
	s32 rssi = -priv->current_rssi;

	if (!rssi)
		return 7;

	if (priv->rf_type == RF_VT3226D0) {
		if (rssi < -70)
			return 9;
		else if (rssi < -65)
			return 7;
		else if (rssi < -60)
			return 5;
	} else {
		if (rssi < -80)
			return 9;
		else if (rssi < -75)
			return 7;
		else if (rssi < -70)
			return 5;
	}

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

    // big-arr
    case 0:
    {
          int _len_priv0 = 1;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv->current_rssi = ((-2 * (next_i()%2)) + 1) * next_i();
        priv->rf_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vnt_rf_addpower(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}