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
 unsigned long PKE_DH_1536 ; 
 unsigned long PKE_DH_2048 ; 
 unsigned long PKE_DH_3072 ; 
 unsigned long PKE_DH_4096 ; 
 unsigned long PKE_DH_G2_1536 ; 
 unsigned long PKE_DH_G2_2048 ; 
 unsigned long PKE_DH_G2_3072 ; 
 unsigned long PKE_DH_G2_4096 ; 

__attribute__((used)) static unsigned long qat_dh_fn_id(unsigned int len, bool g2)
{
	unsigned int bitslen = len << 3;

	switch (bitslen) {
	case 1536:
		return g2 ? PKE_DH_G2_1536 : PKE_DH_1536;
	case 2048:
		return g2 ? PKE_DH_G2_2048 : PKE_DH_2048;
	case 3072:
		return g2 ? PKE_DH_G2_3072 : PKE_DH_3072;
	case 4096:
		return g2 ? PKE_DH_G2_4096 : PKE_DH_4096;
	default:
		return 0;
	};
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
          unsigned int len = 255;
          int g2 = 255;
          unsigned long benchRet = qat_dh_fn_id(len,g2);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
