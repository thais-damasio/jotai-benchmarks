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
struct scsi_cmnd {int dummy; } ;
struct Scsi_Host {int dummy; } ;

/* Variables and functions */
 int SCSI_MLQUEUE_HOST_BUSY ; 

__attribute__((used)) static int
lpfc_no_command(struct Scsi_Host *shost, struct scsi_cmnd *cmnd)
{
	return SCSI_MLQUEUE_HOST_BUSY;
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
          int _len_shost0 = 1;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmnd0 = 1;
          struct scsi_cmnd * cmnd = (struct scsi_cmnd *) malloc(_len_cmnd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmnd0; _i0++) {
            cmnd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpfc_no_command(shost,cmnd);
          printf("%d\n", benchRet); 
          free(shost);
          free(cmnd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}