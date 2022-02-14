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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int UINT ;
struct TYPE_5__ {int value; scalar_t__ fract; } ;
struct TYPE_6__ {int value; scalar_t__ fract; } ;
struct TYPE_7__ {TYPE_1__ y; TYPE_2__ x; } ;
typedef  TYPE_3__ POINTFX ;
typedef  int GLdouble ;

/* Variables and functions */

__attribute__((used)) static void fixed_to_double(POINTFX fixed, UINT em_size, GLdouble vertex[3])
{
    vertex[0] = (fixed.x.value + (GLdouble)fixed.x.fract / (1 << 16)) / em_size;  
    vertex[1] = (fixed.y.value + (GLdouble)fixed.y.fract / (1 << 16)) / em_size;  
    vertex[2] = 0.0;
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
          int em_size = 255;
          struct TYPE_7__ fixed;
        fixed.y.value = ((-2 * (next_i()%2)) + 1) * next_i();
        fixed.y.fract = ((-2 * (next_i()%2)) + 1) * next_i();
        fixed.x.value = ((-2 * (next_i()%2)) + 1) * next_i();
        fixed.x.fract = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vertex0 = 3;
          int * vertex = (int *) malloc(_len_vertex0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vertex0; _i0++) {
            vertex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fixed_to_double(fixed,em_size,vertex);
          free(vertex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
