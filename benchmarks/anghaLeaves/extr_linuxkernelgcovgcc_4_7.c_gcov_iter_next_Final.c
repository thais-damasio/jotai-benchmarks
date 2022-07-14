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

/* Type definitions */
struct gcov_iterator {scalar_t__ pos; scalar_t__ size; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ ITER_STRIDE ; 

int gcov_iter_next(struct gcov_iterator *iter)
{
	if (iter->pos < iter->size)
		iter->pos += ITER_STRIDE;

	if (iter->pos >= iter->size)
		return -EINVAL;

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
          int _len_iter0 = 1;
          struct gcov_iterator * iter = (struct gcov_iterator *) malloc(_len_iter0*sizeof(struct gcov_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gcov_iter_next(iter);
          printf("%d\n", benchRet); 
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iter0 = 65025;
          struct gcov_iterator * iter = (struct gcov_iterator *) malloc(_len_iter0*sizeof(struct gcov_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gcov_iter_next(iter);
          printf("%d\n", benchRet); 
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iter0 = 100;
          struct gcov_iterator * iter = (struct gcov_iterator *) malloc(_len_iter0*sizeof(struct gcov_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gcov_iter_next(iter);
          printf("%d\n", benchRet); 
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}