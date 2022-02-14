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
typedef  int mp_int_t ;

/* Variables and functions */
 int MP_SMALL_INT_MAX ; 
 int MP_SMALL_INT_MIN ; 

bool mp_small_int_mul_overflow(mp_int_t x, mp_int_t y) {
    // Check for multiply overflow; see CERT INT32-C
    if (x > 0) { // x is positive
        if (y > 0) { // x and y are positive
            if (x > (MP_SMALL_INT_MAX / y)) {
                return true;
            }
        } else { // x positive, y nonpositive
            if (y < (MP_SMALL_INT_MIN / x)) {
                return true;
            }
        } // x positive, y nonpositive
    } else { // x is nonpositive
        if (y > 0) { // x is nonpositive, y is positive
            if (x < (MP_SMALL_INT_MIN / y)) {
                return true;
            }
        } else { // x and y are nonpositive
            if (x != 0 && y < (MP_SMALL_INT_MAX / x)) {
                return true;
            }
        } // End if x and y are nonpositive
    } // End if x is nonpositive
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

    // big-arr
    case 0:
    {
          int x = 255;
          int y = 255;
          int benchRet = mp_small_int_mul_overflow(x,y);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
