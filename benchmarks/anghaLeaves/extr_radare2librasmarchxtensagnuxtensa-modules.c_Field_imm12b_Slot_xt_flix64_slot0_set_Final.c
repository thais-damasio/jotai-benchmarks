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
       1            big-arr-10x\n\
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
typedef  int* xtensa_insnbuf ;
typedef  int uint32 ;

/* Variables and functions */

__attribute__((used)) static void
Field_imm12b_Slot_xt_flix64_slot0_set (xtensa_insnbuf insn, uint32 val)
{
  uint32 tie_t;
  tie_t = (val << 24) >> 24;
  insn[0] = (insn[0] & ~0xff000) | (tie_t << 12);
  tie_t = (val << 20) >> 28;
  insn[0] = (insn[0] & ~0xf0) | (tie_t << 4);
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
          int val = 100;
          int _len_insn0 = 1;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Field_imm12b_Slot_xt_flix64_slot0_set(insn,val);
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int val = 10;
          int _len_insn0 = 100;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Field_imm12b_Slot_xt_flix64_slot0_set(insn,val);
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
