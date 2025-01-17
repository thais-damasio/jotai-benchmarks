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
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int n; } ;
typedef  TYPE_1__ network ;

/* Variables and functions */

void reset_network_state(network *net, int b)
{
    int i;
    for (i = 0; i < net->n; ++i) {
        #ifdef GPU
        layer l = net->layers[i];
        if(l.state_gpu){
            fill_gpu(l.outputs, 0, l.state_gpu + l.outputs*b, 1);
        }
        if(l.h_gpu){
            fill_gpu(l.outputs, 0, l.h_gpu + l.outputs*b, 1);
        }
        #endif
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
          int b = 100;
          int _len_net0 = 1;
          struct TYPE_3__ * net = (struct TYPE_3__ *) malloc(_len_net0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_network_state(net,b);
          free(net);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int b = 10;
          int _len_net0 = 100;
          struct TYPE_3__ * net = (struct TYPE_3__ *) malloc(_len_net0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_network_state(net,b);
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
