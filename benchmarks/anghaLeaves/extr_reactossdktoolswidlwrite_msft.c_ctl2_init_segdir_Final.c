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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_2__* typelib_segdir; } ;
typedef  TYPE_1__ msft_typelib_t ;
struct TYPE_5__ {int offset; int res08; int res0c; scalar_t__ length; } ;
typedef  TYPE_2__ MSFT_pSeg ;

/* Variables and functions */
 int MSFT_SEG_MAX ; 
 size_t MSFT_SEG_TYPEINFO ; 

__attribute__((used)) static void ctl2_init_segdir(
	msft_typelib_t *typelib) /* [I] The typelib to initialize. */
{
    int i;
    MSFT_pSeg *segdir;

    segdir = &typelib->typelib_segdir[MSFT_SEG_TYPEINFO];

    for (i = 0; i < MSFT_SEG_MAX; i++) {
	segdir[i].offset = -1;
	segdir[i].length = 0;
	segdir[i].res08 = -1;
	segdir[i].res0c = 0x0f;
    }
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
          int _len_typelib0 = 1;
          struct TYPE_4__ * typelib = (struct TYPE_4__ *) malloc(_len_typelib0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_typelib0; _i0++) {
              int _len_typelib__i0__typelib_segdir0 = 1;
          typelib[_i0].typelib_segdir = (struct TYPE_5__ *) malloc(_len_typelib__i0__typelib_segdir0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_typelib__i0__typelib_segdir0; _j0++) {
            typelib[_i0].typelib_segdir->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res08 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res0c = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ctl2_init_segdir(typelib);
          for(int _aux = 0; _aux < _len_typelib0; _aux++) {
          free(typelib[_aux].typelib_segdir);
          }
          free(typelib);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_typelib0 = 65025;
          struct TYPE_4__ * typelib = (struct TYPE_4__ *) malloc(_len_typelib0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_typelib0; _i0++) {
              int _len_typelib__i0__typelib_segdir0 = 1;
          typelib[_i0].typelib_segdir = (struct TYPE_5__ *) malloc(_len_typelib__i0__typelib_segdir0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_typelib__i0__typelib_segdir0; _j0++) {
            typelib[_i0].typelib_segdir->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res08 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res0c = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ctl2_init_segdir(typelib);
          for(int _aux = 0; _aux < _len_typelib0; _aux++) {
          free(typelib[_aux].typelib_segdir);
          }
          free(typelib);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_typelib0 = 100;
          struct TYPE_4__ * typelib = (struct TYPE_4__ *) malloc(_len_typelib0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_typelib0; _i0++) {
              int _len_typelib__i0__typelib_segdir0 = 1;
          typelib[_i0].typelib_segdir = (struct TYPE_5__ *) malloc(_len_typelib__i0__typelib_segdir0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_typelib__i0__typelib_segdir0; _j0++) {
            typelib[_i0].typelib_segdir->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res08 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->res0c = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_segdir->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ctl2_init_segdir(typelib);
          for(int _aux = 0; _aux < _len_typelib0; _aux++) {
          free(typelib[_aux].typelib_segdir);
          }
          free(typelib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
