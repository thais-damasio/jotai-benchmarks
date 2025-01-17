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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
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
 int RADEON_GEM_DOMAIN_CPU ; 
 int RADEON_GEM_DOMAIN_GTT ; 
 int RADEON_GEM_DOMAIN_VRAM ; 
#define  TTM_PL_SYSTEM 130 
#define  TTM_PL_TT 129 
#define  TTM_PL_VRAM 128 

__attribute__((used)) static inline unsigned radeon_mem_type_to_domain(u32 mem_type)
{
	switch (mem_type) {
	case TTM_PL_VRAM:
		return RADEON_GEM_DOMAIN_VRAM;
	case TTM_PL_TT:
		return RADEON_GEM_DOMAIN_GTT;
	case TTM_PL_SYSTEM:
		return RADEON_GEM_DOMAIN_CPU;
	default:
		break;
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
          int mem_type = 100;
          unsigned int benchRet = radeon_mem_type_to_domain(mem_type);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mem_type = 255;
          unsigned int benchRet = radeon_mem_type_to_domain(mem_type);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mem_type = 10;
          unsigned int benchRet = radeon_mem_type_to_domain(mem_type);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
