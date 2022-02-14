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
typedef  int BYTE ;
typedef  int ARGB ;

/* Variables and functions */

__attribute__((used)) static inline ARGB color_over_fgpremult(ARGB bg, ARGB fg)
{
    BYTE b, g, r, a;
    BYTE bg_alpha, fg_alpha;

    fg_alpha = (fg>>24)&0xff;

    if (fg_alpha == 0) return bg;

    bg_alpha = (((bg>>24)&0xff) * (0xff-fg_alpha)) / 0xff;

    a = bg_alpha + fg_alpha;
    b = ((bg&0xff)*bg_alpha + (fg&0xff)*0xff)/a;
    g = (((bg>>8)&0xff)*bg_alpha + ((fg>>8)&0xff)*0xff)/a;
    r = (((bg>>16)&0xff)*bg_alpha + ((fg>>16)&0xff)*0xff)/a;

    return (a<<24)|(r<<16)|(g<<8)|b;
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
          int bg = 255;
          int fg = 255;
          int benchRet = color_over_fgpremult(bg,fg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}