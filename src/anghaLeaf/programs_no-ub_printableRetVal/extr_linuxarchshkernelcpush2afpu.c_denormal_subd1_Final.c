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

__attribute__((used)) static long long denormal_subd1(unsigned long long ix, unsigned long long iy)
{
	long long frac;
	int exp;

	if (ix < 0x0010000000000000LL)
		return ix - iy;

	exp = (ix & 0x7ff0000000000000LL) >> 52;
	if (exp - 1 > 63)
		return ix;
	iy >>= exp - 1;
	if (iy == 0)
		return ix;

	frac = (ix & 0x000fffffffffffffLL) | 0x0010000000000000LL;
	frac -= iy;
	while (frac < 0x0010000000000000LL) {
		if (--exp == 0)
			return frac;
		frac <<= 1;
	}

	return ((long long)exp << 52) | (frac & 0x000fffffffffffffLL);
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
          unsigned long long ix = 255;
          unsigned long long iy = 255;
          long long benchRet = denormal_subd1(ix,iy);
          printf("%lld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
