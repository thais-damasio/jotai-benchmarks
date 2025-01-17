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

/* Type definitions */
typedef  scalar_t__ u32 ;
struct bpf_insn {scalar_t__ imm; } ;
typedef  scalar_t__ s64 ;

/* Variables and functions */
 int ERANGE ; 
 scalar_t__ S32_MAX ; 
 scalar_t__ S32_MIN ; 

__attribute__((used)) static int bpf_adj_delta_to_imm(struct bpf_insn *insn, u32 pos, u32 delta,
				u32 curr, const bool probe_pass)
{
	const s64 imm_min = S32_MIN, imm_max = S32_MAX;
	s64 imm = insn->imm;

	if (curr < pos && curr + imm + 1 > pos)
		imm += delta;
	else if (curr > pos + delta && curr + imm + 1 <= pos + delta)
		imm -= delta;
	if (imm < imm_min || imm > imm_max)
		return -ERANGE;
	if (!probe_pass)
		insn->imm = imm;
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
          long pos = 100;
          long delta = 100;
          long curr = 100;
          const int probe_pass = 100;
          int _len_insn0 = 1;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].imm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bpf_adj_delta_to_imm(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long pos = 10;
          long delta = 10;
          long curr = 10;
          const int probe_pass = 10;
          int _len_insn0 = 100;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].imm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bpf_adj_delta_to_imm(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
