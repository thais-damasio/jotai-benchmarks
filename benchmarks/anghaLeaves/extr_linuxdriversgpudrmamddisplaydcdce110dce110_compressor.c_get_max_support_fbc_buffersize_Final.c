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

/* Variables and functions */
 unsigned int FBC_MAX_X ; 
 unsigned int FBC_MAX_Y ; 

void get_max_support_fbc_buffersize(unsigned int *max_x, unsigned int *max_y)
{
	*max_x = FBC_MAX_X;
	*max_y = FBC_MAX_Y;

	/* if (m_smallLocalFrameBufferMemory == 1)
	 * {
	 *	*max_x = FBC_MAX_X_SG;
	 *	*max_y = FBC_MAX_Y_SG;
	 * }
	 */
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
          int _len_max_x0 = 1;
          unsigned int * max_x = (unsigned int *) malloc(_len_max_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_x0; _i0++) {
            max_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_y0 = 1;
          unsigned int * max_y = (unsigned int *) malloc(_len_max_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_y0; _i0++) {
            max_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_max_support_fbc_buffersize(max_x,max_y);
          free(max_x);
          free(max_y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_max_x0 = 65025;
          unsigned int * max_x = (unsigned int *) malloc(_len_max_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_x0; _i0++) {
            max_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_y0 = 65025;
          unsigned int * max_y = (unsigned int *) malloc(_len_max_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_y0; _i0++) {
            max_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_max_support_fbc_buffersize(max_x,max_y);
          free(max_x);
          free(max_y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_max_x0 = 100;
          unsigned int * max_x = (unsigned int *) malloc(_len_max_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_x0; _i0++) {
            max_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_y0 = 100;
          unsigned int * max_y = (unsigned int *) malloc(_len_max_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max_y0; _i0++) {
            max_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_max_support_fbc_buffersize(max_x,max_y);
          free(max_x);
          free(max_y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
