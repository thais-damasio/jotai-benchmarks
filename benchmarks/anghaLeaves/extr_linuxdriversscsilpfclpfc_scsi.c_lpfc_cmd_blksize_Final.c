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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int sector_size; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned
lpfc_cmd_blksize(struct scsi_cmnd *sc)
{
	return sc->device->sector_size;
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
          int _len_sc0 = 1;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__device0 = 1;
          sc[_i0].device = (struct TYPE_2__ *) malloc(_len_sc__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__device0; _j0++) {
            sc[_i0].device->sector_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = lpfc_cmd_blksize(sc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].device);
          }
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sc0 = 65025;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__device0 = 1;
          sc[_i0].device = (struct TYPE_2__ *) malloc(_len_sc__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__device0; _j0++) {
            sc[_i0].device->sector_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = lpfc_cmd_blksize(sc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].device);
          }
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sc0 = 100;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__device0 = 1;
          sc[_i0].device = (struct TYPE_2__ *) malloc(_len_sc__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__device0; _j0++) {
            sc[_i0].device->sector_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = lpfc_cmd_blksize(sc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].device);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
