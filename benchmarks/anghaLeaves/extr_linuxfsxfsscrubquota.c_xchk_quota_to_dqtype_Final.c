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
typedef  int /*<<< orphan*/  uint ;
struct xfs_scrub {TYPE_1__* sm; } ;
struct TYPE_2__ {int sm_type; } ;

/* Variables and functions */
 int /*<<< orphan*/  XFS_DQ_GROUP ; 
 int /*<<< orphan*/  XFS_DQ_PROJ ; 
 int /*<<< orphan*/  XFS_DQ_USER ; 
#define  XFS_SCRUB_TYPE_GQUOTA 130 
#define  XFS_SCRUB_TYPE_PQUOTA 129 
#define  XFS_SCRUB_TYPE_UQUOTA 128 

__attribute__((used)) static inline uint
xchk_quota_to_dqtype(
	struct xfs_scrub	*sc)
{
	switch (sc->sm->sm_type) {
	case XFS_SCRUB_TYPE_UQUOTA:
		return XFS_DQ_USER;
	case XFS_SCRUB_TYPE_GQUOTA:
		return XFS_DQ_GROUP;
	case XFS_SCRUB_TYPE_PQUOTA:
		return XFS_DQ_PROJ;
	default:
		return 0;
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
          int _len_sc0 = 1;
          struct xfs_scrub * sc = (struct xfs_scrub *) malloc(_len_sc0*sizeof(struct xfs_scrub));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__sm0 = 1;
          sc[_i0].sm = (struct TYPE_2__ *) malloc(_len_sc__i0__sm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__sm0; _j0++) {
            sc[_i0].sm->sm_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xchk_quota_to_dqtype(sc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].sm);
          }
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sc0 = 65025;
          struct xfs_scrub * sc = (struct xfs_scrub *) malloc(_len_sc0*sizeof(struct xfs_scrub));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__sm0 = 1;
          sc[_i0].sm = (struct TYPE_2__ *) malloc(_len_sc__i0__sm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__sm0; _j0++) {
            sc[_i0].sm->sm_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xchk_quota_to_dqtype(sc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].sm);
          }
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sc0 = 100;
          struct xfs_scrub * sc = (struct xfs_scrub *) malloc(_len_sc0*sizeof(struct xfs_scrub));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__sm0 = 1;
          sc[_i0].sm = (struct TYPE_2__ *) malloc(_len_sc__i0__sm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__sm0; _j0++) {
            sc[_i0].sm->sm_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xchk_quota_to_dqtype(sc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].sm);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
