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
typedef  unsigned int uint32 ;

/* Variables and functions */

__attribute__((used)) static int
Operand_b4constu_encode (uint32 *valp)
{
  unsigned r_0, b4constu_0;
  b4constu_0 = *valp;
  switch (b4constu_0)
    {
    case 0x8000: r_0 = 0; break;
    case 0x10000: r_0 = 0x1; break;
    case 0x2: r_0 = 0x2; break;
    case 0x3: r_0 = 0x3; break;
    case 0x4: r_0 = 0x4; break;
    case 0x5: r_0 = 0x5; break;
    case 0x6: r_0 = 0x6; break;
    case 0x7: r_0 = 0x7; break;
    case 0x8: r_0 = 0x8; break;
    case 0xa: r_0 = 0x9; break;
    case 0xc: r_0 = 0xa; break;
    case 0x10: r_0 = 0xb; break;
    case 0x20: r_0 = 0xc; break;
    case 0x40: r_0 = 0xd; break;
    case 0x80: r_0 = 0xe; break;
    default: r_0 = 0xf; break;
    }
  *valp = r_0;
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
          int _len_valp0 = 65025;
          unsigned int * valp = (unsigned int *) malloc(_len_valp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Operand_b4constu_encode(valp);
          printf("%d\n", benchRet); 
          free(valp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}