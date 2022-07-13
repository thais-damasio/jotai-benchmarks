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
struct packet_data {int state; } ;
typedef  enum packet_data_state { ____Placeholder_packet_data_state } packet_data_state ;

/* Variables and functions */

__attribute__((used)) static inline void pkt_set_state(struct packet_data *pkt, enum packet_data_state state)
{
#if PACKET_DEBUG > 1
	static const char *state_name[] = {
		"IDLE", "WAITING", "READ_WAIT", "WRITE_WAIT", "RECOVERY", "FINISHED"
	};
	enum packet_data_state old_state = pkt->state;
	pkt_dbg(2, pd, "pkt %2d : s=%6llx %s -> %s\n",
		pkt->id, (unsigned long long)pkt->sector,
		state_name[old_state], state_name[state]);
#endif
	pkt->state = state;
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
          enum packet_data_state state = 0;
          int _len_pkt0 = 1;
          struct packet_data * pkt = (struct packet_data *) malloc(_len_pkt0*sizeof(struct packet_data));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pkt_set_state(pkt,state);
          free(pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum packet_data_state state = 0;
          int _len_pkt0 = 65025;
          struct packet_data * pkt = (struct packet_data *) malloc(_len_pkt0*sizeof(struct packet_data));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pkt_set_state(pkt,state);
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum packet_data_state state = 0;
          int _len_pkt0 = 100;
          struct packet_data * pkt = (struct packet_data *) malloc(_len_pkt0*sizeof(struct packet_data));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pkt_set_state(pkt,state);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
