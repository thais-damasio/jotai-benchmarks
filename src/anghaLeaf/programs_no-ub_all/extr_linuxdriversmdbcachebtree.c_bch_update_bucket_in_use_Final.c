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
struct gc_stat {int in_use; } ;
struct cache_set {int nbuckets; int avail_nbuckets; } ;

/* Variables and functions */

void bch_update_bucket_in_use(struct cache_set *c, struct gc_stat *stats)
{
	stats->in_use = (c->nbuckets - c->avail_nbuckets) * 100 / c->nbuckets;
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
          int _len_c0 = 1;
          struct cache_set * c = (struct cache_set *) malloc(_len_c0*sizeof(struct cache_set));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c->nbuckets = ((-2 * (next_i()%2)) + 1) * next_i();
        c->avail_nbuckets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 1;
          struct gc_stat * stats = (struct gc_stat *) malloc(_len_stats0*sizeof(struct gc_stat));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats->in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bch_update_bucket_in_use(c,stats);
          free(c);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}