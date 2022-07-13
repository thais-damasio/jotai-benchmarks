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
struct cpuinfo_mips {int options; int fpu_csr31; int fpu_msk31; int isa_level; } ;

/* Variables and functions */
 int FPU_CSR_ABS2008 ; 
 int FPU_CSR_NAN2008 ; 
#define  LEGACY 131 
 int MIPS_CPU_ISA_M32R1 ; 
 int MIPS_CPU_ISA_M32R2 ; 
 int MIPS_CPU_ISA_M32R6 ; 
 int MIPS_CPU_ISA_M64R1 ; 
 int MIPS_CPU_ISA_M64R2 ; 
 int MIPS_CPU_ISA_M64R6 ; 
 int MIPS_CPU_NAN_2008 ; 
 int MIPS_CPU_NAN_LEGACY ; 
#define  RELAXED 130 
#define  STD2008 129 
#define  STRICT 128 
 int ieee754 ; 

__attribute__((used)) static void cpu_set_nofpu_2008(struct cpuinfo_mips *c)
{
	c->options &= ~(MIPS_CPU_NAN_2008 | MIPS_CPU_NAN_LEGACY);
	c->fpu_csr31 &= ~(FPU_CSR_ABS2008 | FPU_CSR_NAN2008);
	c->fpu_msk31 &= ~(FPU_CSR_ABS2008 | FPU_CSR_NAN2008);

	switch (ieee754) {
	case STRICT:
		if (c->isa_level & (MIPS_CPU_ISA_M32R1 | MIPS_CPU_ISA_M64R1 |
				    MIPS_CPU_ISA_M32R2 | MIPS_CPU_ISA_M64R2 |
				    MIPS_CPU_ISA_M32R6 | MIPS_CPU_ISA_M64R6)) {
			c->options |= MIPS_CPU_NAN_2008 | MIPS_CPU_NAN_LEGACY;
		} else {
			c->options |= MIPS_CPU_NAN_LEGACY;
			c->fpu_msk31 |= FPU_CSR_ABS2008 | FPU_CSR_NAN2008;
		}
		break;
	case LEGACY:
		c->options |= MIPS_CPU_NAN_LEGACY;
		c->fpu_msk31 |= FPU_CSR_ABS2008 | FPU_CSR_NAN2008;
		break;
	case STD2008:
		c->options |= MIPS_CPU_NAN_2008;
		c->fpu_csr31 |= FPU_CSR_ABS2008 | FPU_CSR_NAN2008;
		c->fpu_msk31 |= FPU_CSR_ABS2008 | FPU_CSR_NAN2008;
		break;
	case RELAXED:
		c->options |= MIPS_CPU_NAN_2008 | MIPS_CPU_NAN_LEGACY;
		break;
	}
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
          int _len_c0 = 1;
          struct cpuinfo_mips * c = (struct cpuinfo_mips *) malloc(_len_c0*sizeof(struct cpuinfo_mips));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_csr31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_msk31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].isa_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cpu_set_nofpu_2008(c);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct cpuinfo_mips * c = (struct cpuinfo_mips *) malloc(_len_c0*sizeof(struct cpuinfo_mips));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_csr31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_msk31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].isa_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cpu_set_nofpu_2008(c);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct cpuinfo_mips * c = (struct cpuinfo_mips *) malloc(_len_c0*sizeof(struct cpuinfo_mips));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_csr31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].fpu_msk31 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].isa_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cpu_set_nofpu_2008(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
