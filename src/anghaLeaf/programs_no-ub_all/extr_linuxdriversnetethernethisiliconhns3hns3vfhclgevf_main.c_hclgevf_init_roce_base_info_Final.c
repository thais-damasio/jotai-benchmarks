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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ num_vectors; int /*<<< orphan*/  roce_io_base; int /*<<< orphan*/  netdev; int /*<<< orphan*/  base_vector; } ;
struct TYPE_4__ {int /*<<< orphan*/  netdev; } ;
struct hnae3_handle {int /*<<< orphan*/  numa_node_mask; int /*<<< orphan*/  ae_algo; int /*<<< orphan*/  pdev; TYPE_2__ rinfo; TYPE_1__ kinfo; } ;
struct TYPE_6__ {int /*<<< orphan*/  io_base; } ;
struct hclgevf_dev {scalar_t__ num_roce_msix; scalar_t__ num_msi_left; TYPE_3__ hw; int /*<<< orphan*/  roce_base_vector; struct hnae3_handle nic; struct hnae3_handle roce; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hclgevf_init_roce_base_info(struct hclgevf_dev *hdev)
{
	struct hnae3_handle *roce = &hdev->roce;
	struct hnae3_handle *nic = &hdev->nic;

	roce->rinfo.num_vectors = hdev->num_roce_msix;

	if (hdev->num_msi_left < roce->rinfo.num_vectors ||
	    hdev->num_msi_left == 0)
		return -EINVAL;

	roce->rinfo.base_vector = hdev->roce_base_vector;

	roce->rinfo.netdev = nic->kinfo.netdev;
	roce->rinfo.roce_io_base = hdev->hw.io_base;

	roce->pdev = nic->pdev;
	roce->ae_algo = nic->ae_algo;
	roce->numa_node_mask = nic->numa_node_mask;

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

    // big-arr
    case 0:
    {
          int _len_hdev0 = 1;
          struct hclgevf_dev * hdev = (struct hclgevf_dev *) malloc(_len_hdev0*sizeof(struct hclgevf_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev->num_roce_msix = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->num_msi_left = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->hw.io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce_base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.numa_node_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.ae_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.pdev = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.rinfo.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.rinfo.roce_io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.rinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.rinfo.base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->nic.kinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.numa_node_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.ae_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.pdev = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.rinfo.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.rinfo.roce_io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.rinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.rinfo.base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev->roce.kinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclgevf_init_roce_base_info(hdev);
          printf("%d\n", benchRet); 
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}