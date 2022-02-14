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
struct ac97_controller {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int ac97_unbound_ctrl_read(struct ac97_controller *adrv, int slot,
				  unsigned short reg)
{
	return -ENODEV;
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
          int slot = 255;
          unsigned short reg = 255;
          int _len_adrv0 = 1;
          struct ac97_controller * adrv = (struct ac97_controller *) malloc(_len_adrv0*sizeof(struct ac97_controller));
          for(int _i0 = 0; _i0 < _len_adrv0; _i0++) {
            adrv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ac97_unbound_ctrl_read(adrv,slot,reg);
          printf("%d\n", benchRet); 
          free(adrv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
