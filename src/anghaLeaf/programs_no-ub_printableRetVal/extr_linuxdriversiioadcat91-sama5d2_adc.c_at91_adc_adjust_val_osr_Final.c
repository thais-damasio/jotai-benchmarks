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
struct at91_adc_state {scalar_t__ oversampling_ratio; } ;

/* Variables and functions */
 scalar_t__ AT91_OSR_1SAMPLES ; 
 scalar_t__ AT91_OSR_4SAMPLES ; 
 int IIO_VAL_INT ; 

__attribute__((used)) static int at91_adc_adjust_val_osr(struct at91_adc_state *st, int *val)
{
	if (st->oversampling_ratio == AT91_OSR_1SAMPLES) {
		/*
		 * in this case we only have 12 bits of real data, but channel
		 * is registered as 14 bits, so shift left two bits
		 */
		*val <<= 2;
	} else if (st->oversampling_ratio == AT91_OSR_4SAMPLES) {
		/*
		 * in this case we have 13 bits of real data, but channel
		 * is registered as 14 bits, so left shift one bit
		 */
		*val <<= 1;
	}

	return IIO_VAL_INT;
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
          int _len_st0 = 1;
          struct at91_adc_state * st = (struct at91_adc_state *) malloc(_len_st0*sizeof(struct at91_adc_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st->oversampling_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = at91_adc_adjust_val_osr(st,val);
          printf("%d\n", benchRet); 
          free(st);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}