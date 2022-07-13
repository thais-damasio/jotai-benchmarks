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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned short device; } ;

/* Variables and functions */
 unsigned short PCI_DEVICE_ID_QLOGIC_QLE834X ; 
 unsigned short PCI_DEVICE_ID_QLOGIC_QLE844X ; 
 unsigned short PCI_DEVICE_ID_QLOGIC_QLE8830 ; 
 unsigned short PCI_DEVICE_ID_QLOGIC_VF_QLE834X ; 
 unsigned short PCI_DEVICE_ID_QLOGIC_VF_QLE844X ; 
 unsigned short PCI_DEVICE_ID_QLOGIC_VF_QLE8C30 ; 

__attribute__((used)) static inline bool qlcnic_83xx_check(struct qlcnic_adapter *adapter)
{
	unsigned short device = adapter->pdev->device;
	bool status;

	status = ((device == PCI_DEVICE_ID_QLOGIC_QLE834X) ||
		  (device == PCI_DEVICE_ID_QLOGIC_QLE8830) ||
		  (device == PCI_DEVICE_ID_QLOGIC_QLE844X) ||
		  (device == PCI_DEVICE_ID_QLOGIC_VF_QLE844X) ||
		  (device == PCI_DEVICE_ID_QLOGIC_VF_QLE834X) ||
		  (device == PCI_DEVICE_ID_QLOGIC_VF_QLE8C30)) ? true : false;

	return status;
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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__pdev0 = 1;
          adapter[_i0].pdev = (struct TYPE_2__ *) malloc(_len_adapter__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__pdev0; _j0++) {
            adapter[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_83xx_check(adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].pdev);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__pdev0 = 1;
          adapter[_i0].pdev = (struct TYPE_2__ *) malloc(_len_adapter__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__pdev0; _j0++) {
            adapter[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_83xx_check(adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].pdev);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__pdev0 = 1;
          adapter[_i0].pdev = (struct TYPE_2__ *) malloc(_len_adapter__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__pdev0; _j0++) {
            adapter[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_83xx_check(adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].pdev);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
