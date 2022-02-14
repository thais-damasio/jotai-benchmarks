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
struct drm_printer {struct drm_i915_error_state_buf* arg; int /*<<< orphan*/  printfn; } ;
struct drm_i915_error_state_buf {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  __i915_printfn_error ; 

__attribute__((used)) static inline struct drm_printer
i915_error_printer(struct drm_i915_error_state_buf *e)
{
	struct drm_printer p = {
		.printfn = __i915_printfn_error,
		.arg = e,
	};
	return p;
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
          int _len_e0 = 1;
          struct drm_i915_error_state_buf * e = (struct drm_i915_error_state_buf *) malloc(_len_e0*sizeof(struct drm_i915_error_state_buf));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_printer benchRet = i915_error_printer(e);
          printf("{{struct}} %p\n", &benchRet); 
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
