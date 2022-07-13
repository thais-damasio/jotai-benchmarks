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
typedef  void* uint8_t ;
typedef  int /*<<< orphan*/  uint16_t ;
struct dwc_otg_hcd_pipe_info {int /*<<< orphan*/  mps; void* pipe_dir; void* pipe_type; void* ep_num; void* dev_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline void dwc_otg_hcd_fill_pipe(struct dwc_otg_hcd_pipe_info *pipe,
					 uint8_t devaddr, uint8_t ep_num,
					 uint8_t pipe_type, uint8_t pipe_dir,
					 uint16_t mps)
{
	pipe->dev_addr = devaddr;
	pipe->ep_num = ep_num;
	pipe->pipe_type = pipe_type;
	pipe->pipe_dir = pipe_dir;
	pipe->mps = mps;
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
          int mps = 100;
          int _len_pipe0 = 1;
          struct dwc_otg_hcd_pipe_info * pipe = (struct dwc_otg_hcd_pipe_info *) malloc(_len_pipe0*sizeof(struct dwc_otg_hcd_pipe_info));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            pipe[_i0].mps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * devaddr;
          void * ep_num;
          void * pipe_type;
          void * pipe_dir;
          dwc_otg_hcd_fill_pipe(pipe,devaddr,ep_num,pipe_type,pipe_dir,mps);
          free(pipe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mps = 255;
          int _len_pipe0 = 65025;
          struct dwc_otg_hcd_pipe_info * pipe = (struct dwc_otg_hcd_pipe_info *) malloc(_len_pipe0*sizeof(struct dwc_otg_hcd_pipe_info));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            pipe[_i0].mps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * devaddr;
          void * ep_num;
          void * pipe_type;
          void * pipe_dir;
          dwc_otg_hcd_fill_pipe(pipe,devaddr,ep_num,pipe_type,pipe_dir,mps);
          free(pipe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mps = 10;
          int _len_pipe0 = 100;
          struct dwc_otg_hcd_pipe_info * pipe = (struct dwc_otg_hcd_pipe_info *) malloc(_len_pipe0*sizeof(struct dwc_otg_hcd_pipe_info));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            pipe[_i0].mps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * devaddr;
          void * ep_num;
          void * pipe_type;
          void * pipe_dir;
          dwc_otg_hcd_fill_pipe(pipe,devaddr,ep_num,pipe_type,pipe_dir,mps);
          free(pipe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
