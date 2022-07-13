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
struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int /*<<< orphan*/  sym_to_val; int /*<<< orphan*/  val_to_sym; } ;

/* Variables and functions */

int pvr2_ctrl_has_custom_symbols(struct pvr2_ctrl *cptr)
{
	if (!cptr) return 0;
	if (!cptr->info->val_to_sym) return 0;
	if (!cptr->info->sym_to_val) return 0;
	return !0;
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
          int _len_cptr0 = 1;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__info0 = 1;
          cptr[_i0].info = (struct TYPE_2__ *) malloc(_len_cptr__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cptr__i0__info0; _j0++) {
            cptr[_i0].info->sym_to_val = ((-2 * (next_i()%2)) + 1) * next_i();
        cptr[_i0].info->val_to_sym = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pvr2_ctrl_has_custom_symbols(cptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].info);
          }
          free(cptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cptr0 = 65025;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__info0 = 1;
          cptr[_i0].info = (struct TYPE_2__ *) malloc(_len_cptr__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cptr__i0__info0; _j0++) {
            cptr[_i0].info->sym_to_val = ((-2 * (next_i()%2)) + 1) * next_i();
        cptr[_i0].info->val_to_sym = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pvr2_ctrl_has_custom_symbols(cptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].info);
          }
          free(cptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cptr0 = 100;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__info0 = 1;
          cptr[_i0].info = (struct TYPE_2__ *) malloc(_len_cptr__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cptr__i0__info0; _j0++) {
            cptr[_i0].info->sym_to_val = ((-2 * (next_i()%2)) + 1) * next_i();
        cptr[_i0].info->val_to_sym = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pvr2_ctrl_has_custom_symbols(cptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].info);
          }
          free(cptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
