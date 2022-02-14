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
struct eventfd_ctx {int flags; int count; } ;
typedef  int __u64 ;

/* Variables and functions */
 int EFD_SEMAPHORE ; 

__attribute__((used)) static void eventfd_ctx_do_read(struct eventfd_ctx *ctx, __u64 *cnt)
{
	*cnt = (ctx->flags & EFD_SEMAPHORE) ? 1 : ctx->count;
	ctx->count -= *cnt;
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
          int _len_ctx0 = 1;
          struct eventfd_ctx * ctx = (struct eventfd_ctx *) malloc(_len_ctx0*sizeof(struct eventfd_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cnt0 = 65025;
          int * cnt = (int *) malloc(_len_cnt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          eventfd_ctx_do_read(ctx,cnt);
          free(ctx);
          free(cnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
