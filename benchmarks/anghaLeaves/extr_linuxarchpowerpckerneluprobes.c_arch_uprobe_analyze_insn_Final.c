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
struct mm_struct {int dummy; } ;
struct arch_uprobe {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

int arch_uprobe_analyze_insn(struct arch_uprobe *auprobe,
		struct mm_struct *mm, unsigned long addr)
{
	if (addr & 0x03)
		return -EINVAL;

	return 0;
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
          unsigned long addr = 100;
          int _len_auprobe0 = 1;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mm0 = 1;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_analyze_insn(auprobe,mm,addr);
          printf("%d\n", benchRet); 
          free(auprobe);
          free(mm);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long addr = 255;
          int _len_auprobe0 = 65025;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mm0 = 65025;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_analyze_insn(auprobe,mm,addr);
          printf("%d\n", benchRet); 
          free(auprobe);
          free(mm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long addr = 10;
          int _len_auprobe0 = 100;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mm0 = 100;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_analyze_insn(auprobe,mm,addr);
          printf("%d\n", benchRet); 
          free(auprobe);
          free(mm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
