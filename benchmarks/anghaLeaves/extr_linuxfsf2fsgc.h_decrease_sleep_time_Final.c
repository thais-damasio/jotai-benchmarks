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
struct f2fs_gc_kthread {unsigned int min_sleep_time; unsigned int no_gc_sleep_time; unsigned int max_sleep_time; } ;

/* Variables and functions */

__attribute__((used)) static inline void decrease_sleep_time(struct f2fs_gc_kthread *gc_th,
							unsigned int *wait)
{
	unsigned int min_time = gc_th->min_sleep_time;

	if (*wait == gc_th->no_gc_sleep_time)
		*wait = gc_th->max_sleep_time;

	if ((long long)*wait - (long long)min_time < (long long)min_time)
		*wait = min_time;
	else
		*wait -= min_time;
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
          int _len_gc_th0 = 1;
          struct f2fs_gc_kthread * gc_th = (struct f2fs_gc_kthread *) malloc(_len_gc_th0*sizeof(struct f2fs_gc_kthread));
          for(int _i0 = 0; _i0 < _len_gc_th0; _i0++) {
            gc_th[_i0].min_sleep_time = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_th[_i0].no_gc_sleep_time = ((-2 * (next_i()%2)) + 1) * next_i();
        gc_th[_i0].max_sleep_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wait0 = 1;
          unsigned int * wait = (unsigned int *) malloc(_len_wait0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_wait0; _i0++) {
            wait[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decrease_sleep_time(gc_th,wait);
          free(gc_th);
          free(wait);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
