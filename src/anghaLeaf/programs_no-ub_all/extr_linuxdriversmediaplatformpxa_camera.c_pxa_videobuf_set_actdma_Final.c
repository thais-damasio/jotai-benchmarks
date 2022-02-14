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
struct pxa_camera_dev {int dummy; } ;
struct pxa_buffer {int active_dma; int nb_planes; } ;

/* Variables and functions */
 int DMA_U ; 
 int DMA_V ; 
 int DMA_Y ; 

__attribute__((used)) static void pxa_videobuf_set_actdma(struct pxa_camera_dev *pcdev,
				    struct pxa_buffer *buf)
{
	buf->active_dma = DMA_Y;
	if (buf->nb_planes == 3)
		buf->active_dma |= DMA_U | DMA_V;
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
          int _len_pcdev0 = 1;
          struct pxa_camera_dev * pcdev = (struct pxa_camera_dev *) malloc(_len_pcdev0*sizeof(struct pxa_camera_dev));
          for(int _i0 = 0; _i0 < _len_pcdev0; _i0++) {
            pcdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          struct pxa_buffer * buf = (struct pxa_buffer *) malloc(_len_buf0*sizeof(struct pxa_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf->active_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        buf->nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pxa_videobuf_set_actdma(pcdev,buf);
          free(pcdev);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
