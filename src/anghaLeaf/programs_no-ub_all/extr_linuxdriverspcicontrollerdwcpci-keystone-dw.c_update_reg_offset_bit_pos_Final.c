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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline void update_reg_offset_bit_pos(u32 offset, u32 *reg_offset,
					     u32 *bit_pos)
{
	*reg_offset = offset % 8;
	*bit_pos = offset >> 3;
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
          int offset = 255;
          int _len_reg_offset0 = 65025;
          int * reg_offset = (int *) malloc(_len_reg_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg_offset0; _i0++) {
            reg_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit_pos0 = 65025;
          int * bit_pos = (int *) malloc(_len_bit_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit_pos0; _i0++) {
            bit_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_reg_offset_bit_pos(offset,reg_offset,bit_pos);
          free(reg_offset);
          free(bit_pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
