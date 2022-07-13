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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ memid; } ;
struct TYPE_6__ {TYPE_1__ vardesc; } ;
typedef  TYPE_2__ TLBVarDesc ;
typedef  scalar_t__ MEMBERID ;

/* Variables and functions */

__attribute__((used)) static inline TLBVarDesc *TLB_get_vardesc_by_memberid(TLBVarDesc *vardescs,
        UINT n, MEMBERID memid)
{
    while(n){
        if(vardescs->vardesc.memid == memid)
            return vardescs;
        ++vardescs;
        --n;
    }
    return NULL;
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

    // big-arr
    case 0:
    {
          long n = 255;
          long memid = 255;
          int _len_vardescs0 = 65025;
          struct TYPE_6__ * vardescs = (struct TYPE_6__ *) malloc(_len_vardescs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_vardescs0; _i0++) {
            vardescs[_i0].vardesc.memid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = TLB_get_vardesc_by_memberid(vardescs,n,memid);
          free(vardescs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long n = 10;
          long memid = 10;
          int _len_vardescs0 = 100;
          struct TYPE_6__ * vardescs = (struct TYPE_6__ *) malloc(_len_vardescs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_vardescs0; _i0++) {
            vardescs[_i0].vardesc.memid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = TLB_get_vardesc_by_memberid(vardescs,n,memid);
          free(vardescs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
