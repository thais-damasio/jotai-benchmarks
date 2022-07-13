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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* state; int /*<<< orphan*/  cur_header_name_len; scalar_t__ parse_offset; scalar_t__ raw_buffer; int /*<<< orphan*/  cur_header_value; } ;
typedef  TYPE_1__ HttpResponseState ;

/* Variables and functions */
#define  CARRIAGE_RETURN 129 
 void* HTTP_STATE_ALMOST_DONE ; 
 void* HTTP_STATE_ERROR ; 
 void* HTTP_STATE_HEADER_VALUE ; 
#define  SEP_CHAR 128 

__attribute__((used)) static void
http_parse_header_name(HttpResponseState *state, const char next)
{
	switch (next)
	{
		case SEP_CHAR:
			state->state = HTTP_STATE_HEADER_VALUE;
			state->cur_header_value = state->raw_buffer + state->parse_offset + 1;
			break;
		case CARRIAGE_RETURN:
			if (state->cur_header_name_len == 0)
			{
				state->state = HTTP_STATE_ALMOST_DONE;
				break;
			}
			else
			{
				/*
				 * I'm guessing getting a carriage return in the middle of
				 * field
				 */
				/* name is bad... */
				state->state = HTTP_STATE_ERROR;
				break;
			}
		default:
			/* Header names are only alphabetic chars */
			if (('a' <= next && next <= 'z') || ('A' <= next && next <= 'Z') || next == '-')
			{
				/* Good, then the next call will save this char */
				state->cur_header_name_len++;
				break;
			}
			state->state = HTTP_STATE_ERROR;
			break;
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

    // int-bounds
    case 0:
    {
          const char next = 100;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].cur_header_name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].parse_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].raw_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cur_header_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          http_parse_header_name(state,next);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          const char next = 255;
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].cur_header_name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].parse_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].raw_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cur_header_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          http_parse_header_name(state,next);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const char next = 10;
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].cur_header_name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].parse_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].raw_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cur_header_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          http_parse_header_name(state,next);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
