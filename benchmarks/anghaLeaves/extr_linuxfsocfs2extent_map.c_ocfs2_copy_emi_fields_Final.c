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
struct ocfs2_extent_map_item {int /*<<< orphan*/  ei_flags; int /*<<< orphan*/  ei_clusters; int /*<<< orphan*/  ei_phys; int /*<<< orphan*/  ei_cpos; } ;

/* Variables and functions */

__attribute__((used)) static void ocfs2_copy_emi_fields(struct ocfs2_extent_map_item *dest,
				  struct ocfs2_extent_map_item *src)
{
	dest->ei_cpos = src->ei_cpos;
	dest->ei_phys = src->ei_phys;
	dest->ei_clusters = src->ei_clusters;
	dest->ei_flags = src->ei_flags;
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
          int _len_dest0 = 1;
          struct ocfs2_extent_map_item * dest = (struct ocfs2_extent_map_item *) malloc(_len_dest0*sizeof(struct ocfs2_extent_map_item));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].ei_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].ei_clusters = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].ei_phys = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].ei_cpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct ocfs2_extent_map_item * src = (struct ocfs2_extent_map_item *) malloc(_len_src0*sizeof(struct ocfs2_extent_map_item));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].ei_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ei_clusters = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ei_phys = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ei_cpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_copy_emi_fields(dest,src);
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
