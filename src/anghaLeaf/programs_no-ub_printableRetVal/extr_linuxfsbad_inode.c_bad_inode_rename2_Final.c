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
struct inode {int dummy; } ;
struct dentry {int dummy; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static int bad_inode_rename2(struct inode *old_dir, struct dentry *old_dentry,
			     struct inode *new_dir, struct dentry *new_dentry,
			     unsigned int flags)
{
	return -EIO;
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
          unsigned int flags = 255;
          int _len_old_dir0 = 1;
          struct inode * old_dir = (struct inode *) malloc(_len_old_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_old_dir0; _i0++) {
            old_dir->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old_dentry0 = 1;
          struct dentry * old_dentry = (struct dentry *) malloc(_len_old_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_old_dentry0; _i0++) {
            old_dentry->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_dir0 = 1;
          struct inode * new_dir = (struct inode *) malloc(_len_new_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_new_dir0; _i0++) {
            new_dir->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_dentry0 = 1;
          struct dentry * new_dentry = (struct dentry *) malloc(_len_new_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_new_dentry0; _i0++) {
            new_dentry->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bad_inode_rename2(old_dir,old_dentry,new_dir,new_dentry,flags);
          printf("%d\n", benchRet); 
          free(old_dir);
          free(old_dentry);
          free(new_dir);
          free(new_dentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}