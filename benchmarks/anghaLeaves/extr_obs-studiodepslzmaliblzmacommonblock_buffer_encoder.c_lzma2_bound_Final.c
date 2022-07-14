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
typedef  int lzma_vli ;

/* Variables and functions */
 int COMPRESSED_SIZE_MAX ; 
 int LZMA2_CHUNK_MAX ; 
 int LZMA2_HEADER_UNCOMPRESSED ; 

__attribute__((used)) static lzma_vli
lzma2_bound(lzma_vli uncompressed_size)
{
	// Prevent integer overflow in overhead calculation.
	if (uncompressed_size > COMPRESSED_SIZE_MAX)
		return 0;

	// Calculate the exact overhead of the LZMA2 headers: Round
	// uncompressed_size up to the next multiple of LZMA2_CHUNK_MAX,
	// multiply by the size of per-chunk header, and add one byte for
	// the end marker.
	const lzma_vli overhead = ((uncompressed_size + LZMA2_CHUNK_MAX - 1)
				/ LZMA2_CHUNK_MAX)
			* LZMA2_HEADER_UNCOMPRESSED + 1;

	// Catch the possible integer overflow.
	if (COMPRESSED_SIZE_MAX - overhead < uncompressed_size)
		return 0;

	return uncompressed_size + overhead;
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
          int uncompressed_size = 100;
          int benchRet = lzma2_bound(uncompressed_size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int uncompressed_size = 255;
          int benchRet = lzma2_bound(uncompressed_size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int uncompressed_size = 10;
          int benchRet = lzma2_bound(uncompressed_size);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}