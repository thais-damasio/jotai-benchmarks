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
struct comedi_isadma_desc {int /*<<< orphan*/  mode; } ;

/* Variables and functions */
 char COMEDI_ISADMA_READ ; 
 int /*<<< orphan*/  DMA_MODE_READ ; 
 int /*<<< orphan*/  DMA_MODE_WRITE ; 

void comedi_isadma_set_mode(struct comedi_isadma_desc *desc, char dma_dir)
{
	desc->mode = (dma_dir == COMEDI_ISADMA_READ) ? DMA_MODE_READ
						     : DMA_MODE_WRITE;
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
          char dma_dir = 100;
          int _len_desc0 = 1;
          struct comedi_isadma_desc * desc = (struct comedi_isadma_desc *) malloc(_len_desc0*sizeof(struct comedi_isadma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_isadma_set_mode(desc,dma_dir);
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          char dma_dir = 255;
          int _len_desc0 = 65025;
          struct comedi_isadma_desc * desc = (struct comedi_isadma_desc *) malloc(_len_desc0*sizeof(struct comedi_isadma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_isadma_set_mode(desc,dma_dir);
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char dma_dir = 10;
          int _len_desc0 = 100;
          struct comedi_isadma_desc * desc = (struct comedi_isadma_desc *) malloc(_len_desc0*sizeof(struct comedi_isadma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_isadma_set_mode(desc,dma_dir);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}