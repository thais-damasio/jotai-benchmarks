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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ size; } ;
typedef  TYPE_1__ RBinElfSection ;
typedef  TYPE_2__ ELFOBJ ;

/* Variables and functions */

__attribute__((used)) static bool sectionIsInvalid(ELFOBJ *bin, RBinElfSection *sect) {
	return (sect->offset + sect->size > bin->size);
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
          int _len_bin0 = 1;
          struct TYPE_6__ * bin = (struct TYPE_6__ *) malloc(_len_bin0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
            bin->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sect0 = 1;
          struct TYPE_5__ * sect = (struct TYPE_5__ *) malloc(_len_sect0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sect0; _i0++) {
            sect->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        sect->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sectionIsInvalid(bin,sect);
          printf("%d\n", benchRet); 
          free(bin);
          free(sect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}