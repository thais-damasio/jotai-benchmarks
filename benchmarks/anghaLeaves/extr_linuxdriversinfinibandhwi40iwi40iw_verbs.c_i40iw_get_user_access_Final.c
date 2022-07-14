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
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */
 int /*<<< orphan*/  I40IW_ACCESS_FLAGS_BIND_WINDOW ; 
 int /*<<< orphan*/  I40IW_ACCESS_FLAGS_LOCALWRITE ; 
 int /*<<< orphan*/  I40IW_ACCESS_FLAGS_REMOTEREAD ; 
 int /*<<< orphan*/  I40IW_ACCESS_FLAGS_REMOTEWRITE ; 
 int IB_ACCESS_LOCAL_WRITE ; 
 int IB_ACCESS_MW_BIND ; 
 int IB_ACCESS_REMOTE_READ ; 
 int IB_ACCESS_REMOTE_WRITE ; 

__attribute__((used)) static inline u16 i40iw_get_user_access(int acc)
{
	u16 access = 0;

	access |= (acc & IB_ACCESS_LOCAL_WRITE) ? I40IW_ACCESS_FLAGS_LOCALWRITE : 0;
	access |= (acc & IB_ACCESS_REMOTE_WRITE) ? I40IW_ACCESS_FLAGS_REMOTEWRITE : 0;
	access |= (acc & IB_ACCESS_REMOTE_READ) ? I40IW_ACCESS_FLAGS_REMOTEREAD : 0;
	access |= (acc & IB_ACCESS_MW_BIND) ? I40IW_ACCESS_FLAGS_BIND_WINDOW : 0;
	return access;
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
          int acc = 100;
          int benchRet = i40iw_get_user_access(acc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int acc = 255;
          int benchRet = i40iw_get_user_access(acc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int acc = 10;
          int benchRet = i40iw_get_user_access(acc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}