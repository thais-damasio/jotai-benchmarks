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
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u32 ;
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static u16 t4_calc_check_sum(u8 *buffer,
		unsigned long offset, unsigned long length)
{
	u16 sum1 = 0xFF, sum2 = 0xFF;
	unsigned long i = 0;

	if (offset + length >= 50)
		return 0;

	while (length > 0) {
		u32 tlen = length > 20 ? 20 : length;

		length -= tlen;

		do {
			sum1 += buffer[offset + i];
			sum2 += sum1;
			i++;
		} while (--tlen > 0);

		sum1 = (sum1 & 0xFF) + (sum1 >> 8);
		sum2 = (sum2 & 0xFF) + (sum2 >> 8);
	}

	sum1 = (sum1 & 0xFF) + (sum1 >> 8);
	sum2 = (sum2 & 0xFF) + (sum2 >> 8);

	return(sum2 << 8 | sum1);
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
          unsigned long offset = 100;
          unsigned long length = 100;
          int _len_buffer0 = 1;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = t4_calc_check_sum(buffer,offset,length);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          unsigned long length = 255;
          int _len_buffer0 = 65025;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = t4_calc_check_sum(buffer,offset,length);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          unsigned long length = 10;
          int _len_buffer0 = 100;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = t4_calc_check_sum(buffer,offset,length);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
