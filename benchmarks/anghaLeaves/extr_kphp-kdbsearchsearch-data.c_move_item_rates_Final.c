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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct index_item {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;
typedef  TYPE_1__ item_t ;

/* Variables and functions */

__attribute__((used)) static void move_item_rates (item_t *dst, struct index_item *src) {
  dst->rates = src->rates;
  dst->rates_len = src->rates_len;
  dst->mask = src->mask;

  src->rates = 0;
  src->rates_len = 0;
  src->mask = 0;
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
          int _len_dst0 = 1;
          struct TYPE_3__ * dst = (struct TYPE_3__ *) malloc(_len_dst0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].rates_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct index_item * src = (struct index_item *) malloc(_len_src0*sizeof(struct index_item));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].rates_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          move_item_rates(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
