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
       1            big-arr-10x\n\
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
struct TYPE_2__ {unsigned int index; } ;
struct mlxsw_sp_acl_ctcam_entry {TYPE_1__ parman_item; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int
mlxsw_sp_acl_ctcam_entry_offset(struct mlxsw_sp_acl_ctcam_entry *centry)
{
	return centry->parman_item.index;
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
          int _len_centry0 = 1;
          struct mlxsw_sp_acl_ctcam_entry * centry = (struct mlxsw_sp_acl_ctcam_entry *) malloc(_len_centry0*sizeof(struct mlxsw_sp_acl_ctcam_entry));
          for(int _i0 = 0; _i0 < _len_centry0; _i0++) {
            centry[_i0].parman_item.index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mlxsw_sp_acl_ctcam_entry_offset(centry);
          printf("%u\n", benchRet); 
          free(centry);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_centry0 = 100;
          struct mlxsw_sp_acl_ctcam_entry * centry = (struct mlxsw_sp_acl_ctcam_entry *) malloc(_len_centry0*sizeof(struct mlxsw_sp_acl_ctcam_entry));
          for(int _i0 = 0; _i0 < _len_centry0; _i0++) {
            centry[_i0].parman_item.index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mlxsw_sp_acl_ctcam_entry_offset(centry);
          printf("%u\n", benchRet); 
          free(centry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
