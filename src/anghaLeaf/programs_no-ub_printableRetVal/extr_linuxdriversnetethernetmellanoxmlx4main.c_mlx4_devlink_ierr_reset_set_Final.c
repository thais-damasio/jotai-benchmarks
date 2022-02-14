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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int /*<<< orphan*/  vbool; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  mlx4_internal_err_reset ; 

__attribute__((used)) static int mlx4_devlink_ierr_reset_set(struct devlink *devlink, u32 id,
				       struct devlink_param_gset_ctx *ctx)
{
	mlx4_internal_err_reset = ctx->val.vbool;
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
          int id = 255;
          int _len_devlink0 = 1;
          struct devlink * devlink = (struct devlink *) malloc(_len_devlink0*sizeof(struct devlink));
          for(int _i0 = 0; _i0 < _len_devlink0; _i0++) {
            devlink->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct devlink_param_gset_ctx * ctx = (struct devlink_param_gset_ctx *) malloc(_len_ctx0*sizeof(struct devlink_param_gset_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx->val.vbool = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_devlink_ierr_reset_set(devlink,id,ctx);
          printf("%d\n", benchRet); 
          free(devlink);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
