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
struct cvmx_bootmem_desc {int dummy; } ;

/* Variables and functions */
 struct cvmx_bootmem_desc* cvmx_bootmem_desc ; 

int cvmx_bootmem_init(void *mem_desc_ptr)
{
	/* Here we set the global pointer to the bootmem descriptor
	 * block.  This pointer will be used directly, so we will set
	 * it up to be directly usable by the application.  It is set
	 * up as follows for the various runtime/ABI combinations:
	 *
	 * Linux 64 bit: Set XKPHYS bit
	 * Linux 32 bit: use mmap to create mapping, use virtual address
	 * CVMX 64 bit:	 use physical address directly
	 * CVMX 32 bit:	 use physical address directly
	 *
	 * Note that the CVMX environment assumes the use of 1-1 TLB
	 * mappings so that the physical addresses can be used
	 * directly
	 */
	if (!cvmx_bootmem_desc) {
#if   defined(CVMX_ABI_64)
		/* Set XKPHYS bit */
		cvmx_bootmem_desc = cvmx_phys_to_ptr(CAST64(mem_desc_ptr));
#else
		cvmx_bootmem_desc = (struct cvmx_bootmem_desc *) mem_desc_ptr;
#endif
	}

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
          void * mem_desc_ptr;
          int benchRet = cvmx_bootmem_init(mem_desc_ptr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          void * mem_desc_ptr;
          int benchRet = cvmx_bootmem_init(mem_desc_ptr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * mem_desc_ptr;
          int benchRet = cvmx_bootmem_init(mem_desc_ptr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
