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
typedef  int u32 ;
struct ef4_nic {int link_advertising; int wanted_fc; } ;

/* Variables and functions */
 int ADVERTISED_Asym_Pause ; 
 int ADVERTISED_Pause ; 
 int EF4_FC_RX ; 
 int EF4_FC_TX ; 

void ef4_link_set_advertising(struct ef4_nic *efx, u32 advertising)
{
	efx->link_advertising = advertising;
	if (advertising) {
		if (advertising & ADVERTISED_Pause)
			efx->wanted_fc |= (EF4_FC_TX | EF4_FC_RX);
		else
			efx->wanted_fc &= ~(EF4_FC_TX | EF4_FC_RX);
		if (advertising & ADVERTISED_Asym_Pause)
			efx->wanted_fc ^= EF4_FC_TX;
	}
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
          int advertising = 100;
          int _len_efx0 = 1;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].link_advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].wanted_fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_link_set_advertising(efx,advertising);
          free(efx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int advertising = 255;
          int _len_efx0 = 65025;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].link_advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].wanted_fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_link_set_advertising(efx,advertising);
          free(efx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int advertising = 10;
          int _len_efx0 = 100;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].link_advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].wanted_fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_link_set_advertising(efx,advertising);
          free(efx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}