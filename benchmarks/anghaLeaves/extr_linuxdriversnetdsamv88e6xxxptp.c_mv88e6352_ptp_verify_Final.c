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
struct ptp_clock_info {int dummy; } ;
typedef  enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;

/* Variables and functions */
 int EOPNOTSUPP ; 
#define  PTP_PF_EXTTS 131 
#define  PTP_PF_NONE 130 
#define  PTP_PF_PEROUT 129 
#define  PTP_PF_PHYSYNC 128 

__attribute__((used)) static int mv88e6352_ptp_verify(struct ptp_clock_info *ptp, unsigned int pin,
				enum ptp_pin_function func, unsigned int chan)
{
	switch (func) {
	case PTP_PF_NONE:
	case PTP_PF_EXTTS:
		break;
	case PTP_PF_PEROUT:
	case PTP_PF_PHYSYNC:
		return -EOPNOTSUPP;
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

    // int-bounds
    case 0:
    {
          unsigned int pin = 100;
          enum ptp_pin_function func = 0;
          unsigned int chan = 100;
          int _len_ptp0 = 1;
          struct ptp_clock_info * ptp = (struct ptp_clock_info *) malloc(_len_ptp0*sizeof(struct ptp_clock_info));
          for(int _i0 = 0; _i0 < _len_ptp0; _i0++) {
            ptp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6352_ptp_verify(ptp,pin,func,chan);
          printf("%d\n", benchRet); 
          free(ptp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pin = 255;
          enum ptp_pin_function func = 0;
          unsigned int chan = 255;
          int _len_ptp0 = 65025;
          struct ptp_clock_info * ptp = (struct ptp_clock_info *) malloc(_len_ptp0*sizeof(struct ptp_clock_info));
          for(int _i0 = 0; _i0 < _len_ptp0; _i0++) {
            ptp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6352_ptp_verify(ptp,pin,func,chan);
          printf("%d\n", benchRet); 
          free(ptp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pin = 10;
          enum ptp_pin_function func = 0;
          unsigned int chan = 10;
          int _len_ptp0 = 100;
          struct ptp_clock_info * ptp = (struct ptp_clock_info *) malloc(_len_ptp0*sizeof(struct ptp_clock_info));
          for(int _i0 = 0; _i0 < _len_ptp0; _i0++) {
            ptp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6352_ptp_verify(ptp,pin,func,chan);
          printf("%d\n", benchRet); 
          free(ptp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
