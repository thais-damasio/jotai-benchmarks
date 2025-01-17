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
typedef  int uint8_t ;
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static uint8_t fiji_get_mclk_frequency_ratio(uint32_t mem_clock)
{
	if (mem_clock <= 10000)
		return 0x0;
	if (mem_clock <= 15000)
		return 0x1;
	if (mem_clock <= 20000)
		return 0x2;
	if (mem_clock <= 25000)
		return 0x3;
	if (mem_clock <= 30000)
		return 0x4;
	if (mem_clock <= 35000)
		return 0x5;
	if (mem_clock <= 40000)
		return 0x6;
	if (mem_clock <= 45000)
		return 0x7;
	if (mem_clock <= 50000)
		return 0x8;
	if (mem_clock <= 55000)
		return 0x9;
	if (mem_clock <= 60000)
		return 0xa;
	if (mem_clock <= 65000)
		return 0xb;
	if (mem_clock <= 70000)
		return 0xc;
	if (mem_clock <= 75000)
		return 0xd;
	if (mem_clock <= 80000)
		return 0xe;
	/* mem_clock > 800MHz */
	return 0xf;
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
          int mem_clock = 100;
          int benchRet = fiji_get_mclk_frequency_ratio(mem_clock);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mem_clock = 255;
          int benchRet = fiji_get_mclk_frequency_ratio(mem_clock);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mem_clock = 10;
          int benchRet = fiji_get_mclk_frequency_ratio(mem_clock);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
