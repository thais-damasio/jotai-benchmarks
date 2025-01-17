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
struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int detect; int vs_3v; scalar_t__ vs_Xv; } ;

/* Variables and functions */

__attribute__((used)) static void palmtc_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
					struct pcmcia_state *state)
{
	state->detect = 1; /* always inserted */
	state->vs_3v  = 1;
	state->vs_Xv  = 0;
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
          int _len_skt0 = 1;
          struct soc_pcmcia_socket * skt = (struct soc_pcmcia_socket *) malloc(_len_skt0*sizeof(struct soc_pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_skt0; _i0++) {
            skt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct pcmcia_state * state = (struct pcmcia_state *) malloc(_len_state0*sizeof(struct pcmcia_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].detect = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].vs_3v = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].vs_Xv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          palmtc_pcmcia_socket_state(skt,state);
          free(skt);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
