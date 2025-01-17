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

/* Variables and functions */
 int EINVAL ; 
 unsigned int INTEL_MSIC_GPIO0HV0CTLI ; 
 int INTEL_MSIC_GPIO0LV0CTLI ; 
 unsigned int INTEL_MSIC_GPIO1HV0CTLI ; 
 unsigned int INTEL_MSIC_GPIO1LV0CTLI ; 
 unsigned int MSIC_NUM_GPIO ; 

__attribute__((used)) static int msic_gpio_to_ireg(unsigned offset)
{
	if (offset >= MSIC_NUM_GPIO)
		return -EINVAL;

	if (offset < 8)
		return INTEL_MSIC_GPIO0LV0CTLI - offset;
	if (offset < 16)
		return INTEL_MSIC_GPIO1LV0CTLI - offset + 8;
	if (offset < 20)
		return INTEL_MSIC_GPIO0HV0CTLI - offset + 16;

	return INTEL_MSIC_GPIO1HV0CTLI - offset + 20;
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
          unsigned int offset = 100;
          int benchRet = msic_gpio_to_ireg(offset);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          int benchRet = msic_gpio_to_ireg(offset);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          int benchRet = msic_gpio_to_ireg(offset);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
