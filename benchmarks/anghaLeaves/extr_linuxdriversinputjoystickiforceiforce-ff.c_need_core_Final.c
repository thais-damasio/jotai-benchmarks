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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ length; scalar_t__ delay; } ;
struct TYPE_4__ {scalar_t__ button; scalar_t__ interval; } ;
struct ff_effect {scalar_t__ direction; TYPE_1__ replay; TYPE_2__ trigger; } ;

/* Variables and functions */

__attribute__((used)) static int need_core(struct ff_effect *old, struct ff_effect *new)
{
	if (old->direction != new->direction
		|| old->trigger.button != new->trigger.button
		|| old->trigger.interval != new->trigger.interval
		|| old->replay.length != new->replay.length
		|| old->replay.delay != new->replay.delay)
		return 1;

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

    // int-bounds
    case 0:
    {
          int _len_old0 = 1;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 1;
          struct ff_effect * new = (struct ff_effect *) malloc(_len_new0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = need_core(old,new);
          printf("%d\n", benchRet); 
          free(old);
          free(new);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_old0 = 65025;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 65025;
          struct ff_effect * new = (struct ff_effect *) malloc(_len_new0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = need_core(old,new);
          printf("%d\n", benchRet); 
          free(old);
          free(new);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_old0 = 100;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 100;
          struct ff_effect * new = (struct ff_effect *) malloc(_len_new0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.length = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].replay.delay = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.button = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].trigger.interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = need_core(old,new);
          printf("%d\n", benchRet); 
          free(old);
          free(new);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
