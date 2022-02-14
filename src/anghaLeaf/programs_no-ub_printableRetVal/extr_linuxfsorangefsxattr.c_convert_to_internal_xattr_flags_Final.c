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

/* Variables and functions */
 int ORANGEFS_XATTR_CREATE ; 
 int ORANGEFS_XATTR_REPLACE ; 
 int XATTR_CREATE ; 
 int XATTR_REPLACE ; 

__attribute__((used)) static inline int convert_to_internal_xattr_flags(int setxattr_flags)
{
	int internal_flag = 0;

	if (setxattr_flags & XATTR_REPLACE) {
		/* Attribute must exist! */
		internal_flag = ORANGEFS_XATTR_REPLACE;
	} else if (setxattr_flags & XATTR_CREATE) {
		/* Attribute must not exist */
		internal_flag = ORANGEFS_XATTR_CREATE;
	}
	return internal_flag;
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
          int setxattr_flags = 255;
          int benchRet = convert_to_internal_xattr_flags(setxattr_flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
