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
typedef  int uint32_t ;
struct vmcb_seg {int attrib; int limit; scalar_t__ base; scalar_t__ selector; } ;

/* Variables and functions */
 int SVM_SELECTOR_P_MASK ; 

__attribute__((used)) static void init_sys_seg(struct vmcb_seg *seg, uint32_t type)
{
	seg->selector = 0;
	seg->attrib = SVM_SELECTOR_P_MASK | type;
	seg->limit = 0xffff;
	seg->base = 0;
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
          int type = 255;
          int _len_seg0 = 1;
          struct vmcb_seg * seg = (struct vmcb_seg *) malloc(_len_seg0*sizeof(struct vmcb_seg));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
            seg->attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        seg->limit = ((-2 * (next_i()%2)) + 1) * next_i();
        seg->base = ((-2 * (next_i()%2)) + 1) * next_i();
        seg->selector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sys_seg(seg,type);
          free(seg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
