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
struct scb {int dummy; } ;
struct ahd_softc {int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  AHD_RESOURCE_SHORTAGE ; 

__attribute__((used)) static inline void
ahd_platform_scb_free(struct ahd_softc *ahd, struct scb *scb)
{
	ahd->flags &= ~AHD_RESOURCE_SHORTAGE;
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
          int _len_ahd0 = 1;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scb0 = 1;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahd_platform_scb_free(ahd,scb);
          free(ahd);
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
