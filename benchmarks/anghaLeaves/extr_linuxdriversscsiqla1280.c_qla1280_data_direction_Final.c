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
typedef  int uint16_t ;
struct scsi_cmnd {int sc_data_direction; } ;

/* Variables and functions */
 int BIT_5 ; 
 int BIT_6 ; 
#define  DMA_BIDIRECTIONAL 131 
#define  DMA_FROM_DEVICE 130 
#define  DMA_NONE 129 
#define  DMA_TO_DEVICE 128 

__attribute__((used)) static inline uint16_t
qla1280_data_direction(struct scsi_cmnd *cmnd)
{
	switch(cmnd->sc_data_direction) {
	case DMA_FROM_DEVICE:
		return BIT_5;
	case DMA_TO_DEVICE:
		return BIT_6;
	case DMA_BIDIRECTIONAL:
		return BIT_5 | BIT_6;
	/*
	 * We could BUG() on default here if one of the four cases aren't
	 * met, but then again if we receive something like that from the
	 * SCSI layer we have more serious problems. This shuts up GCC.
	 */
	case DMA_NONE:
	default:
		return 0;
	}
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
          int _len_cmnd0 = 1;
          struct scsi_cmnd * cmnd = (struct scsi_cmnd *) malloc(_len_cmnd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmnd0; _i0++) {
            cmnd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla1280_data_direction(cmnd);
          printf("%d\n", benchRet); 
          free(cmnd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmnd0 = 65025;
          struct scsi_cmnd * cmnd = (struct scsi_cmnd *) malloc(_len_cmnd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmnd0; _i0++) {
            cmnd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla1280_data_direction(cmnd);
          printf("%d\n", benchRet); 
          free(cmnd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmnd0 = 100;
          struct scsi_cmnd * cmnd = (struct scsi_cmnd *) malloc(_len_cmnd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmnd0; _i0++) {
            cmnd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla1280_data_direction(cmnd);
          printf("%d\n", benchRet); 
          free(cmnd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
