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
       0            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u32 ;
struct parser_exec_state {int /*<<< orphan*/ * ip_va; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 *cmd_ptr(struct parser_exec_state *s, int index)
{
	return s->ip_va + (index << 2);
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

    // big-arr-10x
    case 0:
    {
          int index = 10;
          int _len_s0 = 100;
          struct parser_exec_state * s = (struct parser_exec_state *) malloc(_len_s0*sizeof(struct parser_exec_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ip_va0 = 1;
          s[_i0].ip_va = (int *) malloc(_len_s__i0__ip_va0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ip_va0; _j0++) {
            s[_i0].ip_va[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = cmd_ptr(s,index);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ip_va);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
