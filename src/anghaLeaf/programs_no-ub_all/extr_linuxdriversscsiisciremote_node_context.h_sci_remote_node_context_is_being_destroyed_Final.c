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
struct TYPE_2__ {scalar_t__ current_state_id; } ;
struct sci_remote_node_context {scalar_t__ destination_state; TYPE_1__ sm; } ;

/* Variables and functions */
 scalar_t__ RNC_DEST_FINAL ; 
 scalar_t__ RNC_DEST_UNSPECIFIED ; 
 scalar_t__ SCI_RNC_INITIAL ; 

__attribute__((used)) static inline bool sci_remote_node_context_is_being_destroyed(
	struct sci_remote_node_context *sci_rnc)
{
	return (sci_rnc->destination_state == RNC_DEST_FINAL)
		|| ((sci_rnc->sm.current_state_id == SCI_RNC_INITIAL)
		    && (sci_rnc->destination_state == RNC_DEST_UNSPECIFIED));
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
          int _len_sci_rnc0 = 1;
          struct sci_remote_node_context * sci_rnc = (struct sci_remote_node_context *) malloc(_len_sci_rnc0*sizeof(struct sci_remote_node_context));
          for(int _i0 = 0; _i0 < _len_sci_rnc0; _i0++) {
            sci_rnc->destination_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sci_rnc->sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sci_remote_node_context_is_being_destroyed(sci_rnc);
          printf("%d\n", benchRet); 
          free(sci_rnc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
