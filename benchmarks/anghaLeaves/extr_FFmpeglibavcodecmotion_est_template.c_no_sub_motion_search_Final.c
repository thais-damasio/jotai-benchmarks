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
typedef  int /*<<< orphan*/  MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static int no_sub_motion_search(MpegEncContext * s,
          int *mx_ptr, int *my_ptr, int dmin,
                                  int src_index, int ref_index,
                                  int size, int h)
{
    (*mx_ptr)<<=1;
    (*my_ptr)<<=1;
    return dmin;
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
          int dmin = 100;
          int src_index = 100;
          int ref_index = 100;
          int size = 100;
          int h = 100;
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mx_ptr0 = 1;
          int * mx_ptr = (int *) malloc(_len_mx_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mx_ptr0; _i0++) {
            mx_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_my_ptr0 = 1;
          int * my_ptr = (int *) malloc(_len_my_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_my_ptr0; _i0++) {
            my_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = no_sub_motion_search(s,mx_ptr,my_ptr,dmin,src_index,ref_index,size,h);
          printf("%d\n", benchRet); 
          free(s);
          free(mx_ptr);
          free(my_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dmin = 255;
          int src_index = 255;
          int ref_index = 255;
          int size = 255;
          int h = 255;
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mx_ptr0 = 65025;
          int * mx_ptr = (int *) malloc(_len_mx_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mx_ptr0; _i0++) {
            mx_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_my_ptr0 = 65025;
          int * my_ptr = (int *) malloc(_len_my_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_my_ptr0; _i0++) {
            my_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = no_sub_motion_search(s,mx_ptr,my_ptr,dmin,src_index,ref_index,size,h);
          printf("%d\n", benchRet); 
          free(s);
          free(mx_ptr);
          free(my_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dmin = 10;
          int src_index = 10;
          int ref_index = 10;
          int size = 10;
          int h = 10;
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mx_ptr0 = 100;
          int * mx_ptr = (int *) malloc(_len_mx_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mx_ptr0; _i0++) {
            mx_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_my_ptr0 = 100;
          int * my_ptr = (int *) malloc(_len_my_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_my_ptr0; _i0++) {
            my_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = no_sub_motion_search(s,mx_ptr,my_ptr,dmin,src_index,ref_index,size,h);
          printf("%d\n", benchRet); 
          free(s);
          free(mx_ptr);
          free(my_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
