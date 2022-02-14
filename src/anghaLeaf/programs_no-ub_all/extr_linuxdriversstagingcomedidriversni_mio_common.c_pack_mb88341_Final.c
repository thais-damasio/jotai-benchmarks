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

__attribute__((used)) static int pack_mb88341(int addr, int val, int *bitstring)
{
	/*
	 * Fujitsu MB 88341
	 * Note that address bits are reversed.  Thanks to
	 * Ingo Keen for noticing this.
	 *
	 * Note also that the 88341 expects address values from
	 * 1-12, whereas we use channel numbers 0-11.  The NI
	 * docs use 1-12, also, so be careful here.
	 */
	addr++;
	*bitstring = ((addr & 0x1) << 11) |
	    ((addr & 0x2) << 9) |
	    ((addr & 0x4) << 7) | ((addr & 0x8) << 5) | (val & 0xff);
	return 12;
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
          int addr = 255;
          int val = 255;
          int _len_bitstring0 = 65025;
          int * bitstring = (int *) malloc(_len_bitstring0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitstring0; _i0++) {
            bitstring[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pack_mb88341(addr,val,bitstring);
          printf("%d\n", benchRet); 
          free(bitstring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
