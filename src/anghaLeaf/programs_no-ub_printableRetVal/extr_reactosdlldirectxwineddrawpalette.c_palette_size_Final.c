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
typedef  int DWORD ;

/* Variables and functions */
#define  DDPCAPS_1BIT 131 
#define  DDPCAPS_2BIT 130 
#define  DDPCAPS_4BIT 129 
#define  DDPCAPS_8BIT 128 

__attribute__((used)) static unsigned int palette_size(DWORD flags)
{
    switch (flags & (DDPCAPS_1BIT | DDPCAPS_2BIT | DDPCAPS_4BIT | DDPCAPS_8BIT))
    {
        case DDPCAPS_1BIT:
            return 2;
        case DDPCAPS_2BIT:
            return 4;
        case DDPCAPS_4BIT:
            return 16;
        case DDPCAPS_8BIT:
            return 256;
        default:
            return ~0u;
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
          int flags = 255;
          unsigned int benchRet = palette_size(flags);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
