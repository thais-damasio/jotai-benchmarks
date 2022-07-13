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
typedef  enum ra_blend { ____Placeholder_ra_blend } ra_blend ;
typedef  int /*<<< orphan*/  D3D11_BLEND ;

/* Variables and functions */
 int /*<<< orphan*/  D3D11_BLEND_INV_SRC_ALPHA ; 
 int /*<<< orphan*/  D3D11_BLEND_ONE ; 
 int /*<<< orphan*/  D3D11_BLEND_SRC_ALPHA ; 
 int /*<<< orphan*/  D3D11_BLEND_ZERO ; 
#define  RA_BLEND_ONE 131 
#define  RA_BLEND_ONE_MINUS_SRC_ALPHA 130 
#define  RA_BLEND_SRC_ALPHA 129 
#define  RA_BLEND_ZERO 128 

__attribute__((used)) static D3D11_BLEND map_ra_blend(enum ra_blend blend)
{
    switch (blend) {
    default:
    case RA_BLEND_ZERO:                return D3D11_BLEND_ZERO;
    case RA_BLEND_ONE:                 return D3D11_BLEND_ONE;
    case RA_BLEND_SRC_ALPHA:           return D3D11_BLEND_SRC_ALPHA;
    case RA_BLEND_ONE_MINUS_SRC_ALPHA: return D3D11_BLEND_INV_SRC_ALPHA;
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

    // int-bounds
    case 0:
    {
          enum ra_blend blend = 0;
          int benchRet = map_ra_blend(blend);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ra_blend blend = 0;
          int benchRet = map_ra_blend(blend);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ra_blend blend = 0;
          int benchRet = map_ra_blend(blend);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
