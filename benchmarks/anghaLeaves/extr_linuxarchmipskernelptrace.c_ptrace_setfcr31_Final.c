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
       1            big-arr-10x\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_4__ {int fcr31; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_6__ {int fpu_msk31; } ;

/* Variables and functions */
 TYPE_3__ boot_cpu_data ; 

__attribute__((used)) static void ptrace_setfcr31(struct task_struct *child, u32 value)
{
	u32 fcr31;
	u32 mask;

	fcr31 = child->thread.fpu.fcr31;
	mask = boot_cpu_data.fpu_msk31;
	child->thread.fpu.fcr31 = (value & ~mask) | (fcr31 & mask);
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
          int value = 100;
          int _len_child0 = 1;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.fpu.fcr31 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ptrace_setfcr31(child,value);
          free(child);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int value = 10;
          int _len_child0 = 100;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.fpu.fcr31 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ptrace_setfcr31(child,value);
          free(child);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
