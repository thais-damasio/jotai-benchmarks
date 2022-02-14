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
typedef  int /*<<< orphan*/  u8 ;
struct int_ch_state {scalar_t__ service_counter; scalar_t__ request_counter; scalar_t__ level; } ;
struct dim_channel {int /*<<< orphan*/  done_sw_buffers_number; struct int_ch_state state; } ;

/* Variables and functions */
 int /*<<< orphan*/  DIM_ERR_UNDERFLOW ; 
 int /*<<< orphan*/  DIM_NO_ERROR ; 

__attribute__((used)) static u8 channel_service(struct dim_channel *ch)
{
	struct int_ch_state *const state = &ch->state;

	if (state->service_counter != state->request_counter) {
		state->service_counter++;
		if (state->level == 0)
			return DIM_ERR_UNDERFLOW;

		--state->level;
		ch->done_sw_buffers_number++;
	}

	return DIM_NO_ERROR;
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
          int _len_ch0 = 1;
          struct dim_channel * ch = (struct dim_channel *) malloc(_len_ch0*sizeof(struct dim_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch->done_sw_buffers_number = ((-2 * (next_i()%2)) + 1) * next_i();
        ch->state.service_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        ch->state.request_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        ch->state.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = channel_service(ch);
          printf("%d\n", benchRet); 
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}