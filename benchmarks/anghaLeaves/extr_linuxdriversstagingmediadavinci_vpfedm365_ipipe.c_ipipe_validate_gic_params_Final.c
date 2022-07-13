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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ integer; scalar_t__ decimal; } ;
struct vpfe_ipipe_gic {int en; scalar_t__ gain; scalar_t__ thr; scalar_t__ slope; int apply_lsc_gain; TYPE_1__ nf2_thr_gain; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ GIC_GAIN_MASK ; 
 scalar_t__ GIC_NFGAN_DECI_MASK ; 
 scalar_t__ GIC_NFGAN_INT_MASK ; 
 scalar_t__ GIC_SLOPE_MASK ; 
 scalar_t__ GIC_THR_MASK ; 

__attribute__((used)) static int ipipe_validate_gic_params(struct vpfe_ipipe_gic *gic)
{
	if (gic->en > 1 || gic->gain > GIC_GAIN_MASK ||
	    gic->thr > GIC_THR_MASK || gic->slope > GIC_SLOPE_MASK ||
	    gic->apply_lsc_gain > 1 ||
	    gic->nf2_thr_gain.integer > GIC_NFGAN_INT_MASK ||
	    gic->nf2_thr_gain.decimal > GIC_NFGAN_DECI_MASK)
		return -EINVAL;

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
          int _len_gic0 = 1;
          struct vpfe_ipipe_gic * gic = (struct vpfe_ipipe_gic *) malloc(_len_gic0*sizeof(struct vpfe_ipipe_gic));
          for(int _i0 = 0; _i0 < _len_gic0; _i0++) {
            gic[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].thr = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].slope = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].apply_lsc_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_gic_params(gic);
          printf("%d\n", benchRet); 
          free(gic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gic0 = 65025;
          struct vpfe_ipipe_gic * gic = (struct vpfe_ipipe_gic *) malloc(_len_gic0*sizeof(struct vpfe_ipipe_gic));
          for(int _i0 = 0; _i0 < _len_gic0; _i0++) {
            gic[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].thr = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].slope = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].apply_lsc_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_gic_params(gic);
          printf("%d\n", benchRet); 
          free(gic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gic0 = 100;
          struct vpfe_ipipe_gic * gic = (struct vpfe_ipipe_gic *) malloc(_len_gic0*sizeof(struct vpfe_ipipe_gic));
          for(int _i0 = 0; _i0 < _len_gic0; _i0++) {
            gic[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].thr = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].slope = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].apply_lsc_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        gic[_i0].nf2_thr_gain.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_gic_params(gic);
          printf("%d\n", benchRet); 
          free(gic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
