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
 int hash_const_05 ; 

st32 get_hashfunc_50(st32 arg1, st32 arg2) {
	st32 v3 = arg2 & 0x780000;
	if ( (ut32)v3 <= 0x400000 ) {
		if (v3 == 4194304) {
			return 522;
		}
		if ( (ut32)v3 > 0x180000 ) {
			if (v3 == 2621440) {
				return 402;
			}
			if (v3 == 3145728) {
				return 411;
			}
		} else {
			if (v3 == 1572864) {
				return 401;
			}
			if (!v3) {
				return 403;
			}
			if (v3 == 524288) {
				return 400;
			}
		}
		return arg1;
	}
	if ((ut32)v3 <= 0x680000) {
		if (v3 == 0x680000) {
			return 526;
		}
		if (v3 == hash_const_05) {
			return 524;
		}
		if (v3 == 0x580000) {
			return 525;
		}
		return arg1;
	}
	if (v3 != 7340032) {
		return arg1;
	}
	return 523;
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
          int arg1 = 100;
          int arg2 = 100;
          int benchRet = get_hashfunc_50(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int arg1 = 255;
          int arg2 = 255;
          int benchRet = get_hashfunc_50(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int arg1 = 10;
          int arg2 = 10;
          int benchRet = get_hashfunc_50(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
