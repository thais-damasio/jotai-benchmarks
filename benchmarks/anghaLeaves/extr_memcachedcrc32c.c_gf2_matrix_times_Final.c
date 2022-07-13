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
       1            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static inline uint32_t gf2_matrix_times(uint32_t *mat, uint32_t vec)
{
    uint32_t sum;

    sum = 0;
    while (vec) {
        if (vec & 1)
            sum ^= *mat;
        vec >>= 1;
        mat++;
    }
    return sum;
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
          int vec = 255;
          int _len_mat0 = 65025;
          int * mat = (int *) malloc(_len_mat0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mat0; _i0++) {
            mat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gf2_matrix_times(mat,vec);
          printf("%d\n", benchRet); 
          free(mat);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int vec = 10;
          int _len_mat0 = 100;
          int * mat = (int *) malloc(_len_mat0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mat0; _i0++) {
            mat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gf2_matrix_times(mat,vec);
          printf("%d\n", benchRet); 
          free(mat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
