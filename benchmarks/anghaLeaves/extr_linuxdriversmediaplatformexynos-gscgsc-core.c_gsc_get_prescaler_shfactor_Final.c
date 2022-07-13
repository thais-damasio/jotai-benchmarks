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
typedef  int u32 ;

/* Variables and functions */

void gsc_get_prescaler_shfactor(u32 hratio, u32 vratio, u32 *sh)
{
	if (hratio == 4 && vratio == 4)
		*sh = 4;
	else if ((hratio == 4 && vratio == 2) ||
		 (hratio == 2 && vratio == 4))
		*sh = 3;
	else if ((hratio == 4 && vratio == 1) ||
		 (hratio == 1 && vratio == 4) ||
		 (hratio == 2 && vratio == 2))
		*sh = 2;
	else if (hratio == 1 && vratio == 1)
		*sh = 0;
	else
		*sh = 1;
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
          int hratio = 100;
          int vratio = 100;
          int _len_sh0 = 1;
          int * sh = (int *) malloc(_len_sh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
            sh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gsc_get_prescaler_shfactor(hratio,vratio,sh);
          free(sh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hratio = 255;
          int vratio = 255;
          int _len_sh0 = 65025;
          int * sh = (int *) malloc(_len_sh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
            sh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gsc_get_prescaler_shfactor(hratio,vratio,sh);
          free(sh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hratio = 10;
          int vratio = 10;
          int _len_sh0 = 100;
          int * sh = (int *) malloc(_len_sh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
            sh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gsc_get_prescaler_shfactor(hratio,vratio,sh);
          free(sh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
