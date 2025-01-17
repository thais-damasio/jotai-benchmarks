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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct TYPE_2__ {int payload; } ;
struct intel_pt_decoder {int cbr_payload; unsigned int cbr; unsigned int cbr_cyc_to_tsc; unsigned int max_non_turbo_ratio_fp; TYPE_1__ packet; } ;

/* Variables and functions */

__attribute__((used)) static void intel_pt_calc_cbr(struct intel_pt_decoder *decoder)
{
	unsigned int cbr = decoder->packet.payload & 0xff;

	decoder->cbr_payload = decoder->packet.payload;

	if (decoder->cbr == cbr)
		return;

	decoder->cbr = cbr;
	decoder->cbr_cyc_to_tsc = decoder->max_non_turbo_ratio_fp / cbr;
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
          int _len_decoder0 = 1;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].cbr_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].cbr = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].cbr_cyc_to_tsc = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].max_non_turbo_ratio_fp = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].packet.payload = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          intel_pt_calc_cbr(decoder);
          free(decoder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
