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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint64_t ;
struct TYPE_3__ {size_t min; size_t max; size_t* data; } ;
typedef  TYPE_1__ stats ;

/* Variables and functions */

uint64_t stats_value_at(stats *stats, uint64_t index, uint64_t *count) {
    *count = 0;
    for (uint64_t i = stats->min; i <= stats->max; i++) {
        if (stats->data[i] && (*count)++ == index) {
            *count = stats->data[i];
            return i;
        }
    }
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

    // int-bounds
    case 0:
    {
          unsigned long index = 100;
          int _len_stats0 = 1;
          struct TYPE_3__ * stats = (struct TYPE_3__ *) malloc(_len_stats0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__data0 = 1;
          stats[_i0].data = (unsigned long *) malloc(_len_stats__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_stats__i0__data0; _j0++) {
            stats[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_count0 = 1;
          unsigned long * count = (unsigned long *) malloc(_len_count0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = stats_value_at(stats,index,count);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].data);
          }
          free(stats);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          int _len_stats0 = 65025;
          struct TYPE_3__ * stats = (struct TYPE_3__ *) malloc(_len_stats0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__data0 = 1;
          stats[_i0].data = (unsigned long *) malloc(_len_stats__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_stats__i0__data0; _j0++) {
            stats[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_count0 = 65025;
          unsigned long * count = (unsigned long *) malloc(_len_count0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = stats_value_at(stats,index,count);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].data);
          }
          free(stats);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          int _len_stats0 = 100;
          struct TYPE_3__ * stats = (struct TYPE_3__ *) malloc(_len_stats0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__data0 = 1;
          stats[_i0].data = (unsigned long *) malloc(_len_stats__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_stats__i0__data0; _j0++) {
            stats[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_count0 = 100;
          unsigned long * count = (unsigned long *) malloc(_len_count0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = stats_value_at(stats,index,count);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].data);
          }
          free(stats);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}