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
struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {int sc_width; int sc_height; } ;
struct TYPE_2__ {int dwidth; int dheight; } ;

/* Variables and functions */

__attribute__((used)) static void update_sizes(struct ra_ctx *ctx)
{
    struct priv *p = ctx->priv;
    p->sc_width = ctx->vo->dwidth ? ctx->vo->dwidth : 1;
    p->sc_height = ctx->vo->dheight ? ctx->vo->dheight : 1;
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
          int _len_ctx0 = 1;
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__vo0 = 1;
          ctx[_i0].vo = (struct TYPE_2__ *) malloc(_len_ctx__i0__vo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vo0; _j0++) {
            ctx[_i0].vo->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vo->dheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct priv *) malloc(_len_ctx__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->sc_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->sc_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_sizes(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vo);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__vo0 = 1;
          ctx[_i0].vo = (struct TYPE_2__ *) malloc(_len_ctx__i0__vo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vo0; _j0++) {
            ctx[_i0].vo->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vo->dheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct priv *) malloc(_len_ctx__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->sc_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->sc_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_sizes(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vo);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__vo0 = 1;
          ctx[_i0].vo = (struct TYPE_2__ *) malloc(_len_ctx__i0__vo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vo0; _j0++) {
            ctx[_i0].vo->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vo->dheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct priv *) malloc(_len_ctx__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->sc_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->sc_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_sizes(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vo);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}