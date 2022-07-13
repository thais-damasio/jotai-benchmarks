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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ time; } ;
typedef  TYPE_1__ lwKey ;

/* Variables and functions */

__attribute__((used)) static int compare_keys( lwKey *k1, lwKey *k2 ){
	return k1->time > k2->time ? 1 : k1->time < k2->time ? -1 : 0;
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
          int _len_k10 = 1;
          struct TYPE_4__ * k1 = (struct TYPE_4__ *) malloc(_len_k10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 1;
          struct TYPE_4__ * k2 = (struct TYPE_4__ *) malloc(_len_k20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(k1,k2);
          printf("%d\n", benchRet); 
          free(k1);
          free(k2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_k10 = 65025;
          struct TYPE_4__ * k1 = (struct TYPE_4__ *) malloc(_len_k10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 65025;
          struct TYPE_4__ * k2 = (struct TYPE_4__ *) malloc(_len_k20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(k1,k2);
          printf("%d\n", benchRet); 
          free(k1);
          free(k2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_k10 = 100;
          struct TYPE_4__ * k1 = (struct TYPE_4__ *) malloc(_len_k10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 100;
          struct TYPE_4__ * k2 = (struct TYPE_4__ *) malloc(_len_k20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(k1,k2);
          printf("%d\n", benchRet); 
          free(k1);
          free(k2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
