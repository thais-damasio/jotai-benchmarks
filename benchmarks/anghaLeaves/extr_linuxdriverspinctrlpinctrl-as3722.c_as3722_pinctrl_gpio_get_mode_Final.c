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

/* Variables and functions */
 unsigned int AS3722_GPIO_MODE_HIGH_IMPED ; 
 int AS3722_GPIO_MODE_INPUT ; 
 int AS3722_GPIO_MODE_INPUT_PULL_DOWN ; 
 int AS3722_GPIO_MODE_INPUT_PULL_UP ; 
 int AS3722_GPIO_MODE_IO_OPEN_DRAIN ; 
 int AS3722_GPIO_MODE_IO_OPEN_DRAIN_PULL_UP ; 
 unsigned int AS3722_GPIO_MODE_OPEN_DRAIN ; 
 int AS3722_GPIO_MODE_OUTPUT_VDDH ; 
 int AS3722_GPIO_MODE_OUTPUT_VDDL ; 
 unsigned int AS3722_GPIO_MODE_PULL_DOWN ; 
 unsigned int AS3722_GPIO_MODE_PULL_UP ; 
 int EINVAL ; 

__attribute__((used)) static int as3722_pinctrl_gpio_get_mode(unsigned gpio_mode_prop, bool input)
{
	if (gpio_mode_prop & AS3722_GPIO_MODE_HIGH_IMPED)
		return -EINVAL;

	if (gpio_mode_prop & AS3722_GPIO_MODE_OPEN_DRAIN) {
		if (gpio_mode_prop & AS3722_GPIO_MODE_PULL_UP)
			return AS3722_GPIO_MODE_IO_OPEN_DRAIN_PULL_UP;
		return AS3722_GPIO_MODE_IO_OPEN_DRAIN;
	}
	if (input) {
		if (gpio_mode_prop & AS3722_GPIO_MODE_PULL_UP)
			return AS3722_GPIO_MODE_INPUT_PULL_UP;
		else if (gpio_mode_prop & AS3722_GPIO_MODE_PULL_DOWN)
			return AS3722_GPIO_MODE_INPUT_PULL_DOWN;
		return AS3722_GPIO_MODE_INPUT;
	}
	if (gpio_mode_prop & AS3722_GPIO_MODE_PULL_DOWN)
		return AS3722_GPIO_MODE_OUTPUT_VDDL;
	return AS3722_GPIO_MODE_OUTPUT_VDDH;
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
          unsigned int gpio_mode_prop = 100;
          int input = 100;
          int benchRet = as3722_pinctrl_gpio_get_mode(gpio_mode_prop,input);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int gpio_mode_prop = 255;
          int input = 255;
          int benchRet = as3722_pinctrl_gpio_get_mode(gpio_mode_prop,input);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int gpio_mode_prop = 10;
          int input = 10;
          int benchRet = as3722_pinctrl_gpio_get_mode(gpio_mode_prop,input);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
