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
typedef  TYPE_1__* vlan_parent_ref ;
struct TYPE_3__ {int /*<<< orphan*/  vlp_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  VLPF_CHANGE_IN_PROGRESS ; 

__attribute__((used)) static __inline__ void
vlan_parent_flags_clear_change_in_progress(vlan_parent_ref vlp)
{
    vlp->vlp_flags &= ~VLPF_CHANGE_IN_PROGRESS;
    return;
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
          int _len_vlp0 = 1;
          struct TYPE_3__ * vlp = (struct TYPE_3__ *) malloc(_len_vlp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vlp0; _i0++) {
            vlp->vlp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vlan_parent_flags_clear_change_in_progress(vlp);
          free(vlp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}