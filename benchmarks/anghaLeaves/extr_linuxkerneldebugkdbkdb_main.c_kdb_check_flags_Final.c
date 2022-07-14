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
typedef  int kdb_cmdflags_t ;

/* Variables and functions */
 int KDB_ENABLE_ALL ; 
 int KDB_ENABLE_ALWAYS_SAFE ; 
 int KDB_ENABLE_MASK ; 
 int KDB_ENABLE_NO_ARGS_SHIFT ; 

__attribute__((used)) static inline bool kdb_check_flags(kdb_cmdflags_t flags, int permissions,
				   bool no_args)
{
	/* permissions comes from userspace so needs massaging slightly */
	permissions &= KDB_ENABLE_MASK;
	permissions |= KDB_ENABLE_ALWAYS_SAFE;

	/* some commands change group when launched with no arguments */
	if (no_args)
		permissions |= permissions << KDB_ENABLE_NO_ARGS_SHIFT;

	flags |= KDB_ENABLE_ALL;

	return permissions & flags;
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
          int flags = 100;
          int permissions = 100;
          int no_args = 100;
          int benchRet = kdb_check_flags(flags,permissions,no_args);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int permissions = 255;
          int no_args = 255;
          int benchRet = kdb_check_flags(flags,permissions,no_args);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int permissions = 10;
          int no_args = 10;
          int benchRet = kdb_check_flags(flags,permissions,no_args);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}