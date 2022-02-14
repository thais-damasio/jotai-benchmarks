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
struct TYPE_2__ {scalar_t__ mapaddr; } ;
struct mlxsw_pci_queue {TYPE_1__ mem_item; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 int MLXSW_PCI_PAGE_SIZE ; 

__attribute__((used)) static dma_addr_t __mlxsw_pci_queue_page_get(struct mlxsw_pci_queue *q,
					     int page_index)
{
	return q->mem_item.mapaddr + MLXSW_PCI_PAGE_SIZE * page_index;
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
          int page_index = 255;
          int _len_q0 = 1;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q->mem_item.mapaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = __mlxsw_pci_queue_page_get(q,page_index);
          printf("%ld\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}