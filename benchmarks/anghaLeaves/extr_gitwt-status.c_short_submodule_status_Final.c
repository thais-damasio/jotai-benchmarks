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
struct wt_status_change_data {int dirty_submodule; char worktree_status; scalar_t__ new_submodule_commits; } ;

/* Variables and functions */
 int DIRTY_SUBMODULE_MODIFIED ; 
 int DIRTY_SUBMODULE_UNTRACKED ; 

__attribute__((used)) static char short_submodule_status(struct wt_status_change_data *d)
{
	if (d->new_submodule_commits)
		return 'M';
	if (d->dirty_submodule & DIRTY_SUBMODULE_MODIFIED)
		return 'm';
	if (d->dirty_submodule & DIRTY_SUBMODULE_UNTRACKED)
		return '?';
	return d->worktree_status;
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
          int _len_d0 = 1;
          struct wt_status_change_data * d = (struct wt_status_change_data *) malloc(_len_d0*sizeof(struct wt_status_change_data));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dirty_submodule = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].worktree_status = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].new_submodule_commits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = short_submodule_status(d);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_d0 = 65025;
          struct wt_status_change_data * d = (struct wt_status_change_data *) malloc(_len_d0*sizeof(struct wt_status_change_data));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dirty_submodule = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].worktree_status = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].new_submodule_commits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = short_submodule_status(d);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_d0 = 100;
          struct wt_status_change_data * d = (struct wt_status_change_data *) malloc(_len_d0*sizeof(struct wt_status_change_data));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dirty_submodule = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].worktree_status = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].new_submodule_commits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = short_submodule_status(d);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}