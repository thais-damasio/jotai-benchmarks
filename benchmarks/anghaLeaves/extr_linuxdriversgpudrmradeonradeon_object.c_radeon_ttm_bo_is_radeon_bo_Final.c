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
struct ttm_buffer_object {int /*<<< orphan*/ * destroy; } ;

/* Variables and functions */
 int /*<<< orphan*/  radeon_ttm_bo_destroy ; 

bool radeon_ttm_bo_is_radeon_bo(struct ttm_buffer_object *bo)
{
	if (bo->destroy == &radeon_ttm_bo_destroy)
		return true;
	return false;
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
          int _len_bo0 = 1;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__destroy0 = 1;
          bo[_i0].destroy = (int *) malloc(_len_bo__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bo__i0__destroy0; _j0++) {
            bo[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_ttm_bo_is_radeon_bo(bo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].destroy);
          }
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bo0 = 65025;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__destroy0 = 1;
          bo[_i0].destroy = (int *) malloc(_len_bo__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bo__i0__destroy0; _j0++) {
            bo[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_ttm_bo_is_radeon_bo(bo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].destroy);
          }
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bo0 = 100;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__destroy0 = 1;
          bo[_i0].destroy = (int *) malloc(_len_bo__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bo__i0__destroy0; _j0++) {
            bo[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_ttm_bo_is_radeon_bo(bo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].destroy);
          }
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}