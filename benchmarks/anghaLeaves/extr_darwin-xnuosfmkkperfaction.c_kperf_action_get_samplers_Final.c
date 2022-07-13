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
typedef  scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ sample; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned int actionc ; 
 TYPE_1__* actionv ; 

int
kperf_action_get_samplers(unsigned actionid, uint32_t *samplers_out)
{
	if ((actionid > actionc)) {
		return EINVAL;
	}

	if (actionid == 0) {
		*samplers_out = 0; /* "NULL" action */
	} else {
		*samplers_out = actionv[actionid - 1].sample;
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
          unsigned int actionid = 100;
          int _len_samplers_out0 = 1;
          long * samplers_out = (long *) malloc(_len_samplers_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_samplers_out0; _i0++) {
            samplers_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kperf_action_get_samplers(actionid,samplers_out);
          printf("%d\n", benchRet); 
          free(samplers_out);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int actionid = 255;
          int _len_samplers_out0 = 65025;
          long * samplers_out = (long *) malloc(_len_samplers_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_samplers_out0; _i0++) {
            samplers_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kperf_action_get_samplers(actionid,samplers_out);
          printf("%d\n", benchRet); 
          free(samplers_out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int actionid = 10;
          int _len_samplers_out0 = 100;
          long * samplers_out = (long *) malloc(_len_samplers_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_samplers_out0; _i0++) {
            samplers_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kperf_action_get_samplers(actionid,samplers_out);
          printf("%d\n", benchRet); 
          free(samplers_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
