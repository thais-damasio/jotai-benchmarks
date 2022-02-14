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
struct snd_rawmidi_runtime {int /*<<< orphan*/  buffer_size; int /*<<< orphan*/  avail; scalar_t__ hw_ptr; scalar_t__ appl_ptr; scalar_t__ drain; } ;

/* Variables and functions */

__attribute__((used)) static void __reset_runtime_ptrs(struct snd_rawmidi_runtime *runtime,
				 bool is_input)
{
	runtime->drain = 0;
	runtime->appl_ptr = runtime->hw_ptr = 0;
	runtime->avail = is_input ? 0 : runtime->buffer_size;
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
          int is_input = 255;
          int _len_runtime0 = 1;
          struct snd_rawmidi_runtime * runtime = (struct snd_rawmidi_runtime *) malloc(_len_runtime0*sizeof(struct snd_rawmidi_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime->buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime->avail = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime->hw_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime->appl_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime->drain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __reset_runtime_ptrs(runtime,is_input);
          free(runtime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}