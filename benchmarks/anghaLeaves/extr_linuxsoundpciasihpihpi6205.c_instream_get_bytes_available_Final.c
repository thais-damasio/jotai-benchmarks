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
typedef  scalar_t__ u32 ;
struct hpi_hostbuffer_status {scalar_t__ host_index; scalar_t__ dsp_index; } ;

/* Variables and functions */

__attribute__((used)) static u32 instream_get_bytes_available(struct hpi_hostbuffer_status *status)
{
	return status->dsp_index - status->host_index;
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
          int _len_status0 = 1;
          struct hpi_hostbuffer_status * status = (struct hpi_hostbuffer_status *) malloc(_len_status0*sizeof(struct hpi_hostbuffer_status));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].host_index = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].dsp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = instream_get_bytes_available(status);
          printf("%ld\n", benchRet); 
          free(status);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_status0 = 65025;
          struct hpi_hostbuffer_status * status = (struct hpi_hostbuffer_status *) malloc(_len_status0*sizeof(struct hpi_hostbuffer_status));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].host_index = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].dsp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = instream_get_bytes_available(status);
          printf("%ld\n", benchRet); 
          free(status);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_status0 = 100;
          struct hpi_hostbuffer_status * status = (struct hpi_hostbuffer_status *) malloc(_len_status0*sizeof(struct hpi_hostbuffer_status));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].host_index = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].dsp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = instream_get_bytes_available(status);
          printf("%ld\n", benchRet); 
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
