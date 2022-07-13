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
struct xyarray {void* contents; int row_size; int entry_size; } ;

/* Variables and functions */

__attribute__((used)) static inline void *xyarray__entry(struct xyarray *xy, int x, int y)
{
	return &xy->contents[x * xy->row_size + y * xy->entry_size];
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
          int x = 100;
          int y = 100;
          int _len_xy0 = 1;
          struct xyarray * xy = (struct xyarray *) malloc(_len_xy0*sizeof(struct xyarray));
          for(int _i0 = 0; _i0 < _len_xy0; _i0++) {
            xy[_i0].row_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xy[_i0].entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = xyarray__entry(xy,x,y);
          printf("{{other_type}} %p\n", &benchRet); 
          free(xy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_xy0 = 65025;
          struct xyarray * xy = (struct xyarray *) malloc(_len_xy0*sizeof(struct xyarray));
          for(int _i0 = 0; _i0 < _len_xy0; _i0++) {
            xy[_i0].row_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xy[_i0].entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = xyarray__entry(xy,x,y);
          printf("{{other_type}} %p\n", &benchRet); 
          free(xy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_xy0 = 100;
          struct xyarray * xy = (struct xyarray *) malloc(_len_xy0*sizeof(struct xyarray));
          for(int _i0 = 0; _i0 < _len_xy0; _i0++) {
            xy[_i0].row_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xy[_i0].entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = xyarray__entry(xy,x,y);
          printf("{{other_type}} %p\n", &benchRet); 
          free(xy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
