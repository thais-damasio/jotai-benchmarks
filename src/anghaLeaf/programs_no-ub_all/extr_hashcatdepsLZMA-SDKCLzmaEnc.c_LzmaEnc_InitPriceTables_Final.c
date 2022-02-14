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
typedef  int UInt32 ;
typedef  scalar_t__ CProbPrice ;

/* Variables and functions */
 int kBitModelTotal ; 
 unsigned int const kNumBitModelTotalBits ; 
 unsigned int kNumBitPriceShiftBits ; 
 int kNumMoveReducingBits ; 

__attribute__((used)) static void LzmaEnc_InitPriceTables(CProbPrice *ProbPrices)
{
  UInt32 i;
  for (i = 0; i < (kBitModelTotal >> kNumMoveReducingBits); i++)
  {
    const unsigned kCyclesBits = kNumBitPriceShiftBits;
    UInt32 w = (i << kNumMoveReducingBits) + (1 << (kNumMoveReducingBits - 1));
    unsigned bitCount = 0;
    unsigned j;
    for (j = 0; j < kCyclesBits; j++)
    {
      w = w * w;
      bitCount <<= 1;
      while (w >= ((UInt32)1 << 16))
      {
        w >>= 1;
        bitCount++;
      }
    }
    ProbPrices[i] = (CProbPrice)((kNumBitModelTotalBits << kCyclesBits) - 15 - bitCount);
    // printf("\n%3d: %5d", i, ProbPrices[i]);
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
          int _len_ProbPrices0 = 65025;
          long * ProbPrices = (long *) malloc(_len_ProbPrices0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ProbPrices0; _i0++) {
            ProbPrices[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaEnc_InitPriceTables(ProbPrices);
          free(ProbPrices);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}