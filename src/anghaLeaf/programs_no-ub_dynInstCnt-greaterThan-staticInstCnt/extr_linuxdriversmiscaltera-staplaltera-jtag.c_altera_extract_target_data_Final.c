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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void altera_extract_target_data(u8 *buffer,
				u8 *target_data,
				u32 start_index,
				u32 preamble_count,
				u32 target_count)
/*
 * Copies target data from scan buffer, filtering out
 * preamble and postamble data.
 */
{
	u32 i;
	u32 j;
	u32 k;

	j = preamble_count;
	k = start_index + target_count;
	for (i = start_index; i < k; ++i, ++j) {
		if (buffer[j >> 3] & (1 << (j & 7)))
			target_data[i >> 3] |= (1 << (i & 7));
		else
			target_data[i >> 3] &= ~(u32)(1 << (i & 7));

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

    // big-arr
    case 0:
    {
          int start_index = 255;
          int preamble_count = 255;
          int target_count = 255;
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target_data0 = 65025;
          int * target_data = (int *) malloc(_len_target_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_target_data0; _i0++) {
            target_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          altera_extract_target_data(buffer,target_data,start_index,preamble_count,target_count);
          free(buffer);
          free(target_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
