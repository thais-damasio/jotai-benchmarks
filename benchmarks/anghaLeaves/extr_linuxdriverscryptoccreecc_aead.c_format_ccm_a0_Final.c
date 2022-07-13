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
       1            big-arr-10x\n\
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
typedef  int u8 ;
typedef  unsigned long u32 ;

/* Variables and functions */

__attribute__((used)) static unsigned int format_ccm_a0(u8 *pa0_buff, u32 header_size)
{
	unsigned int len = 0;

	if (header_size == 0)
		return 0;

	if (header_size < ((1UL << 16) - (1UL << 8))) {
		len = 2;

		pa0_buff[0] = (header_size >> 8) & 0xFF;
		pa0_buff[1] = header_size & 0xFF;
	} else {
		len = 6;

		pa0_buff[0] = 0xFF;
		pa0_buff[1] = 0xFE;
		pa0_buff[2] = (header_size >> 24) & 0xFF;
		pa0_buff[3] = (header_size >> 16) & 0xFF;
		pa0_buff[4] = (header_size >> 8) & 0xFF;
		pa0_buff[5] = header_size & 0xFF;
	}

	return len;
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
          unsigned long header_size = 255;
          int _len_pa0_buff0 = 65025;
          int * pa0_buff = (int *) malloc(_len_pa0_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pa0_buff0; _i0++) {
            pa0_buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = format_ccm_a0(pa0_buff,header_size);
          printf("%u\n", benchRet); 
          free(pa0_buff);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long header_size = 10;
          int _len_pa0_buff0 = 100;
          int * pa0_buff = (int *) malloc(_len_pa0_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pa0_buff0; _i0++) {
            pa0_buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = format_ccm_a0(pa0_buff,header_size);
          printf("%u\n", benchRet); 
          free(pa0_buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
