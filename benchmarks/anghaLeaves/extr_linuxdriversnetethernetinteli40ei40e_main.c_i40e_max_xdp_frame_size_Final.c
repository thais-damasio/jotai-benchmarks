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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct i40e_vsi {TYPE_1__* back; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int I40E_FLAG_LEGACY_RX ; 
 int I40E_RXBUFFER_2048 ; 
 int I40E_RXBUFFER_3072 ; 
 int PAGE_SIZE ; 

__attribute__((used)) static int i40e_max_xdp_frame_size(struct i40e_vsi *vsi)
{
	if (PAGE_SIZE >= 8192 || (vsi->back->flags & I40E_FLAG_LEGACY_RX))
		return I40E_RXBUFFER_2048;
	else
		return I40E_RXBUFFER_3072;
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
          int _len_vsi0 = 1;
          struct i40e_vsi * vsi = (struct i40e_vsi *) malloc(_len_vsi0*sizeof(struct i40e_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
              int _len_vsi__i0__back0 = 1;
          vsi[_i0].back = (struct TYPE_2__ *) malloc(_len_vsi__i0__back0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vsi__i0__back0; _j0++) {
            vsi[_i0].back->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = i40e_max_xdp_frame_size(vsi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vsi0; _aux++) {
          free(vsi[_aux].back);
          }
          free(vsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
