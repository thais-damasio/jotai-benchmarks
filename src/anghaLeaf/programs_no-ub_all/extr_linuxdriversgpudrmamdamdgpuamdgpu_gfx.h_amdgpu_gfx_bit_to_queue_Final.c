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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int num_queue_per_pipe; int num_pipe_per_mec; } ;
struct TYPE_3__ {TYPE_2__ mec; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;

/* Variables and functions */

__attribute__((used)) static inline void amdgpu_gfx_bit_to_queue(struct amdgpu_device *adev, int bit,
					   int *mec, int *pipe, int *queue)
{
	*queue = bit % adev->gfx.mec.num_queue_per_pipe;
	*pipe = (bit / adev->gfx.mec.num_queue_per_pipe)
		% adev->gfx.mec.num_pipe_per_mec;
	*mec = (bit / adev->gfx.mec.num_queue_per_pipe)
	       / adev->gfx.mec.num_pipe_per_mec;

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
          int bit = 255;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev->gfx.mec.num_queue_per_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
        adev->gfx.mec.num_pipe_per_mec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mec0 = 65025;
          int * mec = (int *) malloc(_len_mec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mec0; _i0++) {
            mec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe0 = 65025;
          int * pipe = (int *) malloc(_len_pipe0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            pipe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue0 = 65025;
          int * queue = (int *) malloc(_len_queue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          amdgpu_gfx_bit_to_queue(adev,bit,mec,pipe,queue);
          free(adev);
          free(mec);
          free(pipe);
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}