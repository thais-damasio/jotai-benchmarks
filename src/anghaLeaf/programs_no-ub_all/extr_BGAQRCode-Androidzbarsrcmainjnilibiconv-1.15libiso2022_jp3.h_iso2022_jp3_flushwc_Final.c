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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int ucs4_t ;
typedef  TYPE_1__* conv_t ;
struct TYPE_3__ {int istate; } ;

/* Variables and functions */

__attribute__((used)) static int
iso2022_jp3_flushwc (conv_t conv, ucs4_t *pwc)
{
  ucs4_t last_wc = conv->istate >> 3;
  if (last_wc) {
    /* Output the buffered character. */
    conv->istate &= 7;
    *pwc = last_wc;
    return 1;
  } else
    return 0;
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
          int _len_conv0 = 1;
          struct TYPE_3__ * conv = (struct TYPE_3__ *) malloc(_len_conv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_conv0; _i0++) {
            conv->istate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwc0 = 65025;
          int * pwc = (int *) malloc(_len_pwc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwc0; _i0++) {
            pwc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iso2022_jp3_flushwc(conv,pwc);
          printf("%d\n", benchRet); 
          free(conv);
          free(pwc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}