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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct kvm_vcpu {scalar_t__ vcpu_id; TYPE_2__* kvm; } ;
struct TYPE_3__ {scalar_t__ bsp_vcpu_id; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;

/* Variables and functions */

bool kvm_vcpu_is_reset_bsp(struct kvm_vcpu *vcpu)
{
	return vcpu->kvm->arch.bsp_vcpu_id == vcpu->vcpu_id;
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
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__kvm0 = 1;
          vcpu[_i0].kvm = (struct TYPE_4__ *) malloc(_len_vcpu__i0__kvm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__kvm0; _j0++) {
            vcpu[_i0].kvm->arch.bsp_vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_vcpu_is_reset_bsp(vcpu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].kvm);
          }
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
