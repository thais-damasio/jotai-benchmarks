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
typedef  unsigned long long uint64_t ;
struct mp_chmap {size_t num; int* speaker; } ;

/* Variables and functions */
 size_t MP_NUM_CHANNELS ; 

void mp_chmap_from_lavc(struct mp_chmap *dst, uint64_t src)
{
    dst->num = 0;
    for (int n = 0; n < 64; n++) {
        if (src & (1ULL << n)) {
            if (dst->num >= MP_NUM_CHANNELS) {
                dst->num = 0;
                return;
            }
            dst->speaker[dst->num] = n;
            dst->num++;
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

    // int-bounds
    case 0:
    {
          unsigned long long src = 100;
          int _len_dst0 = 1;
          struct mp_chmap * dst = (struct mp_chmap *) malloc(_len_dst0*sizeof(struct mp_chmap));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__speaker0 = 1;
          dst[_i0].speaker = (int *) malloc(_len_dst__i0__speaker0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__speaker0; _j0++) {
            dst[_i0].speaker[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mp_chmap_from_lavc(dst,src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].speaker);
          }
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long src = 255;
          int _len_dst0 = 65025;
          struct mp_chmap * dst = (struct mp_chmap *) malloc(_len_dst0*sizeof(struct mp_chmap));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__speaker0 = 1;
          dst[_i0].speaker = (int *) malloc(_len_dst__i0__speaker0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__speaker0; _j0++) {
            dst[_i0].speaker[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mp_chmap_from_lavc(dst,src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].speaker);
          }
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long src = 10;
          int _len_dst0 = 100;
          struct mp_chmap * dst = (struct mp_chmap *) malloc(_len_dst0*sizeof(struct mp_chmap));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__speaker0 = 1;
          dst[_i0].speaker = (int *) malloc(_len_dst__i0__speaker0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__speaker0; _j0++) {
            dst[_i0].speaker[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mp_chmap_from_lavc(dst,src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].speaker);
          }
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}