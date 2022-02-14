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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct setup_revision_opt {int dummy; } ;
struct TYPE_5__ {int follow_renames; scalar_t__ default_follow_renames; } ;
struct TYPE_6__ {scalar_t__ output_format; TYPE_2__ flags; } ;
struct TYPE_4__ {int nr; } ;
struct rev_info {scalar_t__ ignore_merges; scalar_t__ combine_merges; TYPE_3__ diffopt; TYPE_1__ prune_data; } ;

/* Variables and functions */
 scalar_t__ DIFF_FORMAT_PATCH ; 

__attribute__((used)) static void log_setup_revisions_tweak(struct rev_info *rev,
				      struct setup_revision_opt *opt)
{
	if (rev->diffopt.flags.default_follow_renames &&
	    rev->prune_data.nr == 1)
		rev->diffopt.flags.follow_renames = 1;

	/* Turn --cc/-c into -p --cc/-c when -p was not given */
	if (!rev->diffopt.output_format && rev->combine_merges)
		rev->diffopt.output_format = DIFF_FORMAT_PATCH;

	/* Turn -m on when --cc/-c was given */
	if (rev->combine_merges)
		rev->ignore_merges = 0;
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
          int _len_rev0 = 1;
          struct rev_info * rev = (struct rev_info *) malloc(_len_rev0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_rev0; _i0++) {
            rev->ignore_merges = ((-2 * (next_i()%2)) + 1) * next_i();
        rev->combine_merges = ((-2 * (next_i()%2)) + 1) * next_i();
        rev->diffopt.output_format = ((-2 * (next_i()%2)) + 1) * next_i();
        rev->diffopt.flags.follow_renames = ((-2 * (next_i()%2)) + 1) * next_i();
        rev->diffopt.flags.default_follow_renames = ((-2 * (next_i()%2)) + 1) * next_i();
        rev->prune_data.nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt0 = 1;
          struct setup_revision_opt * opt = (struct setup_revision_opt *) malloc(_len_opt0*sizeof(struct setup_revision_opt));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          log_setup_revisions_tweak(rev,opt);
          free(rev);
          free(opt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
