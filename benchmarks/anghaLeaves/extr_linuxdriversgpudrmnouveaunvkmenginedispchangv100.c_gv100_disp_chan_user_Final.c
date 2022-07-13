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
typedef  int u64 ;
struct TYPE_2__ {int user; } ;
struct nv50_disp_chan {TYPE_1__ chid; } ;

/* Variables and functions */

u64
gv100_disp_chan_user(struct nv50_disp_chan *chan, u64 *psize)
{
	*psize = 0x1000;
	return 0x690000 + ((chan->chid.user - 1) * 0x1000);
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
          int _len_chan0 = 1;
          struct nv50_disp_chan * chan = (struct nv50_disp_chan *) malloc(_len_chan0*sizeof(struct nv50_disp_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].chid.user = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psize0 = 1;
          int * psize = (int *) malloc(_len_psize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psize0; _i0++) {
            psize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gv100_disp_chan_user(chan,psize);
          printf("%d\n", benchRet); 
          free(chan);
          free(psize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chan0 = 65025;
          struct nv50_disp_chan * chan = (struct nv50_disp_chan *) malloc(_len_chan0*sizeof(struct nv50_disp_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].chid.user = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psize0 = 65025;
          int * psize = (int *) malloc(_len_psize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psize0; _i0++) {
            psize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gv100_disp_chan_user(chan,psize);
          printf("%d\n", benchRet); 
          free(chan);
          free(psize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chan0 = 100;
          struct nv50_disp_chan * chan = (struct nv50_disp_chan *) malloc(_len_chan0*sizeof(struct nv50_disp_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].chid.user = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psize0 = 100;
          int * psize = (int *) malloc(_len_psize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psize0; _i0++) {
            psize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gv100_disp_chan_user(chan,psize);
          printf("%d\n", benchRet); 
          free(chan);
          free(psize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
