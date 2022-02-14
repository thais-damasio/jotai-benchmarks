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
typedef  int u8 ;

/* Variables and functions */
 int RTLLIB_BASIC_RATE_MASK ; 
#define  RTLLIB_OFDM_RATE_12MB 135 
#define  RTLLIB_OFDM_RATE_18MB 134 
#define  RTLLIB_OFDM_RATE_24MB 133 
#define  RTLLIB_OFDM_RATE_36MB 132 
#define  RTLLIB_OFDM_RATE_48MB 131 
#define  RTLLIB_OFDM_RATE_54MB 130 
#define  RTLLIB_OFDM_RATE_6MB 129 
#define  RTLLIB_OFDM_RATE_9MB 128 

__attribute__((used)) static inline int rtllib_is_ofdm_rate(u8 rate)
{
	switch (rate & ~RTLLIB_BASIC_RATE_MASK) {
	case RTLLIB_OFDM_RATE_6MB:
	case RTLLIB_OFDM_RATE_9MB:
	case RTLLIB_OFDM_RATE_12MB:
	case RTLLIB_OFDM_RATE_18MB:
	case RTLLIB_OFDM_RATE_24MB:
	case RTLLIB_OFDM_RATE_36MB:
	case RTLLIB_OFDM_RATE_48MB:
	case RTLLIB_OFDM_RATE_54MB:
		return 1;
	}
	return 0;
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
          int rate = 255;
          int benchRet = rtllib_is_ofdm_rate(rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}