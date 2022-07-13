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
struct mddev {scalar_t__ delta_disks; int /*<<< orphan*/  raid_disks; int /*<<< orphan*/  new_chunk_sectors; int /*<<< orphan*/  chunk_sectors; int /*<<< orphan*/  new_layout; int /*<<< orphan*/  layout; int /*<<< orphan*/  new_level; int /*<<< orphan*/  level; } ;
struct raid_set {int /*<<< orphan*/  raid_disks; struct mddev md; } ;

/* Variables and functions */

__attribute__((used)) static void rs_set_new(struct raid_set *rs)
{
	struct mddev *mddev = &rs->md;

	mddev->level = mddev->new_level;
	mddev->layout = mddev->new_layout;
	mddev->chunk_sectors = mddev->new_chunk_sectors;
	mddev->raid_disks = rs->raid_disks;
	mddev->delta_disks = 0;
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
          int _len_rs0 = 1;
          struct raid_set * rs = (struct raid_set *) malloc(_len_rs0*sizeof(struct raid_set));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.delta_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_level = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_set_new(rs);
          free(rs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rs0 = 65025;
          struct raid_set * rs = (struct raid_set *) malloc(_len_rs0*sizeof(struct raid_set));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.delta_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_level = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_set_new(rs);
          free(rs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rs0 = 100;
          struct raid_set * rs = (struct raid_set *) malloc(_len_rs0*sizeof(struct raid_set));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.delta_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_level = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_set_new(rs);
          free(rs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
