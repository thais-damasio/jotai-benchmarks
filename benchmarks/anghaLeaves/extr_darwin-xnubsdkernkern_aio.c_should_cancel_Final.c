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
typedef  scalar_t__ user_addr_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_4__ {int aio_fildes; } ;
struct TYPE_5__ {scalar_t__ uaiocbp; TYPE_1__ aiocb; } ;
typedef  TYPE_2__ aio_workq_entry ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 scalar_t__ USER_ADDR_NULL ; 

__attribute__((used)) static boolean_t
should_cancel(aio_workq_entry *entryp, user_addr_t aiocbp, int fd) 
{
	if ( (aiocbp == USER_ADDR_NULL && fd == 0) ||
			(aiocbp != USER_ADDR_NULL && entryp->uaiocbp == aiocbp) ||
			(aiocbp == USER_ADDR_NULL && fd == entryp->aiocb.aio_fildes) ) {
		return TRUE;
	}

	return FALSE;
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
          long aiocbp = 100;
          int fd = 100;
          int _len_entryp0 = 1;
          struct TYPE_5__ * entryp = (struct TYPE_5__ *) malloc(_len_entryp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entryp0; _i0++) {
            entryp[_i0].uaiocbp = ((-2 * (next_i()%2)) + 1) * next_i();
        entryp[_i0].aiocb.aio_fildes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_cancel(entryp,aiocbp,fd);
          printf("%d\n", benchRet); 
          free(entryp);
        
        break;
    }
    // big-arr
    case 1:
    {
          long aiocbp = 255;
          int fd = 255;
          int _len_entryp0 = 65025;
          struct TYPE_5__ * entryp = (struct TYPE_5__ *) malloc(_len_entryp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entryp0; _i0++) {
            entryp[_i0].uaiocbp = ((-2 * (next_i()%2)) + 1) * next_i();
        entryp[_i0].aiocb.aio_fildes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_cancel(entryp,aiocbp,fd);
          printf("%d\n", benchRet); 
          free(entryp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long aiocbp = 10;
          int fd = 10;
          int _len_entryp0 = 100;
          struct TYPE_5__ * entryp = (struct TYPE_5__ *) malloc(_len_entryp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entryp0; _i0++) {
            entryp[_i0].uaiocbp = ((-2 * (next_i()%2)) + 1) * next_i();
        entryp[_i0].aiocb.aio_fildes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_cancel(entryp,aiocbp,fd);
          printf("%d\n", benchRet); 
          free(entryp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
