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
struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;

/* Variables and functions */
 scalar_t__ CFI_MFR_SHARP ; 
 scalar_t__ LH28F640BFHE_PBTL70A ; 
 scalar_t__ LH28F640BFHE_PBTL90 ; 
 scalar_t__ LH28F640BFHE_PTTL70A ; 
 scalar_t__ LH28F640BFHE_PTTL90 ; 

__attribute__((used)) static int is_LH28F640BF(struct cfi_private *cfi)
{
	/* Sharp LH28F640BF Family */
	if (cfi->mfr == CFI_MFR_SHARP && (
	    cfi->id == LH28F640BFHE_PTTL90 || cfi->id == LH28F640BFHE_PBTL90 ||
	    cfi->id == LH28F640BFHE_PTTL70A || cfi->id == LH28F640BFHE_PBTL70A))
		return 1;
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
          int _len_cfi0 = 1;
          struct cfi_private * cfi = (struct cfi_private *) malloc(_len_cfi0*sizeof(struct cfi_private));
          for(int _i0 = 0; _i0 < _len_cfi0; _i0++) {
            cfi->mfr = ((-2 * (next_i()%2)) + 1) * next_i();
        cfi->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_LH28F640BF(cfi);
          printf("%d\n", benchRet); 
          free(cfi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
