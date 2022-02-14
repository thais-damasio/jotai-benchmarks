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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ type; } ;
struct btrfs_delayed_data_ref {scalar_t__ root; scalar_t__ objectid; scalar_t__ offset; scalar_t__ parent; TYPE_1__ node; } ;

/* Variables and functions */
 scalar_t__ BTRFS_EXTENT_DATA_REF_KEY ; 

__attribute__((used)) static int comp_data_refs(struct btrfs_delayed_data_ref *ref1,
			  struct btrfs_delayed_data_ref *ref2)
{
	if (ref1->node.type == BTRFS_EXTENT_DATA_REF_KEY) {
		if (ref1->root < ref2->root)
			return -1;
		if (ref1->root > ref2->root)
			return 1;
		if (ref1->objectid < ref2->objectid)
			return -1;
		if (ref1->objectid > ref2->objectid)
			return 1;
		if (ref1->offset < ref2->offset)
			return -1;
		if (ref1->offset > ref2->offset)
			return 1;
	} else {
		if (ref1->parent < ref2->parent)
			return -1;
		if (ref1->parent > ref2->parent)
			return 1;
	}
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

    // big-arr
    case 0:
    {
          int _len_ref10 = 1;
          struct btrfs_delayed_data_ref * ref1 = (struct btrfs_delayed_data_ref *) malloc(_len_ref10*sizeof(struct btrfs_delayed_data_ref));
          for(int _i0 = 0; _i0 < _len_ref10; _i0++) {
            ref1->root = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1->objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1->node.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref20 = 1;
          struct btrfs_delayed_data_ref * ref2 = (struct btrfs_delayed_data_ref *) malloc(_len_ref20*sizeof(struct btrfs_delayed_data_ref));
          for(int _i0 = 0; _i0 < _len_ref20; _i0++) {
            ref2->root = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2->objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2->node.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = comp_data_refs(ref1,ref2);
          printf("%d\n", benchRet); 
          free(ref1);
          free(ref2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}