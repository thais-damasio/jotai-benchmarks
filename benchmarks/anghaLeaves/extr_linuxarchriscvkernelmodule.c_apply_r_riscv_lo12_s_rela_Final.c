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
typedef  int u32 ;
struct module {int dummy; } ;
typedef  int s32 ;
typedef  scalar_t__ Elf_Addr ;

/* Variables and functions */

__attribute__((used)) static int apply_r_riscv_lo12_s_rela(struct module *me, u32 *location,
				     Elf_Addr v)
{
	/* Skip medlow checking because of filtering by HI20 already */
	s32 hi20 = ((s32)v + 0x800) & 0xfffff000;
	s32 lo12 = ((s32)v - hi20);
	u32 imm11_5 = (lo12 & 0xfe0) << (31 - 11);
	u32 imm4_0 = (lo12 & 0x1f) << (11 - 4);
	*location = (*location & 0x1fff07f) | imm11_5 | imm4_0;
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
          long v = 100;
          int _len_me0 = 1;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
            me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_location0 = 1;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apply_r_riscv_lo12_s_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }
    // big-arr
    case 1:
    {
          long v = 255;
          int _len_me0 = 65025;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
            me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_location0 = 65025;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apply_r_riscv_lo12_s_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long v = 10;
          int _len_me0 = 100;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
            me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_location0 = 100;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apply_r_riscv_lo12_s_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}