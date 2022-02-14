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
struct zpci_dev {int /*<<< orphan*/  max_bus_speed; int /*<<< orphan*/  fmb_update; int /*<<< orphan*/  max_msi; int /*<<< orphan*/  msi_addr; int /*<<< orphan*/  dma_mask; int /*<<< orphan*/  tlb_refresh; } ;
struct clp_rsp_query_pci_grp {int version; int /*<<< orphan*/  mui; int /*<<< orphan*/  noi; int /*<<< orphan*/  msia; int /*<<< orphan*/  dasm; int /*<<< orphan*/  refresh; } ;

/* Variables and functions */
 int /*<<< orphan*/  PCIE_SPEED_5_0GT ; 
 int /*<<< orphan*/  PCI_SPEED_UNKNOWN ; 

__attribute__((used)) static void clp_store_query_pci_fngrp(struct zpci_dev *zdev,
				      struct clp_rsp_query_pci_grp *response)
{
	zdev->tlb_refresh = response->refresh;
	zdev->dma_mask = response->dasm;
	zdev->msi_addr = response->msia;
	zdev->max_msi = response->noi;
	zdev->fmb_update = response->mui;

	switch (response->version) {
	case 1:
		zdev->max_bus_speed = PCIE_SPEED_5_0GT;
		break;
	default:
		zdev->max_bus_speed = PCI_SPEED_UNKNOWN;
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

    // big-arr
    case 0:
    {
          int _len_zdev0 = 1;
          struct zpci_dev * zdev = (struct zpci_dev *) malloc(_len_zdev0*sizeof(struct zpci_dev));
          for(int _i0 = 0; _i0 < _len_zdev0; _i0++) {
            zdev->max_bus_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        zdev->fmb_update = ((-2 * (next_i()%2)) + 1) * next_i();
        zdev->max_msi = ((-2 * (next_i()%2)) + 1) * next_i();
        zdev->msi_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        zdev->dma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        zdev->tlb_refresh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_response0 = 1;
          struct clp_rsp_query_pci_grp * response = (struct clp_rsp_query_pci_grp *) malloc(_len_response0*sizeof(struct clp_rsp_query_pci_grp));
          for(int _i0 = 0; _i0 < _len_response0; _i0++) {
            response->version = ((-2 * (next_i()%2)) + 1) * next_i();
        response->mui = ((-2 * (next_i()%2)) + 1) * next_i();
        response->noi = ((-2 * (next_i()%2)) + 1) * next_i();
        response->msia = ((-2 * (next_i()%2)) + 1) * next_i();
        response->dasm = ((-2 * (next_i()%2)) + 1) * next_i();
        response->refresh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clp_store_query_pci_fngrp(zdev,response);
          free(zdev);
          free(response);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}