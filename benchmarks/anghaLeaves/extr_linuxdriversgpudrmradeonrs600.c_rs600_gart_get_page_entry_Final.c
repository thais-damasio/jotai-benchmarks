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
typedef  int uint64_t ;
typedef  int uint32_t ;

/* Variables and functions */
 int R600_PTE_READABLE ; 
 int R600_PTE_SNOOPED ; 
 int R600_PTE_SYSTEM ; 
 int R600_PTE_VALID ; 
 int R600_PTE_WRITEABLE ; 
 int RADEON_GART_PAGE_READ ; 
 int RADEON_GART_PAGE_SNOOP ; 
 int RADEON_GART_PAGE_VALID ; 
 int RADEON_GART_PAGE_WRITE ; 

uint64_t rs600_gart_get_page_entry(uint64_t addr, uint32_t flags)
{
	addr = addr & 0xFFFFFFFFFFFFF000ULL;
	addr |= R600_PTE_SYSTEM;
	if (flags & RADEON_GART_PAGE_VALID)
		addr |= R600_PTE_VALID;
	if (flags & RADEON_GART_PAGE_READ)
		addr |= R600_PTE_READABLE;
	if (flags & RADEON_GART_PAGE_WRITE)
		addr |= R600_PTE_WRITEABLE;
	if (flags & RADEON_GART_PAGE_SNOOP)
		addr |= R600_PTE_SNOOPED;
	return addr;
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
          int addr = 100;
          int flags = 100;
          int benchRet = rs600_gart_get_page_entry(addr,flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int flags = 255;
          int benchRet = rs600_gart_get_page_entry(addr,flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int flags = 10;
          int benchRet = rs600_gart_get_page_entry(addr,flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
