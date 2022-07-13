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
struct f2fs_sb_info {unsigned int total_valid_node_count; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int valid_node_count(struct f2fs_sb_info *sbi)
{
	return sbi->total_valid_node_count;
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
          int _len_sbi0 = 1;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].total_valid_node_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = valid_node_count(sbi);
          printf("%u\n", benchRet); 
          free(sbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sbi0 = 65025;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].total_valid_node_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = valid_node_count(sbi);
          printf("%u\n", benchRet); 
          free(sbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sbi0 = 100;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].total_valid_node_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = valid_node_count(sbi);
          printf("%u\n", benchRet); 
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
