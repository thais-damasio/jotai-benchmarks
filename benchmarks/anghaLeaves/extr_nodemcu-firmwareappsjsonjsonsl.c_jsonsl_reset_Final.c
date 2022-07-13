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
typedef  TYPE_1__* jsonsl_t ;
struct TYPE_3__ {int can_insert; scalar_t__ expecting; scalar_t__ in_escape; scalar_t__ stopfl; scalar_t__ level; scalar_t__ pos; scalar_t__ tok_last; } ;

/* Variables and functions */

void jsonsl_reset(jsonsl_t jsn)
{
    jsn->tok_last = 0;
    jsn->can_insert = 1;
    jsn->pos = 0;
    jsn->level = 0;
    jsn->stopfl = 0;
    jsn->in_escape = 0;
    jsn->expecting = 0;
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
          int _len_jsn0 = 1;
          struct TYPE_3__ * jsn = (struct TYPE_3__ *) malloc(_len_jsn0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jsn0; _i0++) {
            jsn[_i0].can_insert = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].expecting = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].in_escape = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].stopfl = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].tok_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jsonsl_reset(jsn);
          free(jsn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_jsn0 = 65025;
          struct TYPE_3__ * jsn = (struct TYPE_3__ *) malloc(_len_jsn0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jsn0; _i0++) {
            jsn[_i0].can_insert = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].expecting = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].in_escape = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].stopfl = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].tok_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jsonsl_reset(jsn);
          free(jsn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_jsn0 = 100;
          struct TYPE_3__ * jsn = (struct TYPE_3__ *) malloc(_len_jsn0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jsn0; _i0++) {
            jsn[_i0].can_insert = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].expecting = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].in_escape = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].stopfl = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        jsn[_i0].tok_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jsonsl_reset(jsn);
          free(jsn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
