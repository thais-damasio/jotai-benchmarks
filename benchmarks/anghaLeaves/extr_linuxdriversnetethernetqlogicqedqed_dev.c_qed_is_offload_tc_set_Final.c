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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int offload_tc_set; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;

/* Variables and functions */

__attribute__((used)) static bool qed_is_offload_tc_set(struct qed_hwfn *p_hwfn)
{
	return p_hwfn->hw_info.offload_tc_set;
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].hw_info.offload_tc_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_is_offload_tc_set(p_hwfn);
          printf("%d\n", benchRet); 
          free(p_hwfn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].hw_info.offload_tc_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_is_offload_tc_set(p_hwfn);
          printf("%d\n", benchRet); 
          free(p_hwfn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].hw_info.offload_tc_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_is_offload_tc_set(p_hwfn);
          printf("%d\n", benchRet); 
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
