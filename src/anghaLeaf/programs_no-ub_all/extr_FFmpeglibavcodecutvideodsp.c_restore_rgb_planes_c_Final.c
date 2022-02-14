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
typedef  scalar_t__ uint8_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void restore_rgb_planes_c(uint8_t *src_r,
                                 uint8_t *src_g,
                                 uint8_t *src_b,
                                 ptrdiff_t linesize_r,
                                 ptrdiff_t linesize_g,
                                 ptrdiff_t linesize_b,
                                 int width, int height)
{
    uint8_t r, g, b;
    int i, j;

    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            r = src_r[i];
            g = src_g[i];
            b = src_b[i];
            src_r[i] = r + g - 0x80;
            src_b[i] = b + g - 0x80;
        }
        src_r += linesize_r;
        src_g += linesize_g;
        src_b += linesize_b;
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
          int linesize_r = 255;
          int linesize_g = 255;
          int linesize_b = 255;
          int width = 255;
          int height = 255;
          int _len_src_r0 = 65025;
          long * src_r = (long *) malloc(_len_src_r0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src_r0; _i0++) {
            src_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_g0 = 65025;
          long * src_g = (long *) malloc(_len_src_g0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src_g0; _i0++) {
            src_g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_b0 = 65025;
          long * src_b = (long *) malloc(_len_src_b0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src_b0; _i0++) {
            src_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          restore_rgb_planes_c(src_r,src_g,src_b,linesize_r,linesize_g,linesize_b,width,height);
          free(src_r);
          free(src_g);
          free(src_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}