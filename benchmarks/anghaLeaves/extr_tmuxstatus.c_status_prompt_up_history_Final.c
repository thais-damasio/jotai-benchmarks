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
typedef  scalar_t__ u_int ;

/* Variables and functions */
 char const** status_prompt_hlist ; 
 scalar_t__ status_prompt_hsize ; 

__attribute__((used)) static const char *
status_prompt_up_history(u_int *idx)
{
	/*
	 * History runs from 0 to size - 1. Index is from 0 to size. Zero is
	 * empty.
	 */

	if (status_prompt_hsize == 0 || *idx == status_prompt_hsize)
		return (NULL);
	(*idx)++;
	return (status_prompt_hlist[status_prompt_hsize - *idx]);
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
          int _len_idx0 = 1;
          long * idx = (long *) malloc(_len_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = status_prompt_up_history(idx);
          printf("{{other_type}} %p\n", &benchRet); 
          free(idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_idx0 = 65025;
          long * idx = (long *) malloc(_len_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = status_prompt_up_history(idx);
          printf("{{other_type}} %p\n", &benchRet); 
          free(idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_idx0 = 100;
          long * idx = (long *) malloc(_len_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = status_prompt_up_history(idx);
          printf("{{other_type}} %p\n", &benchRet); 
          free(idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
