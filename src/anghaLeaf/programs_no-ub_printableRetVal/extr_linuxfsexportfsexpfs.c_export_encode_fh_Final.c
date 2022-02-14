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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct inode {int /*<<< orphan*/  i_generation; int /*<<< orphan*/  i_ino; } ;
struct TYPE_2__ {int /*<<< orphan*/  parent_gen; int /*<<< orphan*/  parent_ino; int /*<<< orphan*/  gen; int /*<<< orphan*/  ino; } ;
struct fid {TYPE_1__ i32; } ;

/* Variables and functions */
 int FILEID_INO32_GEN ; 
 int FILEID_INO32_GEN_PARENT ; 
 int FILEID_INVALID ; 

__attribute__((used)) static int export_encode_fh(struct inode *inode, struct fid *fid,
		int *max_len, struct inode *parent)
{
	int len = *max_len;
	int type = FILEID_INO32_GEN;

	if (parent && (len < 4)) {
		*max_len = 4;
		return FILEID_INVALID;
	} else if (len < 2) {
		*max_len = 2;
		return FILEID_INVALID;
	}

	len = 2;
	fid->i32.ino = inode->i_ino;
	fid->i32.gen = inode->i_generation;
	if (parent) {
		fid->i32.parent_ino = parent->i_ino;
		fid->i32.parent_gen = parent->i_generation;
		len = 4;
		type = FILEID_INO32_GEN_PARENT;
	}
	*max_len = len;
	return type;
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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode->i_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        inode->i_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fid0 = 1;
          struct fid * fid = (struct fid *) malloc(_len_fid0*sizeof(struct fid));
          for(int _i0 = 0; _i0 < _len_fid0; _i0++) {
            fid->i32.parent_gen = ((-2 * (next_i()%2)) + 1) * next_i();
        fid->i32.parent_ino = ((-2 * (next_i()%2)) + 1) * next_i();
        fid->i32.gen = ((-2 * (next_i()%2)) + 1) * next_i();
        fid->i32.ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_len0 = 65025;
          int * max_len = (int *) malloc(_len_max_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_len0; _i0++) {
            max_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          struct inode * parent = (struct inode *) malloc(_len_parent0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent->i_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        parent->i_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = export_encode_fh(inode,fid,max_len,parent);
          printf("%d\n", benchRet); 
          free(inode);
          free(fid);
          free(max_len);
          free(parent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
