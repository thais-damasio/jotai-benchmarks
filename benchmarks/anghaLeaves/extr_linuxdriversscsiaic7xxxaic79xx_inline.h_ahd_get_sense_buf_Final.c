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
typedef  int /*<<< orphan*/  uint8_t ;
struct scb {int /*<<< orphan*/ * sense_data; } ;
struct ahd_softc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline uint8_t *
ahd_get_sense_buf(struct ahd_softc *ahd, struct scb *scb)
{
	return (scb->sense_data);
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
          int _len_ahd0 = 1;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scb0 = 1;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              int _len_scb__i0__sense_data0 = 1;
          scb[_i0].sense_data = (int *) malloc(_len_scb__i0__sense_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scb__i0__sense_data0; _j0++) {
            scb[_i0].sense_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ahd_get_sense_buf(ahd,scb);
          printf("%d\n", (*benchRet)); 
          free(ahd);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sense_data);
          }
          free(scb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ahd0 = 65025;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scb0 = 65025;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              int _len_scb__i0__sense_data0 = 1;
          scb[_i0].sense_data = (int *) malloc(_len_scb__i0__sense_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scb__i0__sense_data0; _j0++) {
            scb[_i0].sense_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ahd_get_sense_buf(ahd,scb);
          printf("%d\n", (*benchRet)); 
          free(ahd);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sense_data);
          }
          free(scb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ahd0 = 100;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scb0 = 100;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              int _len_scb__i0__sense_data0 = 1;
          scb[_i0].sense_data = (int *) malloc(_len_scb__i0__sense_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scb__i0__sense_data0; _j0++) {
            scb[_i0].sense_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ahd_get_sense_buf(ahd,scb);
          printf("%d\n", (*benchRet)); 
          free(ahd);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sense_data);
          }
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
