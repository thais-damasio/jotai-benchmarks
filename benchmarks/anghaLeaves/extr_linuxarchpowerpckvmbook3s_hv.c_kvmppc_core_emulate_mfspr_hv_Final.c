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
typedef  int /*<<< orphan*/  ulong ;
struct kvm_vcpu {int dummy; } ;

/* Variables and functions */
 int EMULATE_FAIL ; 

__attribute__((used)) static int kvmppc_core_emulate_mfspr_hv(struct kvm_vcpu *vcpu, int sprn,
					ulong *spr_val)
{
	return EMULATE_FAIL;
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
          int sprn = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spr_val0 = 1;
          int * spr_val = (int *) malloc(_len_spr_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_spr_val0; _i0++) {
            spr_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvmppc_core_emulate_mfspr_hv(vcpu,sprn,spr_val);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(spr_val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sprn = 255;
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spr_val0 = 65025;
          int * spr_val = (int *) malloc(_len_spr_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_spr_val0; _i0++) {
            spr_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvmppc_core_emulate_mfspr_hv(vcpu,sprn,spr_val);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(spr_val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sprn = 10;
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spr_val0 = 100;
          int * spr_val = (int *) malloc(_len_spr_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_spr_val0; _i0++) {
            spr_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvmppc_core_emulate_mfspr_hv(vcpu,sprn,spr_val);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(spr_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
