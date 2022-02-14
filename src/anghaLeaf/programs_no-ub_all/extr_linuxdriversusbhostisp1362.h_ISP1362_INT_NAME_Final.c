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
#define  ISP1362_INT_ATL 137 
#define  ISP1362_INT_CLKRDY 136 
#define  ISP1362_INT_EOT 135 
#define  ISP1362_INT_INTL 134 
#define  ISP1362_INT_ISTL0 133 
#define  ISP1362_INT_ISTL1 132 
#define  ISP1362_INT_OPR 131 
#define  ISP1362_INT_OTG 130 
#define  ISP1362_INT_SOF 129 
#define  ISP1362_INT_SUSP 128 

__attribute__((used)) static inline const char *ISP1362_INT_NAME(int n)
{
	switch (n) {
	case ISP1362_INT_SOF:    return "SOF";
	case ISP1362_INT_ISTL0:  return "ISTL0";
	case ISP1362_INT_ISTL1:  return "ISTL1";
	case ISP1362_INT_EOT:    return "EOT";
	case ISP1362_INT_OPR:    return "OPR";
	case ISP1362_INT_SUSP:   return "SUSP";
	case ISP1362_INT_CLKRDY: return "CLKRDY";
	case ISP1362_INT_INTL:   return "INTL";
	case ISP1362_INT_ATL:    return "ATL";
	case ISP1362_INT_OTG:    return "OTG";
	default:                 return "unknown";
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
          int n = 255;
          const char * benchRet = ISP1362_INT_NAME(n);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}