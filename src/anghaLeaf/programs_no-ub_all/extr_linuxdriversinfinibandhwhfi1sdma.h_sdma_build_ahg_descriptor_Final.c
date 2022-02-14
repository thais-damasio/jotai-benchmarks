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
typedef  unsigned long u8 ;
typedef  int /*<<< orphan*/  u32 ;
typedef  unsigned long u16 ;

/* Variables and functions */
 unsigned long SDMA_AHG_FIELD_LEN_MASK ; 
 unsigned long SDMA_AHG_FIELD_LEN_SHIFT ; 
 unsigned long SDMA_AHG_FIELD_START_MASK ; 
 unsigned long SDMA_AHG_FIELD_START_SHIFT ; 
 unsigned long SDMA_AHG_INDEX_MASK ; 
 unsigned long SDMA_AHG_INDEX_SHIFT ; 
 unsigned long SDMA_AHG_UPDATE_ENABLE_SHIFT ; 
 unsigned long SDMA_AHG_VALUE_MASK ; 
 unsigned long SDMA_AHG_VALUE_SHIFT ; 

__attribute__((used)) static inline u32 sdma_build_ahg_descriptor(
	u16 data,
	u8 dwindex,
	u8 startbit,
	u8 bits)
{
	return (u32)(1UL << SDMA_AHG_UPDATE_ENABLE_SHIFT |
		((startbit & SDMA_AHG_FIELD_START_MASK) <<
		SDMA_AHG_FIELD_START_SHIFT) |
		((bits & SDMA_AHG_FIELD_LEN_MASK) <<
		SDMA_AHG_FIELD_LEN_SHIFT) |
		((dwindex & SDMA_AHG_INDEX_MASK) <<
		SDMA_AHG_INDEX_SHIFT) |
		((data & SDMA_AHG_VALUE_MASK) <<
		SDMA_AHG_VALUE_SHIFT));
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
          unsigned long data = 255;
          unsigned long dwindex = 255;
          unsigned long startbit = 255;
          unsigned long bits = 255;
          int benchRet = sdma_build_ahg_descriptor(data,dwindex,startbit,bits);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}