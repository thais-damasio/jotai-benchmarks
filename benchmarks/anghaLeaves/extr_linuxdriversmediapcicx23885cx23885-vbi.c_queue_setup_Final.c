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
struct vb2_queue {struct cx23885_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx23885_dev {int tvnorm; } ;

/* Variables and functions */
 int V4L2_STD_525_60 ; 
 unsigned int VBI_LINE_LENGTH ; 
 unsigned int VBI_NTSC_LINE_COUNT ; 
 unsigned int VBI_PAL_LINE_COUNT ; 

__attribute__((used)) static int queue_setup(struct vb2_queue *q,
			   unsigned int *num_buffers, unsigned int *num_planes,
			   unsigned int sizes[], struct device *alloc_devs[])
{
	struct cx23885_dev *dev = q->drv_priv;
	unsigned lines = VBI_PAL_LINE_COUNT;

	if (dev->tvnorm & V4L2_STD_525_60)
		lines = VBI_NTSC_LINE_COUNT;
	*num_planes = 1;
	sizes[0] = lines * VBI_LINE_LENGTH * 2;
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
          int _len_q0 = 1;
          struct vb2_queue * q = (struct vb2_queue *) malloc(_len_q0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__drv_priv0 = 1;
          q[_i0].drv_priv = (struct cx23885_dev *) malloc(_len_q__i0__drv_priv0*sizeof(struct cx23885_dev));
          for(int _j0 = 0; _j0 < _len_q__i0__drv_priv0; _j0++) {
            q[_i0].drv_priv->tvnorm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_num_buffers0 = 1;
          unsigned int * num_buffers = (unsigned int *) malloc(_len_num_buffers0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_buffers0; _i0++) {
            num_buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_num_planes0 = 1;
          unsigned int * num_planes = (unsigned int *) malloc(_len_num_planes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_planes0; _i0++) {
            num_planes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizes0 = 1;
          unsigned int * sizes = (unsigned int *) malloc(_len_sizes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sizes0; _i0++) {
            sizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_devs0 = 1;
          struct device ** alloc_devs = (struct device **) malloc(_len_alloc_devs0*sizeof(struct device *));
          for(int _i0 = 0; _i0 < _len_alloc_devs0; _i0++) {
            int _len_alloc_devs1 = 1;
            alloc_devs[_i0] = (struct device *) malloc(_len_alloc_devs1*sizeof(struct device));
            for(int _i1 = 0; _i1 < _len_alloc_devs1; _i1++) {
              alloc_devs[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = queue_setup(q,num_buffers,num_planes,sizes,alloc_devs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].drv_priv);
          }
          free(q);
          free(num_buffers);
          free(num_planes);
          free(sizes);
          for(int i1 = 0; i1 < _len_alloc_devs0; i1++) {
            int _len_alloc_devs1 = 1;
              free(alloc_devs[i1]);
          }
          free(alloc_devs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
