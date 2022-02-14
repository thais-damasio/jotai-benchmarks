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
struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;

/* Variables and functions */
 scalar_t__ SPFI_32BIT_FIFO_SIZE ; 

__attribute__((used)) static bool img_spfi_can_dma(struct spi_master *master, struct spi_device *spi,
			     struct spi_transfer *xfer)
{
	if (xfer->len > SPFI_32BIT_FIFO_SIZE)
		return true;
	return false;
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
          int _len_master0 = 1;
          struct spi_master * master = (struct spi_master *) malloc(_len_master0*sizeof(struct spi_master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spi0 = 1;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer0 = 1;
          struct spi_transfer * xfer = (struct spi_transfer *) malloc(_len_xfer0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
            xfer->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_spfi_can_dma(master,spi,xfer);
          printf("%d\n", benchRet); 
          free(master);
          free(spi);
          free(xfer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
