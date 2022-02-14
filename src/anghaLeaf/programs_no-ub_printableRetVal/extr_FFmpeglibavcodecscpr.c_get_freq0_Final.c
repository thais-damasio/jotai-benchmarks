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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int range; scalar_t__ code1; scalar_t__ code; } ;
typedef  TYPE_1__ RangeCoder ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 

__attribute__((used)) static int get_freq0(RangeCoder *rc, uint32_t total_freq, uint32_t *freq)
{
    if (rc->range == 0)
        return AVERROR_INVALIDDATA;

    *freq = total_freq * (uint64_t)(rc->code - rc->code1) / rc->range;

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
          int total_freq = 255;
          int _len_rc0 = 1;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc->range = ((-2 * (next_i()%2)) + 1) * next_i();
        rc->code1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_freq0 = 65025;
          int * freq = (int *) malloc(_len_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freq0; _i0++) {
            freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_freq0(rc,total_freq,freq);
          printf("%d\n", benchRet); 
          free(rc);
          free(freq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
