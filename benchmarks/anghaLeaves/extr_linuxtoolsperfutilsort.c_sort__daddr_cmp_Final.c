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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
struct hist_entry {TYPE_2__* mem_info; } ;
typedef  int /*<<< orphan*/  int64_t ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ daddr; } ;

/* Variables and functions */

int64_t
sort__daddr_cmp(struct hist_entry *left, struct hist_entry *right)
{
	uint64_t l = 0, r = 0;

	if (left->mem_info)
		l = left->mem_info->daddr.addr;
	if (right->mem_info)
		r = right->mem_info->daddr.addr;

	return (int64_t)(r - l);
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
          int _len_left0 = 1;
          struct hist_entry * left = (struct hist_entry *) malloc(_len_left0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
              int _len_left__i0__mem_info0 = 1;
          left[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_left__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_left__i0__mem_info0; _j0++) {
            left[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right0 = 1;
          struct hist_entry * right = (struct hist_entry *) malloc(_len_right0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
              int _len_right__i0__mem_info0 = 1;
          right[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_right__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_right__i0__mem_info0; _j0++) {
            right[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sort__daddr_cmp(left,right);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_left0; _aux++) {
          free(left[_aux].mem_info);
          }
          free(left);
          for(int _aux = 0; _aux < _len_right0; _aux++) {
          free(right[_aux].mem_info);
          }
          free(right);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_left0 = 65025;
          struct hist_entry * left = (struct hist_entry *) malloc(_len_left0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
              int _len_left__i0__mem_info0 = 1;
          left[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_left__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_left__i0__mem_info0; _j0++) {
            left[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right0 = 65025;
          struct hist_entry * right = (struct hist_entry *) malloc(_len_right0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
              int _len_right__i0__mem_info0 = 1;
          right[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_right__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_right__i0__mem_info0; _j0++) {
            right[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sort__daddr_cmp(left,right);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_left0; _aux++) {
          free(left[_aux].mem_info);
          }
          free(left);
          for(int _aux = 0; _aux < _len_right0; _aux++) {
          free(right[_aux].mem_info);
          }
          free(right);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_left0 = 100;
          struct hist_entry * left = (struct hist_entry *) malloc(_len_left0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
              int _len_left__i0__mem_info0 = 1;
          left[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_left__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_left__i0__mem_info0; _j0++) {
            left[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right0 = 100;
          struct hist_entry * right = (struct hist_entry *) malloc(_len_right0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
              int _len_right__i0__mem_info0 = 1;
          right[_i0].mem_info = (struct TYPE_4__ *) malloc(_len_right__i0__mem_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_right__i0__mem_info0; _j0++) {
            right[_i0].mem_info->daddr.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sort__daddr_cmp(left,right);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_left0; _aux++) {
          free(left[_aux].mem_info);
          }
          free(left);
          for(int _aux = 0; _aux < _len_right0; _aux++) {
          free(right[_aux].mem_info);
          }
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
