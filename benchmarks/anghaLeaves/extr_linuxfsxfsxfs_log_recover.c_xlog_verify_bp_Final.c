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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
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
typedef  scalar_t__ xfs_daddr_t ;
struct xlog {scalar_t__ l_logBBsize; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
xlog_verify_bp(
	struct xlog	*log,
	xfs_daddr_t	blk_no,
	int		bbcount)
{
	if (blk_no < 0 || blk_no >= log->l_logBBsize)
		return false;
	if (bbcount <= 0 || (blk_no + bbcount) > log->l_logBBsize)
		return false;
	return true;
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
          long blk_no = 100;
          int bbcount = 100;
          int _len_log0 = 1;
          struct xlog * log = (struct xlog *) malloc(_len_log0*sizeof(struct xlog));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].l_logBBsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xlog_verify_bp(log,blk_no,bbcount);
          printf("%d\n", benchRet); 
          free(log);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long blk_no = 10;
          int bbcount = 10;
          int _len_log0 = 100;
          struct xlog * log = (struct xlog *) malloc(_len_log0*sizeof(struct xlog));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].l_logBBsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xlog_verify_bp(log,blk_no,bbcount);
          printf("%d\n", benchRet); 
          free(log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
