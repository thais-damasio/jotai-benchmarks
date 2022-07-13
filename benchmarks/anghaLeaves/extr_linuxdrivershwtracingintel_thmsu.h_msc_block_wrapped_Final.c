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
struct msc_block_desc {int hw_tag; } ;

/* Variables and functions */
 int MSC_HW_TAG_BLOCKWRAP ; 

__attribute__((used)) static inline bool msc_block_wrapped(struct msc_block_desc *bdesc)
{
	if (bdesc->hw_tag & MSC_HW_TAG_BLOCKWRAP)
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
          int _len_bdesc0 = 1;
          struct msc_block_desc * bdesc = (struct msc_block_desc *) malloc(_len_bdesc0*sizeof(struct msc_block_desc));
          for(int _i0 = 0; _i0 < _len_bdesc0; _i0++) {
            bdesc[_i0].hw_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = msc_block_wrapped(bdesc);
          printf("%d\n", benchRet); 
          free(bdesc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bdesc0 = 65025;
          struct msc_block_desc * bdesc = (struct msc_block_desc *) malloc(_len_bdesc0*sizeof(struct msc_block_desc));
          for(int _i0 = 0; _i0 < _len_bdesc0; _i0++) {
            bdesc[_i0].hw_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = msc_block_wrapped(bdesc);
          printf("%d\n", benchRet); 
          free(bdesc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bdesc0 = 100;
          struct msc_block_desc * bdesc = (struct msc_block_desc *) malloc(_len_bdesc0*sizeof(struct msc_block_desc));
          for(int _i0 = 0; _i0 < _len_bdesc0; _i0++) {
            bdesc[_i0].hw_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = msc_block_wrapped(bdesc);
          printf("%d\n", benchRet); 
          free(bdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
