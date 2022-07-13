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
typedef  unsigned int uchar ;

/* Variables and functions */

__attribute__((used)) static inline void
calc_sync_msg(unsigned int period, unsigned int offset, unsigned int fast,
                uchar  msg[2])
{
	/* 'period' is a "normal"-mode value, like the ones in 'sx_table'. The
	 * actually used transfer period for Fast SCSI synchronous data
	 * transfers is half that value.
	 */
	period /= 4;
	if (offset && fast)
		period /= 2;
	msg[0] = period;
	msg[1] = offset;
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
          unsigned int period = 100;
          unsigned int offset = 100;
          unsigned int fast = 100;
          int _len_msg0 = 2;
          unsigned int * msg = (unsigned int *) malloc(_len_msg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_sync_msg(period,offset,fast,msg);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int period = 255;
          unsigned int offset = 255;
          unsigned int fast = 255;
          int _len_msg0 = 2;
          unsigned int * msg = (unsigned int *) malloc(_len_msg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_sync_msg(period,offset,fast,msg);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int period = 10;
          unsigned int offset = 10;
          unsigned int fast = 10;
          int _len_msg0 = 2;
          unsigned int * msg = (unsigned int *) malloc(_len_msg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_sync_msg(period,offset,fast,msg);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
