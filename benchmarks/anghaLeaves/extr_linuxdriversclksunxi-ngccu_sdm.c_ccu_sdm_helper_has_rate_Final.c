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
struct ccu_sdm_internal {unsigned int table_size; TYPE_1__* table; } ;
struct ccu_common {int features; } ;
struct TYPE_2__ {unsigned long rate; } ;

/* Variables and functions */
 int CCU_FEATURE_SIGMA_DELTA_MOD ; 

bool ccu_sdm_helper_has_rate(struct ccu_common *common,
			     struct ccu_sdm_internal *sdm,
			     unsigned long rate)
{
	unsigned int i;

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return false;

	for (i = 0; i < sdm->table_size; i++)
		if (sdm->table[i].rate == rate)
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
          unsigned long rate = 100;
          int _len_common0 = 1;
          struct ccu_common * common = (struct ccu_common *) malloc(_len_common0*sizeof(struct ccu_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdm0 = 1;
          struct ccu_sdm_internal * sdm = (struct ccu_sdm_internal *) malloc(_len_sdm0*sizeof(struct ccu_sdm_internal));
          for(int _i0 = 0; _i0 < _len_sdm0; _i0++) {
            sdm[_i0].table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdm__i0__table0 = 1;
          sdm[_i0].table = (struct TYPE_2__ *) malloc(_len_sdm__i0__table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdm__i0__table0; _j0++) {
            sdm[_i0].table->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ccu_sdm_helper_has_rate(common,sdm,rate);
          printf("%d\n", benchRet); 
          free(common);
          for(int _aux = 0; _aux < _len_sdm0; _aux++) {
          free(sdm[_aux].table);
          }
          free(sdm);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rate = 255;
          int _len_common0 = 65025;
          struct ccu_common * common = (struct ccu_common *) malloc(_len_common0*sizeof(struct ccu_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdm0 = 65025;
          struct ccu_sdm_internal * sdm = (struct ccu_sdm_internal *) malloc(_len_sdm0*sizeof(struct ccu_sdm_internal));
          for(int _i0 = 0; _i0 < _len_sdm0; _i0++) {
            sdm[_i0].table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdm__i0__table0 = 1;
          sdm[_i0].table = (struct TYPE_2__ *) malloc(_len_sdm__i0__table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdm__i0__table0; _j0++) {
            sdm[_i0].table->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ccu_sdm_helper_has_rate(common,sdm,rate);
          printf("%d\n", benchRet); 
          free(common);
          for(int _aux = 0; _aux < _len_sdm0; _aux++) {
          free(sdm[_aux].table);
          }
          free(sdm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rate = 10;
          int _len_common0 = 100;
          struct ccu_common * common = (struct ccu_common *) malloc(_len_common0*sizeof(struct ccu_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdm0 = 100;
          struct ccu_sdm_internal * sdm = (struct ccu_sdm_internal *) malloc(_len_sdm0*sizeof(struct ccu_sdm_internal));
          for(int _i0 = 0; _i0 < _len_sdm0; _i0++) {
            sdm[_i0].table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdm__i0__table0 = 1;
          sdm[_i0].table = (struct TYPE_2__ *) malloc(_len_sdm__i0__table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdm__i0__table0; _j0++) {
            sdm[_i0].table->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ccu_sdm_helper_has_rate(common,sdm,rate);
          printf("%d\n", benchRet); 
          free(common);
          for(int _aux = 0; _aux < _len_sdm0; _aux++) {
          free(sdm[_aux].table);
          }
          free(sdm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
