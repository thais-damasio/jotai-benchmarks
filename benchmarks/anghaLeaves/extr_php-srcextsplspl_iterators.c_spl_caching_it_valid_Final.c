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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ caching; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef  TYPE_3__ spl_dual_it_object ;

/* Variables and functions */
 int CIT_VALID ; 
 int FAILURE ; 
 int SUCCESS ; 

__attribute__((used)) static inline int spl_caching_it_valid(spl_dual_it_object *intern)
{
	return intern->u.caching.flags & CIT_VALID ? SUCCESS : FAILURE;
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
          int _len_intern0 = 1;
          struct TYPE_7__ * intern = (struct TYPE_7__ *) malloc(_len_intern0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_intern0; _i0++) {
            intern[_i0].u.caching.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spl_caching_it_valid(intern);
          printf("%d\n", benchRet); 
          free(intern);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_intern0 = 65025;
          struct TYPE_7__ * intern = (struct TYPE_7__ *) malloc(_len_intern0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_intern0; _i0++) {
            intern[_i0].u.caching.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spl_caching_it_valid(intern);
          printf("%d\n", benchRet); 
          free(intern);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_intern0 = 100;
          struct TYPE_7__ * intern = (struct TYPE_7__ *) malloc(_len_intern0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_intern0; _i0++) {
            intern[_i0].u.caching.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spl_caching_it_valid(intern);
          printf("%d\n", benchRet); 
          free(intern);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
