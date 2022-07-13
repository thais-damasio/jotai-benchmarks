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
       3            linked\n\
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
struct ra_tex_gl {int /*<<< orphan*/  target; int /*<<< orphan*/  texture; } ;
struct ra_tex {struct ra_tex_gl* priv; } ;
struct ra {int dummy; } ;
typedef  int /*<<< orphan*/  GLuint ;
typedef  int /*<<< orphan*/  GLenum ;

/* Variables and functions */

void ra_gl_get_raw_tex(struct ra *ra, struct ra_tex *tex,
                       GLuint *out_texture, GLenum *out_target)
{
    struct ra_tex_gl *tex_gl = tex->priv;
    *out_texture = tex_gl->texture;
    *out_target = tex_gl->target;
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
          int _len_ra0 = 1;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
            ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tex0 = 1;
          struct ra_tex * tex = (struct ra_tex *) malloc(_len_tex0*sizeof(struct ra_tex));
          for(int _i0 = 0; _i0 < _len_tex0; _i0++) {
              int _len_tex__i0__priv0 = 1;
          tex[_i0].priv = (struct ra_tex_gl *) malloc(_len_tex__i0__priv0*sizeof(struct ra_tex_gl));
          for(int _j0 = 0; _j0 < _len_tex__i0__priv0; _j0++) {
            tex[_i0].priv->target = ((-2 * (next_i()%2)) + 1) * next_i();
        tex[_i0].priv->texture = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_texture0 = 1;
          int * out_texture = (int *) malloc(_len_out_texture0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_texture0; _i0++) {
            out_texture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_target0 = 1;
          int * out_target = (int *) malloc(_len_out_target0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_target0; _i0++) {
            out_target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ra_gl_get_raw_tex(ra,tex,out_texture,out_target);
          free(ra);
          for(int _aux = 0; _aux < _len_tex0; _aux++) {
          free(tex[_aux].priv);
          }
          free(tex);
          free(out_texture);
          free(out_target);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ra0 = 65025;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
            ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tex0 = 65025;
          struct ra_tex * tex = (struct ra_tex *) malloc(_len_tex0*sizeof(struct ra_tex));
          for(int _i0 = 0; _i0 < _len_tex0; _i0++) {
              int _len_tex__i0__priv0 = 1;
          tex[_i0].priv = (struct ra_tex_gl *) malloc(_len_tex__i0__priv0*sizeof(struct ra_tex_gl));
          for(int _j0 = 0; _j0 < _len_tex__i0__priv0; _j0++) {
            tex[_i0].priv->target = ((-2 * (next_i()%2)) + 1) * next_i();
        tex[_i0].priv->texture = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_texture0 = 65025;
          int * out_texture = (int *) malloc(_len_out_texture0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_texture0; _i0++) {
            out_texture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_target0 = 65025;
          int * out_target = (int *) malloc(_len_out_target0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_target0; _i0++) {
            out_target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ra_gl_get_raw_tex(ra,tex,out_texture,out_target);
          free(ra);
          for(int _aux = 0; _aux < _len_tex0; _aux++) {
          free(tex[_aux].priv);
          }
          free(tex);
          free(out_texture);
          free(out_target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ra0 = 100;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
            ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tex0 = 100;
          struct ra_tex * tex = (struct ra_tex *) malloc(_len_tex0*sizeof(struct ra_tex));
          for(int _i0 = 0; _i0 < _len_tex0; _i0++) {
              int _len_tex__i0__priv0 = 1;
          tex[_i0].priv = (struct ra_tex_gl *) malloc(_len_tex__i0__priv0*sizeof(struct ra_tex_gl));
          for(int _j0 = 0; _j0 < _len_tex__i0__priv0; _j0++) {
            tex[_i0].priv->target = ((-2 * (next_i()%2)) + 1) * next_i();
        tex[_i0].priv->texture = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_texture0 = 100;
          int * out_texture = (int *) malloc(_len_out_texture0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_texture0; _i0++) {
            out_texture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_target0 = 100;
          int * out_target = (int *) malloc(_len_out_target0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_target0; _i0++) {
            out_target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ra_gl_get_raw_tex(ra,tex,out_texture,out_target);
          free(ra);
          for(int _aux = 0; _aux < _len_tex0; _aux++) {
          free(tex[_aux].priv);
          }
          free(tex);
          free(out_texture);
          free(out_target);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_ra0 = 1;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
            ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tex0 = 1;
          struct ra_tex * tex = (struct ra_tex *) malloc(_len_tex0*sizeof(struct ra_tex));
          for(int _i0 = 0; _i0 < _len_tex0; _i0++) {
              int _len_tex__i0__priv0 = 1;
          tex[_i0].priv = (struct ra_tex_gl *) malloc(_len_tex__i0__priv0*sizeof(struct ra_tex_gl));
          for(int _j0 = 0; _j0 < _len_tex__i0__priv0; _j0++) {
            tex[_i0].priv->target = ((-2 * (next_i()%2)) + 1) * next_i();
        tex[_i0].priv->texture = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_texture0 = 1;
          int * out_texture = (int *) malloc(_len_out_texture0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_texture0; _i0++) {
            out_texture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_target0 = 1;
          int * out_target = (int *) malloc(_len_out_target0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_target0; _i0++) {
            out_target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ra_gl_get_raw_tex(ra,tex,out_texture,out_target);
          free(ra);
          for(int _aux = 0; _aux < _len_tex0; _aux++) {
          free(tex[_aux].priv);
          }
          free(tex);
          free(out_texture);
          free(out_target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
