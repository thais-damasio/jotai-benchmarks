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
struct vfp_double {int exponent; int significand; } ;

/* Variables and functions */
 int VFP_DENORMAL ; 
 int VFP_DOUBLE_SIGNIFICAND_QNAN ; 
 int VFP_INFINITY ; 
 int VFP_NUMBER ; 
 int VFP_QNAN ; 
 int VFP_SNAN ; 
 int VFP_ZERO ; 

__attribute__((used)) static inline int vfp_double_type(struct vfp_double *s)
{
	int type = VFP_NUMBER;
	if (s->exponent == 2047) {
		if (s->significand == 0)
			type = VFP_INFINITY;
		else if (s->significand & VFP_DOUBLE_SIGNIFICAND_QNAN)
			type = VFP_QNAN;
		else
			type = VFP_SNAN;
	} else if (s->exponent == 0) {
		if (s->significand == 0)
			type |= VFP_ZERO;
		else
			type |= VFP_DENORMAL;
	}
	return type;
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
          int _len_s0 = 1;
          struct vfp_double * s = (struct vfp_double *) malloc(_len_s0*sizeof(struct vfp_double));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->exponent = ((-2 * (next_i()%2)) + 1) * next_i();
        s->significand = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vfp_double_type(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
