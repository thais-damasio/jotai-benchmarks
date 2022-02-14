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
struct ib_flow_action_attrs_esp_replays {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int flow_action_esp_replay_none(struct ib_flow_action_attrs_esp_replays *replay,
				       bool is_modify)
{
	/* This is used in order to modify an esp flow action with an enabled
	 * replay protection to a disabled one. This is only supported via
	 * modify, as in create verb we can simply drop the REPLAY attribute and
	 * achieve the same thing.
	 */
	return is_modify ? 0 : -EINVAL;
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
          int is_modify = 255;
          int _len_replay0 = 1;
          struct ib_flow_action_attrs_esp_replays * replay = (struct ib_flow_action_attrs_esp_replays *) malloc(_len_replay0*sizeof(struct ib_flow_action_attrs_esp_replays));
          for(int _i0 = 0; _i0 < _len_replay0; _i0++) {
            replay->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flow_action_esp_replay_none(replay,is_modify);
          printf("%d\n", benchRet); 
          free(replay);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
