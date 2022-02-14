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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ pba_offset; scalar_t__ pba_size; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;

/* Variables and functions */

__attribute__((used)) static int
pci_valid_pba_offset(struct pci_devinst *pi, uint64_t offset)
{

	if (offset < pi->pi_msix.pba_offset)
		return (0);

	if (offset >= pi->pi_msix.pba_offset + ((unsigned) pi->pi_msix.pba_size)) {
		return (0);
	}

	return (1);
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
          long offset = 255;
          int _len_pi0 = 1;
          struct pci_devinst * pi = (struct pci_devinst *) malloc(_len_pi0*sizeof(struct pci_devinst));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi->pi_msix.pba_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pi->pi_msix.pba_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pci_valid_pba_offset(pi,offset);
          printf("%d\n", benchRet); 
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}