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
struct pci_dev {int devfn; struct pci_channel* sysdata; struct pci_bus* bus; } ;
struct pci_channel {int /*<<< orphan*/  pci_ops; } ;
struct pci_bus {int number; struct pci_bus* parent; int /*<<< orphan*/  ops; struct pci_channel* sysdata; } ;

/* Variables and functions */

__attribute__((used)) static struct pci_dev *fake_pci_dev(struct pci_channel *hose,
	int top_bus, int busnr, int devfn)
{
	static struct pci_dev dev;
	static struct pci_bus bus;

	dev.bus = &bus;
	dev.sysdata = hose;
	dev.devfn = devfn;
	bus.number = busnr;
	bus.sysdata = hose;
	bus.ops = hose->pci_ops;

	if(busnr != top_bus)
		/* Fake a parent bus structure. */
		bus.parent = &bus;
	else
		bus.parent = NULL;

	return &dev;
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
          int top_bus = 255;
          int busnr = 255;
          int devfn = 255;
          int _len_hose0 = 1;
          struct pci_channel * hose = (struct pci_channel *) malloc(_len_hose0*sizeof(struct pci_channel));
          for(int _i0 = 0; _i0 < _len_hose0; _i0++) {
            hose->pci_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pci_dev * benchRet = fake_pci_dev(hose,top_bus,busnr,devfn);
          printf("{{struct}} %p\n", &benchRet); 
          free(hose);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
