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

/* Variables and functions */

__attribute__((used)) static void isaac_mix(unsigned _x[8]){
  static const unsigned char SHIFT[8]={11,2,8,16,10,4,8,9};
  int i;
  for(i=0;i<8;i++){
    _x[i]^=_x[i+1&7]<<SHIFT[i];
    _x[i+3&7]+=_x[i];
    _x[i+1&7]+=_x[i+2&7];
    i++;
    _x[i]^=_x[i+1&7]>>SHIFT[i];
    _x[i+3&7]+=_x[i];
    _x[i+1&7]+=_x[i+2&7];
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
          int _len__x0 = 8;
          unsigned int * _x = (unsigned int *) malloc(_len__x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__x0; _i0++) {
            _x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isaac_mix(_x);
          free(_x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
