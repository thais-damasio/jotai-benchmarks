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
struct mtk_mdp_variant {int h_scale_down_max; int v_scale_down_max; int h_scale_up_max; int v_scale_up_max; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mtk_mdp_check_scaler_ratio(struct mtk_mdp_variant *var, int src_w,
				      int src_h, int dst_w, int dst_h, int rot)
{
	int tmp_w, tmp_h;

	if (rot == 90 || rot == 270) {
		tmp_w = dst_h;
		tmp_h = dst_w;
	} else {
		tmp_w = dst_w;
		tmp_h = dst_h;
	}

	if ((src_w / tmp_w) > var->h_scale_down_max ||
	    (src_h / tmp_h) > var->v_scale_down_max ||
	    (tmp_w / src_w) > var->h_scale_up_max ||
	    (tmp_h / src_h) > var->v_scale_up_max)
		return -EINVAL;

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

    // int-bounds
    case 0:
    {
          int src_w = 100;
          int src_h = 100;
          int dst_w = 100;
          int dst_h = 100;
          int rot = 100;
          int _len_var0 = 1;
          struct mtk_mdp_variant * var = (struct mtk_mdp_variant *) malloc(_len_var0*sizeof(struct mtk_mdp_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].h_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].h_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_mdp_check_scaler_ratio(var,src_w,src_h,dst_w,dst_h,rot);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int src_w = 255;
          int src_h = 255;
          int dst_w = 255;
          int dst_h = 255;
          int rot = 255;
          int _len_var0 = 65025;
          struct mtk_mdp_variant * var = (struct mtk_mdp_variant *) malloc(_len_var0*sizeof(struct mtk_mdp_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].h_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].h_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_mdp_check_scaler_ratio(var,src_w,src_h,dst_w,dst_h,rot);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int src_w = 10;
          int src_h = 10;
          int dst_w = 10;
          int dst_h = 10;
          int rot = 10;
          int _len_var0 = 100;
          struct mtk_mdp_variant * var = (struct mtk_mdp_variant *) malloc(_len_var0*sizeof(struct mtk_mdp_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].h_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].h_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].v_scale_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_mdp_check_scaler_ratio(var,src_w,src_h,dst_w,dst_h,rot);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
