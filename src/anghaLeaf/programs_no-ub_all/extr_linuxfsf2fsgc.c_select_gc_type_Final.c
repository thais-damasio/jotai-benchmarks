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
struct f2fs_sb_info {int gc_mode; } ;

/* Variables and functions */
 int BG_GC ; 
 int GC_CB ; 
 int GC_GREEDY ; 
#define  GC_IDLE_CB 130 
#define  GC_IDLE_GREEDY 129 
#define  GC_URGENT 128 

__attribute__((used)) static int select_gc_type(struct f2fs_sb_info *sbi, int gc_type)
{
	int gc_mode = (gc_type == BG_GC) ? GC_CB : GC_GREEDY;

	switch (sbi->gc_mode) {
	case GC_IDLE_CB:
		gc_mode = GC_CB;
		break;
	case GC_IDLE_GREEDY:
	case GC_URGENT:
		gc_mode = GC_GREEDY;
		break;
	}
	return gc_mode;
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
          int gc_type = 255;
          int _len_sbi0 = 1;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi->gc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = select_gc_type(sbi,gc_type);
          printf("%d\n", benchRet); 
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
