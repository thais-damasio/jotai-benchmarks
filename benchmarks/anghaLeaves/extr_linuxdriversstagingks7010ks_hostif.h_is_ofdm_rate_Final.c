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
typedef  int u8 ;

/* Variables and functions */
 int RATE_MASK ; 
 int TX_RATE_12M ; 
 int TX_RATE_18M ; 
 int TX_RATE_24M ; 
 int TX_RATE_36M ; 
 int TX_RATE_48M ; 
 int TX_RATE_54M ; 
 int TX_RATE_6M ; 
 int TX_RATE_9M ; 

__attribute__((used)) static inline bool is_ofdm_rate(u8 rate)
{
	return (((rate & RATE_MASK) == TX_RATE_6M)  ||
		((rate & RATE_MASK) == TX_RATE_12M) ||
		((rate & RATE_MASK) == TX_RATE_24M) ||
		((rate & RATE_MASK) == TX_RATE_9M)  ||
		((rate & RATE_MASK) == TX_RATE_18M) ||
		((rate & RATE_MASK) == TX_RATE_36M) ||
		((rate & RATE_MASK) == TX_RATE_48M) ||
		((rate & RATE_MASK) == TX_RATE_54M));
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
          int rate = 100;
          int benchRet = is_ofdm_rate(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int rate = 255;
          int benchRet = is_ofdm_rate(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rate = 10;
          int benchRet = is_ofdm_rate(rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
