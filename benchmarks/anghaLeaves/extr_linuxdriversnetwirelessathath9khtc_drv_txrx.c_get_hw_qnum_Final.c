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
typedef  int u16 ;

/* Variables and functions */
 size_t IEEE80211_AC_BE ; 
 size_t IEEE80211_AC_BK ; 
 size_t IEEE80211_AC_VI ; 
 size_t IEEE80211_AC_VO ; 

int get_hw_qnum(u16 queue, int *hwq_map)
{
	switch (queue) {
	case 0:
		return hwq_map[IEEE80211_AC_VO];
	case 1:
		return hwq_map[IEEE80211_AC_VI];
	case 2:
		return hwq_map[IEEE80211_AC_BE];
	case 3:
		return hwq_map[IEEE80211_AC_BK];
	default:
		return hwq_map[IEEE80211_AC_BE];
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
          int queue = 100;
          int _len_hwq_map0 = 1;
          int * hwq_map = (int *) malloc(_len_hwq_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hwq_map0; _i0++) {
            hwq_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_hw_qnum(queue,hwq_map);
          printf("%d\n", benchRet); 
          free(hwq_map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int queue = 255;
          int _len_hwq_map0 = 65025;
          int * hwq_map = (int *) malloc(_len_hwq_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hwq_map0; _i0++) {
            hwq_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_hw_qnum(queue,hwq_map);
          printf("%d\n", benchRet); 
          free(hwq_map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int queue = 10;
          int _len_hwq_map0 = 100;
          int * hwq_map = (int *) malloc(_len_hwq_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hwq_map0; _i0++) {
            hwq_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_hw_qnum(queue,hwq_map);
          printf("%d\n", benchRet); 
          free(hwq_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
