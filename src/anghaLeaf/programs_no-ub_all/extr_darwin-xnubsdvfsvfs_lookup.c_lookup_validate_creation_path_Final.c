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
struct componentname {int cn_flags; } ;
struct nameidata {int ni_flag; struct componentname ni_cnd; } ;

/* Variables and functions */
 int ENOENT ; 
 int EROFS ; 
 int ISLASTCN ; 
 int NAMEI_TRAILINGSLASH ; 
 int RDONLY ; 
 int WILLBEDIR ; 

int 
lookup_validate_creation_path(struct nameidata *ndp)
{
	struct componentname *cnp = &ndp->ni_cnd;

	/*
	 * If creating and at end of pathname, then can consider
	 * allowing file to be created.
	 */
	if (cnp->cn_flags & RDONLY) {
		return EROFS;
	}
	if ((cnp->cn_flags & ISLASTCN) && (ndp->ni_flag & NAMEI_TRAILINGSLASH) && !(cnp->cn_flags & WILLBEDIR)) {
		return ENOENT;
	}
	
	return 0;
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
          int _len_ndp0 = 1;
          struct nameidata * ndp = (struct nameidata *) malloc(_len_ndp0*sizeof(struct nameidata));
          for(int _i0 = 0; _i0 < _len_ndp0; _i0++) {
            ndp->ni_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        ndp->ni_cnd.cn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lookup_validate_creation_path(ndp);
          printf("%d\n", benchRet); 
          free(ndp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
