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
struct ocfs2_super {TYPE_1__* replay_map; } ;
struct TYPE_2__ {int rm_state; } ;

/* Variables and functions */
 int REPLAY_DONE ; 

__attribute__((used)) static void ocfs2_replay_map_set_state(struct ocfs2_super *osb, int state)
{
	if (!osb->replay_map)
		return;

	/* If we've already queued the replay, we don't have any more to do */
	if (osb->replay_map->rm_state == REPLAY_DONE)
		return;

	osb->replay_map->rm_state = state;
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
          int state = 100;
          int _len_osb0 = 1;
          struct ocfs2_super * osb = (struct ocfs2_super *) malloc(_len_osb0*sizeof(struct ocfs2_super));
          for(int _i0 = 0; _i0 < _len_osb0; _i0++) {
              int _len_osb__i0__replay_map0 = 1;
          osb[_i0].replay_map = (struct TYPE_2__ *) malloc(_len_osb__i0__replay_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_osb__i0__replay_map0; _j0++) {
            osb[_i0].replay_map->rm_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ocfs2_replay_map_set_state(osb,state);
          for(int _aux = 0; _aux < _len_osb0; _aux++) {
          free(osb[_aux].replay_map);
          }
          free(osb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          int _len_osb0 = 65025;
          struct ocfs2_super * osb = (struct ocfs2_super *) malloc(_len_osb0*sizeof(struct ocfs2_super));
          for(int _i0 = 0; _i0 < _len_osb0; _i0++) {
              int _len_osb__i0__replay_map0 = 1;
          osb[_i0].replay_map = (struct TYPE_2__ *) malloc(_len_osb__i0__replay_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_osb__i0__replay_map0; _j0++) {
            osb[_i0].replay_map->rm_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ocfs2_replay_map_set_state(osb,state);
          for(int _aux = 0; _aux < _len_osb0; _aux++) {
          free(osb[_aux].replay_map);
          }
          free(osb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          int _len_osb0 = 100;
          struct ocfs2_super * osb = (struct ocfs2_super *) malloc(_len_osb0*sizeof(struct ocfs2_super));
          for(int _i0 = 0; _i0 < _len_osb0; _i0++) {
              int _len_osb__i0__replay_map0 = 1;
          osb[_i0].replay_map = (struct TYPE_2__ *) malloc(_len_osb__i0__replay_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_osb__i0__replay_map0; _j0++) {
            osb[_i0].replay_map->rm_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ocfs2_replay_map_set_state(osb,state);
          for(int _aux = 0; _aux < _len_osb0; _aux++) {
          free(osb[_aux].replay_map);
          }
          free(osb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
