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
struct ring_buffer_event {scalar_t__ type_len; int /*<<< orphan*/  time_delta; } ;

/* Variables and functions */
 scalar_t__ RINGBUF_TYPE_PADDING ; 

__attribute__((used)) static inline int rb_null_event(struct ring_buffer_event *event)
{
	return event->type_len == RINGBUF_TYPE_PADDING && !event->time_delta;
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
          int _len_event0 = 1;
          struct ring_buffer_event * event = (struct ring_buffer_event *) malloc(_len_event0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type_len = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].time_delta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rb_null_event(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_event0 = 65025;
          struct ring_buffer_event * event = (struct ring_buffer_event *) malloc(_len_event0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type_len = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].time_delta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rb_null_event(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_event0 = 100;
          struct ring_buffer_event * event = (struct ring_buffer_event *) malloc(_len_event0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type_len = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].time_delta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rb_null_event(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
