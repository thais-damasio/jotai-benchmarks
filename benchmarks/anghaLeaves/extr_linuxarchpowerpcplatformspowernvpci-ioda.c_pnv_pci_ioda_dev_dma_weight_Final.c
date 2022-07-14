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
struct pci_dev {scalar_t__ hdr_type; int class; } ;

/* Variables and functions */
 int PCI_CLASS_SERIAL_USB_EHCI ; 
 int PCI_CLASS_SERIAL_USB_OHCI ; 
 int PCI_CLASS_SERIAL_USB_UHCI ; 
 int PCI_CLASS_STORAGE_RAID ; 
 scalar_t__ PCI_HEADER_TYPE_NORMAL ; 

__attribute__((used)) static int pnv_pci_ioda_dev_dma_weight(struct pci_dev *dev, void *data)
{
	unsigned int *weight = (unsigned int *)data;

	/* This is quite simplistic. The "base" weight of a device
	 * is 10. 0 means no DMA is to be accounted for it.
	 */
	if (dev->hdr_type != PCI_HEADER_TYPE_NORMAL)
		return 0;

	if (dev->class == PCI_CLASS_SERIAL_USB_UHCI ||
	    dev->class == PCI_CLASS_SERIAL_USB_OHCI ||
	    dev->class == PCI_CLASS_SERIAL_USB_EHCI)
		*weight += 3;
	else if ((dev->class >> 8) == PCI_CLASS_STORAGE_RAID)
		*weight += 15;
	else
		*weight += 10;

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
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].hdr_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = pnv_pci_ioda_dev_dma_weight(dev,data);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].hdr_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = pnv_pci_ioda_dev_dma_weight(dev,data);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].hdr_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = pnv_pci_ioda_dev_dma_weight(dev,data);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}