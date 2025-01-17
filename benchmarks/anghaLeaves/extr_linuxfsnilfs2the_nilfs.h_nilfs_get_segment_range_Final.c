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
struct the_nilfs {int ns_blocks_per_segment; int ns_first_data_block; } ;
typedef  int sector_t ;
typedef  int __u64 ;

/* Variables and functions */

__attribute__((used)) static inline void
nilfs_get_segment_range(struct the_nilfs *nilfs, __u64 segnum,
			sector_t *seg_start, sector_t *seg_end)
{
	*seg_start = (sector_t)nilfs->ns_blocks_per_segment * segnum;
	*seg_end = *seg_start + nilfs->ns_blocks_per_segment - 1;
	if (segnum == 0)
		*seg_start = nilfs->ns_first_data_block;
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
          int segnum = 100;
          int _len_nilfs0 = 1;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
            nilfs[_i0].ns_blocks_per_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        nilfs[_i0].ns_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seg_start0 = 1;
          int * seg_start = (int *) malloc(_len_seg_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seg_start0; _i0++) {
            seg_start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seg_end0 = 1;
          int * seg_end = (int *) malloc(_len_seg_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seg_end0; _i0++) {
            seg_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nilfs_get_segment_range(nilfs,segnum,seg_start,seg_end);
          free(nilfs);
          free(seg_start);
          free(seg_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
