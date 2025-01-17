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

/* Type definitions */

/* Variables and functions */
 unsigned long ATA_MASK_MWDMA ; 
 unsigned long ATA_MASK_PIO ; 
 unsigned long ATA_MASK_UDMA ; 
 unsigned long ATA_SHIFT_MWDMA ; 
 unsigned long ATA_SHIFT_PIO ; 
 unsigned long ATA_SHIFT_UDMA ; 

void ata_unpack_xfermask(unsigned long xfer_mask, unsigned long *pio_mask,
			 unsigned long *mwdma_mask, unsigned long *udma_mask)
{
	if (pio_mask)
		*pio_mask = (xfer_mask & ATA_MASK_PIO) >> ATA_SHIFT_PIO;
	if (mwdma_mask)
		*mwdma_mask = (xfer_mask & ATA_MASK_MWDMA) >> ATA_SHIFT_MWDMA;
	if (udma_mask)
		*udma_mask = (xfer_mask & ATA_MASK_UDMA) >> ATA_SHIFT_UDMA;
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
          unsigned long xfer_mask = 100;
          int _len_pio_mask0 = 1;
          unsigned long * pio_mask = (unsigned long *) malloc(_len_pio_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pio_mask0; _i0++) {
            pio_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mwdma_mask0 = 1;
          unsigned long * mwdma_mask = (unsigned long *) malloc(_len_mwdma_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mwdma_mask0; _i0++) {
            mwdma_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udma_mask0 = 1;
          unsigned long * udma_mask = (unsigned long *) malloc(_len_udma_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_udma_mask0; _i0++) {
            udma_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_unpack_xfermask(xfer_mask,pio_mask,mwdma_mask,udma_mask);
          free(pio_mask);
          free(mwdma_mask);
          free(udma_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
