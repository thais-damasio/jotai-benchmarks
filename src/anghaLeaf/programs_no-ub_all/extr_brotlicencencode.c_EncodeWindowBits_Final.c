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
typedef  int uint8_t ;
typedef  int uint16_t ;
typedef  scalar_t__ BROTLI_BOOL ;

/* Variables and functions */

__attribute__((used)) static void EncodeWindowBits(int lgwin, BROTLI_BOOL large_window,
    uint16_t* last_bytes, uint8_t* last_bytes_bits) {
  if (large_window) {
    *last_bytes = (uint16_t)(((lgwin & 0x3F) << 8) | 0x11);
    *last_bytes_bits = 14;
  } else {
    if (lgwin == 16) {
      *last_bytes = 0;
      *last_bytes_bits = 1;
    } else if (lgwin == 17) {
      *last_bytes = 1;
      *last_bytes_bits = 7;
    } else if (lgwin > 17) {
      *last_bytes = (uint16_t)(((lgwin - 17) << 1) | 0x01);
      *last_bytes_bits = 4;
    } else {
      *last_bytes = (uint16_t)(((lgwin - 8) << 4) | 0x01);
      *last_bytes_bits = 7;
    }
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
          int lgwin = 255;
          long large_window = 255;
          int _len_last_bytes0 = 65025;
          int * last_bytes = (int *) malloc(_len_last_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_last_bytes0; _i0++) {
            last_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last_bytes_bits0 = 65025;
          int * last_bytes_bits = (int *) malloc(_len_last_bytes_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_last_bytes_bits0; _i0++) {
            last_bytes_bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          EncodeWindowBits(lgwin,large_window,last_bytes,last_bytes_bits);
          free(last_bytes);
          free(last_bytes_bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
