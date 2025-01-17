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
typedef  int ut32 ;
typedef  int st32 ;

/* Variables and functions */

__attribute__((used)) static ut32 getthbimmed(st32 number) {
	ut32 res = 0;
	if (number < 0) {
		res |= 1 << 18;
	}
	number >>= 1;
	res |= (( number & 0xff) << 8);
	number >>= 8;
	res |= ( number & 0x07);
	number >>= 3;
	res |= (( number & 0xff) << 24);
	number >>= 8;
	res |= (( number & 0x3) << 16);
	number >>= 2;
	if (number < 0) {
		res |= (( number & 0x1) << 3);
		number >>= 1;
		res |= (( number & 0x1) << 5);
	} else {
		res |= ((!( number & 0x1)) << 3);
		number >>= 1;
		res |= ((!( number & 0x1)) << 5);
	}
	return res;
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
          int number = 100;
          int benchRet = getthbimmed(number);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int number = 255;
          int benchRet = getthbimmed(number);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int number = 10;
          int benchRet = getthbimmed(number);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
