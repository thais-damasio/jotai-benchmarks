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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int size; } ;
struct pktcdvd_device {int offset; TYPE_1__ settings; } ;
typedef  int sector_t ;

/* Variables and functions */

__attribute__((used)) static sector_t get_zone(sector_t sector, struct pktcdvd_device *pd)
{
	return (sector + pd->offset) & ~(sector_t)(pd->settings.size - 1);
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
          int sector = 100;
          int _len_pd0 = 1;
          struct pktcdvd_device * pd = (struct pktcdvd_device *) malloc(_len_pd0*sizeof(struct pktcdvd_device));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pd[_i0].settings.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_zone(sector,pd);
          printf("%d\n", benchRet); 
          free(pd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
