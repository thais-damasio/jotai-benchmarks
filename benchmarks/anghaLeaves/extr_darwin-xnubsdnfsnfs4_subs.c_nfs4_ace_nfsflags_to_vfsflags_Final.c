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
typedef  int uint32_t ;

/* Variables and functions */
 int KAUTH_ACE_DIRECTORY_INHERIT ; 
 int KAUTH_ACE_FAILURE ; 
 int KAUTH_ACE_FILE_INHERIT ; 
 int KAUTH_ACE_INHERITED ; 
 int KAUTH_ACE_LIMIT_INHERIT ; 
 int KAUTH_ACE_ONLY_INHERIT ; 
 int KAUTH_ACE_SUCCESS ; 
 int NFS_ACE_DIRECTORY_INHERIT_ACE ; 
 int NFS_ACE_FAILED_ACCESS_ACE_FLAG ; 
 int NFS_ACE_FILE_INHERIT_ACE ; 
 int NFS_ACE_INHERITED_ACE ; 
 int NFS_ACE_INHERIT_ONLY_ACE ; 
 int NFS_ACE_NO_PROPAGATE_INHERIT_ACE ; 
 int NFS_ACE_SUCCESSFUL_ACCESS_ACE_FLAG ; 

uint32_t
nfs4_ace_nfsflags_to_vfsflags(uint32_t nfsflags)
{
	uint32_t vfsflags = 0;

	if (nfsflags & NFS_ACE_FILE_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_FILE_INHERIT;
	if (nfsflags & NFS_ACE_DIRECTORY_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_DIRECTORY_INHERIT;
	if (nfsflags & NFS_ACE_NO_PROPAGATE_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_LIMIT_INHERIT;
	if (nfsflags & NFS_ACE_INHERIT_ONLY_ACE)
		vfsflags |= KAUTH_ACE_ONLY_INHERIT;
	if (nfsflags & NFS_ACE_SUCCESSFUL_ACCESS_ACE_FLAG)
		vfsflags |= KAUTH_ACE_SUCCESS;
	if (nfsflags & NFS_ACE_FAILED_ACCESS_ACE_FLAG)
		vfsflags |= KAUTH_ACE_FAILURE;
	if (nfsflags & NFS_ACE_INHERITED_ACE)
		vfsflags |= KAUTH_ACE_INHERITED;

	return (vfsflags);
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
          int nfsflags = 100;
          int benchRet = nfs4_ace_nfsflags_to_vfsflags(nfsflags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int nfsflags = 255;
          int benchRet = nfs4_ace_nfsflags_to_vfsflags(nfsflags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nfsflags = 10;
          int benchRet = nfs4_ace_nfsflags_to_vfsflags(nfsflags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
