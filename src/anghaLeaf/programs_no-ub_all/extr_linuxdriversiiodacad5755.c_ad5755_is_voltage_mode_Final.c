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
typedef  enum ad5755_mode { ____Placeholder_ad5755_mode } ad5755_mode ;

/* Variables and functions */
#define  AD5755_MODE_VOLTAGE_0V_10V 131 
#define  AD5755_MODE_VOLTAGE_0V_5V 130 
#define  AD5755_MODE_VOLTAGE_PLUSMINUS_10V 129 
#define  AD5755_MODE_VOLTAGE_PLUSMINUS_5V 128 

__attribute__((used)) static bool ad5755_is_voltage_mode(enum ad5755_mode mode)
{
	switch (mode) {
	case AD5755_MODE_VOLTAGE_0V_5V:
	case AD5755_MODE_VOLTAGE_0V_10V:
	case AD5755_MODE_VOLTAGE_PLUSMINUS_5V:
	case AD5755_MODE_VOLTAGE_PLUSMINUS_10V:
		return true;
	default:
		return false;
	}
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
          enum ad5755_mode mode = 0;
          int benchRet = ad5755_is_voltage_mode(mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
