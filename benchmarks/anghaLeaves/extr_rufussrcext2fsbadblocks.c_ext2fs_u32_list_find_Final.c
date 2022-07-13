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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* ext2_u32_list ;
typedef  scalar_t__ __u32 ;
struct TYPE_3__ {scalar_t__ magic; int num; scalar_t__* list; } ;

/* Variables and functions */
 scalar_t__ EXT2_ET_MAGIC_BADBLOCKS_LIST ; 

int ext2fs_u32_list_find(ext2_u32_list bb, __u32 blk)
{
	int	low, high, mid;

	if (bb->magic != EXT2_ET_MAGIC_BADBLOCKS_LIST)
		return -1;

	if (bb->num == 0)
		return -1;

	low = 0;
	high = bb->num-1;
	if (blk == bb->list[low])
		return low;
	if (blk == bb->list[high])
		return high;

	while (low < high) {
		mid = ((unsigned)low + (unsigned)high)/2;
		if (mid == low || mid == high)
			break;
		if (blk == bb->list[mid])
			return mid;
		if (blk < bb->list[mid])
			high = mid;
		else
			low = mid;
	}
	return -1;
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
          long blk = 100;
          int _len_bb0 = 1;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bb__i0__list0 = 1;
          bb[_i0].list = (long *) malloc(_len_bb__i0__list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bb__i0__list0; _j0++) {
            bb[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext2fs_u32_list_find(bb,blk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bb0; _aux++) {
          free(bb[_aux].list);
          }
          free(bb);
        
        break;
    }
    // big-arr
    case 1:
    {
          long blk = 255;
          int _len_bb0 = 65025;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bb__i0__list0 = 1;
          bb[_i0].list = (long *) malloc(_len_bb__i0__list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bb__i0__list0; _j0++) {
            bb[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext2fs_u32_list_find(bb,blk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bb0; _aux++) {
          free(bb[_aux].list);
          }
          free(bb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long blk = 10;
          int _len_bb0 = 100;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bb__i0__list0 = 1;
          bb[_i0].list = (long *) malloc(_len_bb__i0__list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bb__i0__list0; _j0++) {
            bb[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext2fs_u32_list_find(bb,blk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bb0; _aux++) {
          free(bb[_aux].list);
          }
          free(bb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
