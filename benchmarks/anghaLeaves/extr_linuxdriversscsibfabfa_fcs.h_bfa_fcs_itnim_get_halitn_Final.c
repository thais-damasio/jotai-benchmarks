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
struct bfa_itnim_s {int dummy; } ;
struct bfa_fcs_itnim_s {struct bfa_itnim_s* bfa_itnim; } ;

/* Variables and functions */

__attribute__((used)) static inline struct bfa_itnim_s *
bfa_fcs_itnim_get_halitn(struct bfa_fcs_itnim_s *itnim)
{
	return itnim->bfa_itnim;
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
          int _len_itnim0 = 1;
          struct bfa_fcs_itnim_s * itnim = (struct bfa_fcs_itnim_s *) malloc(_len_itnim0*sizeof(struct bfa_fcs_itnim_s));
          for(int _i0 = 0; _i0 < _len_itnim0; _i0++) {
              int _len_itnim__i0__bfa_itnim0 = 1;
          itnim[_i0].bfa_itnim = (struct bfa_itnim_s *) malloc(_len_itnim__i0__bfa_itnim0*sizeof(struct bfa_itnim_s));
          for(int _j0 = 0; _j0 < _len_itnim__i0__bfa_itnim0; _j0++) {
            itnim[_i0].bfa_itnim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bfa_itnim_s * benchRet = bfa_fcs_itnim_get_halitn(itnim);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itnim0; _aux++) {
          free(itnim[_aux].bfa_itnim);
          }
          free(itnim);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_itnim0 = 65025;
          struct bfa_fcs_itnim_s * itnim = (struct bfa_fcs_itnim_s *) malloc(_len_itnim0*sizeof(struct bfa_fcs_itnim_s));
          for(int _i0 = 0; _i0 < _len_itnim0; _i0++) {
              int _len_itnim__i0__bfa_itnim0 = 1;
          itnim[_i0].bfa_itnim = (struct bfa_itnim_s *) malloc(_len_itnim__i0__bfa_itnim0*sizeof(struct bfa_itnim_s));
          for(int _j0 = 0; _j0 < _len_itnim__i0__bfa_itnim0; _j0++) {
            itnim[_i0].bfa_itnim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bfa_itnim_s * benchRet = bfa_fcs_itnim_get_halitn(itnim);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itnim0; _aux++) {
          free(itnim[_aux].bfa_itnim);
          }
          free(itnim);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_itnim0 = 100;
          struct bfa_fcs_itnim_s * itnim = (struct bfa_fcs_itnim_s *) malloc(_len_itnim0*sizeof(struct bfa_fcs_itnim_s));
          for(int _i0 = 0; _i0 < _len_itnim0; _i0++) {
              int _len_itnim__i0__bfa_itnim0 = 1;
          itnim[_i0].bfa_itnim = (struct bfa_itnim_s *) malloc(_len_itnim__i0__bfa_itnim0*sizeof(struct bfa_itnim_s));
          for(int _j0 = 0; _j0 < _len_itnim__i0__bfa_itnim0; _j0++) {
            itnim[_i0].bfa_itnim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bfa_itnim_s * benchRet = bfa_fcs_itnim_get_halitn(itnim);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itnim0; _aux++) {
          free(itnim[_aux].bfa_itnim);
          }
          free(itnim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
