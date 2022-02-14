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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ incr; scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_1__ cpu; } ;
struct k_itimer {long long it_overrun; TYPE_2__ it; } ;

/* Variables and functions */

__attribute__((used)) static void bump_cpu_timer(struct k_itimer *timer, u64 now)
{
	int i;
	u64 delta, incr;

	if (timer->it.cpu.incr == 0)
		return;

	if (now < timer->it.cpu.expires)
		return;

	incr = timer->it.cpu.incr;
	delta = now + incr - timer->it.cpu.expires;

	/* Don't use (incr*2 < delta), incr*2 might overflow. */
	for (i = 0; incr < delta - incr; i++)
		incr = incr << 1;

	for (; i >= 0; incr >>= 1, i--) {
		if (delta < incr)
			continue;

		timer->it.cpu.expires += incr;
		timer->it_overrun += 1LL << i;
		delta -= incr;
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

    // big-arr
    case 0:
    {
          long now = 255;
          int _len_timer0 = 1;
          struct k_itimer * timer = (struct k_itimer *) malloc(_len_timer0*sizeof(struct k_itimer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
            timer->it_overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        timer->it.cpu.incr = ((-2 * (next_i()%2)) + 1) * next_i();
        timer->it.cpu.expires = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bump_cpu_timer(timer,now);
          free(timer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}