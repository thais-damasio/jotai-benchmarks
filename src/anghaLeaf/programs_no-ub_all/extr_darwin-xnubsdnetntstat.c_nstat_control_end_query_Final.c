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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int16_t ;
typedef  int /*<<< orphan*/  nstat_src ;
struct TYPE_3__ {scalar_t__ ncs_context; } ;
typedef  TYPE_1__ nstat_control_state ;
typedef  int /*<<< orphan*/  boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  NSTAT_MSG_HDR_FLAG_CONTINUATION ; 

__attribute__((used)) static u_int16_t
nstat_control_end_query(
    nstat_control_state *state,
    nstat_src *last_src,
    boolean_t partial)
{
	u_int16_t flags = 0;

	if (last_src == NULL || !partial)
	{
		/*
		 * We iterated through the entire srcs list or exited early
		 * from the loop when a partial update was not requested (an
		 * error occurred), so clear context to indicate internally
		 * that the query is finished.
		 */
		state->ncs_context = 0;
	}
	else
	{
		/*
		 * Indicate to userlevel to make another partial request as
		 * there are still sources left to be reported.
		 */
		flags |= NSTAT_MSG_HDR_FLAG_CONTINUATION;
	}

	return flags;
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
          int partial = 255;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state->ncs_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last_src0 = 65025;
          int * last_src = (int *) malloc(_len_last_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_last_src0; _i0++) {
            last_src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nstat_control_end_query(state,last_src,partial);
          printf("%d\n", benchRet); 
          free(state);
          free(last_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}