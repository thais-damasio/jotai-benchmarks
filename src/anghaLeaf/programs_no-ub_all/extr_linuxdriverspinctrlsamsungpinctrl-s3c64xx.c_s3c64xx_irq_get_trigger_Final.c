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

/* Variables and functions */
 int EINT_EDGE_BOTH ; 
 int EINT_EDGE_FALLING ; 
 int EINT_EDGE_RISING ; 
 int EINT_LEVEL_HIGH ; 
 int EINT_LEVEL_LOW ; 
 int EINVAL ; 
#define  IRQ_TYPE_EDGE_BOTH 132 
#define  IRQ_TYPE_EDGE_FALLING 131 
#define  IRQ_TYPE_EDGE_RISING 130 
#define  IRQ_TYPE_LEVEL_HIGH 129 
#define  IRQ_TYPE_LEVEL_LOW 128 

__attribute__((used)) static int s3c64xx_irq_get_trigger(unsigned int type)
{
	int trigger;

	switch (type) {
	case IRQ_TYPE_EDGE_RISING:
		trigger = EINT_EDGE_RISING;
		break;
	case IRQ_TYPE_EDGE_FALLING:
		trigger = EINT_EDGE_FALLING;
		break;
	case IRQ_TYPE_EDGE_BOTH:
		trigger = EINT_EDGE_BOTH;
		break;
	case IRQ_TYPE_LEVEL_HIGH:
		trigger = EINT_LEVEL_HIGH;
		break;
	case IRQ_TYPE_LEVEL_LOW:
		trigger = EINT_LEVEL_LOW;
		break;
	default:
		return -EINVAL;
	}

	return trigger;
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
          unsigned int type = 255;
          int benchRet = s3c64xx_irq_get_trigger(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
