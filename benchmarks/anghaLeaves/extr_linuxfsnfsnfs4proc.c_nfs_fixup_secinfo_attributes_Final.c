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
struct nfs_fattr {int valid; int mode; int nlink; } ;

/* Variables and functions */
 int NFS_ATTR_FATTR_MODE ; 
 int NFS_ATTR_FATTR_MOUNTPOINT ; 
 int NFS_ATTR_FATTR_NLINK ; 
 int NFS_ATTR_FATTR_TYPE ; 
 int S_IFDIR ; 
 int S_IRUGO ; 
 int S_IXUGO ; 

__attribute__((used)) static void nfs_fixup_secinfo_attributes(struct nfs_fattr *fattr)
{
	fattr->valid |= NFS_ATTR_FATTR_TYPE | NFS_ATTR_FATTR_MODE |
		NFS_ATTR_FATTR_NLINK | NFS_ATTR_FATTR_MOUNTPOINT;
	fattr->mode = S_IFDIR | S_IRUGO | S_IXUGO;
	fattr->nlink = 2;
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
          int _len_fattr0 = 1;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fixup_secinfo_attributes(fattr);
          free(fattr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fattr0 = 65025;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fixup_secinfo_attributes(fattr);
          free(fattr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fattr0 = 100;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fixup_secinfo_attributes(fattr);
          free(fattr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
