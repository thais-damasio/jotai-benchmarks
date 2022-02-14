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

unsigned int lola_sample_rate_convert(unsigned int coded)
{
	unsigned int freq;

	/* base frequency */
	switch (coded & 0x3) {
	case 0:     freq = 48000; break;
	case 1:     freq = 44100; break;
	case 2:     freq = 32000; break;
	default:    return 0;   /* error */
	}

	/* multiplier / devisor */
	switch (coded & 0x1c) {
	case (0 << 2):    break;
	case (4 << 2):    break;
	case (1 << 2):    freq *= 2; break;
	case (2 << 2):    freq *= 4; break;
	case (5 << 2):    freq /= 2; break;
	case (6 << 2):    freq /= 4; break;
	default:        return 0;   /* error */
	}

	/* ajustement */
	switch (coded & 0x60) {
	case (0 << 5):    break;
	case (1 << 5):    freq = (freq * 999) / 1000; break;
	case (2 << 5):    freq = (freq * 1001) / 1000; break;
	default:        return 0;   /* error */
	}
	return freq;
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
          unsigned int coded = 255;
          unsigned int benchRet = lola_sample_rate_convert(coded);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
