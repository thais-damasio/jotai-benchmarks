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
struct TYPE_2__ {int level; } ;
struct dim_channel {int /*<<< orphan*/  done_sw_buffers_number; TYPE_1__ state; } ;
struct dim_ch_state_t {int ready; int /*<<< orphan*/  done_buffers; } ;

/* Variables and functions */

struct dim_ch_state_t *dim_get_channel_state(struct dim_channel *ch,
					     struct dim_ch_state_t *state_ptr)
{
	if (!ch || !state_ptr)
		return NULL;

	state_ptr->ready = ch->state.level < 2;
	state_ptr->done_buffers = ch->done_sw_buffers_number;

	return state_ptr;
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
          int _len_ch0 = 1;
          struct dim_channel * ch = (struct dim_channel *) malloc(_len_ch0*sizeof(struct dim_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].done_sw_buffers_number = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].state.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_ptr0 = 1;
          struct dim_ch_state_t * state_ptr = (struct dim_ch_state_t *) malloc(_len_state_ptr0*sizeof(struct dim_ch_state_t));
          for(int _i0 = 0; _i0 < _len_state_ptr0; _i0++) {
            state_ptr[_i0].ready = ((-2 * (next_i()%2)) + 1) * next_i();
        state_ptr[_i0].done_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dim_ch_state_t * benchRet = dim_get_channel_state(ch,state_ptr);
          printf("%d\n", (*benchRet).ready);
          printf("%d\n", (*benchRet).done_buffers);
          free(ch);
          free(state_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ch0 = 65025;
          struct dim_channel * ch = (struct dim_channel *) malloc(_len_ch0*sizeof(struct dim_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].done_sw_buffers_number = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].state.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_ptr0 = 65025;
          struct dim_ch_state_t * state_ptr = (struct dim_ch_state_t *) malloc(_len_state_ptr0*sizeof(struct dim_ch_state_t));
          for(int _i0 = 0; _i0 < _len_state_ptr0; _i0++) {
            state_ptr[_i0].ready = ((-2 * (next_i()%2)) + 1) * next_i();
        state_ptr[_i0].done_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dim_ch_state_t * benchRet = dim_get_channel_state(ch,state_ptr);
          printf("%d\n", (*benchRet).ready);
          printf("%d\n", (*benchRet).done_buffers);
          free(ch);
          free(state_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ch0 = 100;
          struct dim_channel * ch = (struct dim_channel *) malloc(_len_ch0*sizeof(struct dim_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].done_sw_buffers_number = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].state.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_ptr0 = 100;
          struct dim_ch_state_t * state_ptr = (struct dim_ch_state_t *) malloc(_len_state_ptr0*sizeof(struct dim_ch_state_t));
          for(int _i0 = 0; _i0 < _len_state_ptr0; _i0++) {
            state_ptr[_i0].ready = ((-2 * (next_i()%2)) + 1) * next_i();
        state_ptr[_i0].done_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dim_ch_state_t * benchRet = dim_get_channel_state(ch,state_ptr);
          printf("%d\n", (*benchRet).ready);
          printf("%d\n", (*benchRet).done_buffers);
          free(ch);
          free(state_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
