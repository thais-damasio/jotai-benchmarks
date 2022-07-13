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
struct ocfs2_info_freefrag_stats {unsigned int ffs_max; unsigned int ffs_min; unsigned int ffs_avg; int /*<<< orphan*/  ffs_free_chunks_real; } ;

/* Variables and functions */

__attribute__((used)) static void o2ffg_update_stats(struct ocfs2_info_freefrag_stats *stats,
			       unsigned int chunksize)
{
	if (chunksize > stats->ffs_max)
		stats->ffs_max = chunksize;

	if (chunksize < stats->ffs_min)
		stats->ffs_min = chunksize;

	stats->ffs_avg += chunksize;
	stats->ffs_free_chunks_real++;
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
          unsigned int chunksize = 100;
          int _len_stats0 = 1;
          struct ocfs2_info_freefrag_stats * stats = (struct ocfs2_info_freefrag_stats *) malloc(_len_stats0*sizeof(struct ocfs2_info_freefrag_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ffs_max = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_free_chunks_real = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          o2ffg_update_stats(stats,chunksize);
          free(stats);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int chunksize = 255;
          int _len_stats0 = 65025;
          struct ocfs2_info_freefrag_stats * stats = (struct ocfs2_info_freefrag_stats *) malloc(_len_stats0*sizeof(struct ocfs2_info_freefrag_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ffs_max = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_free_chunks_real = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          o2ffg_update_stats(stats,chunksize);
          free(stats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int chunksize = 10;
          int _len_stats0 = 100;
          struct ocfs2_info_freefrag_stats * stats = (struct ocfs2_info_freefrag_stats *) malloc(_len_stats0*sizeof(struct ocfs2_info_freefrag_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ffs_max = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ffs_free_chunks_real = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          o2ffg_update_stats(stats,chunksize);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
