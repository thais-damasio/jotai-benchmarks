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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct super_block {struct ovl_fs* s_fs_info; } ;
struct TYPE_2__ {scalar_t__ index; scalar_t__ nfs_export; } ;
struct ovl_fs {TYPE_1__ config; } ;

/* Variables and functions */

bool ovl_index_all(struct super_block *sb)
{
	struct ovl_fs *ofs = sb->s_fs_info;

	return ofs->config.nfs_export && ofs->config.index;
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
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct ovl_fs *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct ovl_fs));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
            sb[_i0].s_fs_info->config.index = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].s_fs_info->config.nfs_export = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ovl_index_all(sb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
