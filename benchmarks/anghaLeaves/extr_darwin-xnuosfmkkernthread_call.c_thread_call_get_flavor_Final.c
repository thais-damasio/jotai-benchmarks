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
typedef  TYPE_1__* thread_call_t ;
typedef  int /*<<< orphan*/  thread_call_flavor_t ;
struct TYPE_3__ {int tc_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  TCF_ABSOLUTE ; 
 int /*<<< orphan*/  TCF_CONTINUOUS ; 
 int THREAD_CALL_CONTINUOUS ; 

__attribute__((used)) static inline thread_call_flavor_t
thread_call_get_flavor(thread_call_t call)
{
	return (call->tc_flags & THREAD_CALL_CONTINUOUS) ? TCF_CONTINUOUS : TCF_ABSOLUTE;
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
          int _len_call0 = 1;
          struct TYPE_3__ * call = (struct TYPE_3__ *) malloc(_len_call0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].tc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thread_call_get_flavor(call);
          printf("%d\n", benchRet); 
          free(call);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_call0 = 65025;
          struct TYPE_3__ * call = (struct TYPE_3__ *) malloc(_len_call0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].tc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thread_call_get_flavor(call);
          printf("%d\n", benchRet); 
          free(call);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_call0 = 100;
          struct TYPE_3__ * call = (struct TYPE_3__ *) malloc(_len_call0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].tc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thread_call_get_flavor(call);
          printf("%d\n", benchRet); 
          free(call);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
