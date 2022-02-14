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
struct tipc_name_seq {int /*<<< orphan*/  upper; int /*<<< orphan*/  lower; int /*<<< orphan*/  type; } ;
struct tipc_group {int scope; int /*<<< orphan*/  instance; int /*<<< orphan*/  type; } ;

/* Variables and functions */

void tipc_group_self(struct tipc_group *grp, struct tipc_name_seq *seq,
		     int *scope)
{
	seq->type = grp->type;
	seq->lower = grp->instance;
	seq->upper = grp->instance;
	*scope = grp->scope;
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
          int _len_grp0 = 1;
          struct tipc_group * grp = (struct tipc_group *) malloc(_len_grp0*sizeof(struct tipc_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp->scope = ((-2 * (next_i()%2)) + 1) * next_i();
        grp->instance = ((-2 * (next_i()%2)) + 1) * next_i();
        grp->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seq0 = 1;
          struct tipc_name_seq * seq = (struct tipc_name_seq *) malloc(_len_seq0*sizeof(struct tipc_name_seq));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
            seq->upper = ((-2 * (next_i()%2)) + 1) * next_i();
        seq->lower = ((-2 * (next_i()%2)) + 1) * next_i();
        seq->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scope0 = 65025;
          int * scope = (int *) malloc(_len_scope0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scope0; _i0++) {
            scope[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tipc_group_self(grp,seq,scope);
          free(grp);
          free(seq);
          free(scope);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}