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
struct TYPE_2__ {scalar_t__ fault_code; } ;
struct task_struct {TYPE_1__ thread; } ;

/* Variables and functions */
 scalar_t__ UPROBE_INV_FAULT_CODE ; 

bool arch_uprobe_xol_was_trapped(struct task_struct *t)
{
	/*
	 * Between arch_uprobe_pre_xol and arch_uprobe_post_xol, if an xol
	 * insn itself is trapped, then detect the case with the help of
	 * invalid fault code which is being set in arch_uprobe_pre_xol
	 */
	if (t->thread.fault_code != UPROBE_INV_FAULT_CODE)
		return true;

	return false;
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
          int _len_t0 = 1;
          struct task_struct * t = (struct task_struct *) malloc(_len_t0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].thread.fault_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_xol_was_trapped(t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t0 = 65025;
          struct task_struct * t = (struct task_struct *) malloc(_len_t0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].thread.fault_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_xol_was_trapped(t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t0 = 100;
          struct task_struct * t = (struct task_struct *) malloc(_len_t0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].thread.fault_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_xol_was_trapped(t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
