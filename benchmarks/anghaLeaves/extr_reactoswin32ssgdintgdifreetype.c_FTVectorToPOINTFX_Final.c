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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int x; int y; } ;
struct TYPE_8__ {int value; int fract; } ;
struct TYPE_7__ {int value; int fract; } ;
struct TYPE_9__ {TYPE_2__ y; TYPE_1__ x; } ;
typedef  TYPE_3__ POINTFX ;
typedef  TYPE_4__ FT_Vector ;

/* Variables and functions */

__attribute__((used)) static __inline void FTVectorToPOINTFX(FT_Vector *vec, POINTFX *pt)
{
    pt->x.value = vec->x >> 6;
    pt->x.fract = (vec->x & 0x3f) << 10;
    pt->x.fract |= ((pt->x.fract >> 6) | (pt->x.fract >> 12));
    pt->y.value = vec->y >> 6;
    pt->y.fract = (vec->y & 0x3f) << 10;
    pt->y.fract |= ((pt->y.fract >> 6) | (pt->y.fract >> 12));
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
          int _len_vec0 = 1;
          struct TYPE_10__ * vec = (struct TYPE_10__ *) malloc(_len_vec0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pt0 = 1;
          struct TYPE_9__ * pt = (struct TYPE_9__ *) malloc(_len_pt0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].y.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].y.fract = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.fract = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FTVectorToPOINTFX(vec,pt);
          free(vec);
          free(pt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vec0 = 65025;
          struct TYPE_10__ * vec = (struct TYPE_10__ *) malloc(_len_vec0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pt0 = 65025;
          struct TYPE_9__ * pt = (struct TYPE_9__ *) malloc(_len_pt0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].y.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].y.fract = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.fract = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FTVectorToPOINTFX(vec,pt);
          free(vec);
          free(pt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vec0 = 100;
          struct TYPE_10__ * vec = (struct TYPE_10__ *) malloc(_len_vec0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pt0 = 100;
          struct TYPE_9__ * pt = (struct TYPE_9__ *) malloc(_len_pt0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].y.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].y.fract = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.value = ((-2 * (next_i()%2)) + 1) * next_i();
        pt[_i0].x.fract = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FTVectorToPOINTFX(vec,pt);
          free(vec);
          free(pt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
