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
typedef  int D3DFORMAT ;

/* Variables and functions */
#define  D3DFMT_A1R5G5B5 131 
#define  D3DFMT_A4R4G4B4 130 
#define  D3DFMT_A8B8G8R8 129 
#define  D3DFMT_A8R8G8B8 128 
 int D3DFMT_X1R5G5B5 ; 
 int D3DFMT_X4R4G4B4 ; 
 int D3DFMT_X8B8G8R8 ; 
 int D3DFMT_X8R8G8B8 ; 

__attribute__((used)) static D3DFORMAT RemoveAlphaChannel(D3DFORMAT CheckFormat)
{
    switch (CheckFormat)
    {
    case D3DFMT_A8R8G8B8:
        return D3DFMT_X8R8G8B8;

    case D3DFMT_A1R5G5B5:
        return D3DFMT_X1R5G5B5;

    case D3DFMT_A4R4G4B4:
        return D3DFMT_X4R4G4B4;

    case D3DFMT_A8B8G8R8:
        return D3DFMT_X8B8G8R8;

    default:
        /* CheckFormat has not relevant alpha channel */
        break;
    }

    return CheckFormat;
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
          int CheckFormat = 100;
          int benchRet = RemoveAlphaChannel(CheckFormat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int CheckFormat = 255;
          int benchRet = RemoveAlphaChannel(CheckFormat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int CheckFormat = 10;
          int benchRet = RemoveAlphaChannel(CheckFormat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
