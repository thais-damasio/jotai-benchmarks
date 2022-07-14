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
struct TYPE_2__ {unsigned int flags; } ;
struct task_struct {TYPE_1__ thread; } ;

/* Variables and functions */
 unsigned int SH_THREAD_UAC_MASK ; 

int set_unalign_ctl(struct task_struct *tsk, unsigned int val)
{
	tsk->thread.flags = (tsk->thread.flags & ~SH_THREAD_UAC_MASK) |
			    (val & SH_THREAD_UAC_MASK);
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

    // int-bounds
    case 0:
    {
          unsigned int val = 100;
          int _len_tsk0 = 1;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].thread.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_unalign_ctl(tsk,val);
          printf("%d\n", benchRet); 
          free(tsk);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int val = 255;
          int _len_tsk0 = 65025;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].thread.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_unalign_ctl(tsk,val);
          printf("%d\n", benchRet); 
          free(tsk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int val = 10;
          int _len_tsk0 = 100;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].thread.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_unalign_ctl(tsk,val);
          printf("%d\n", benchRet); 
          free(tsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}