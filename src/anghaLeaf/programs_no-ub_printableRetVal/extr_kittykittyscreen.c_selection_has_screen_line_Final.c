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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int start_scrolled_by; int end_scrolled_by; scalar_t__ start_x; scalar_t__ end_x; scalar_t__ start_y; scalar_t__ end_y; } ;
typedef  TYPE_1__ Selection ;

/* Variables and functions */

__attribute__((used)) static inline bool
selection_has_screen_line(Selection *s, int y) {
    if (s->start_scrolled_by == s->end_scrolled_by && s->start_x == s->end_x && s->start_y == s->end_y) return false;
    int top = (int)s->start_y - s->start_scrolled_by;
    int bottom = (int)s->end_y - s->end_scrolled_by;
    return top <= y && y <= bottom;
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
          int y = 255;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        s->end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        s->start_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s->end_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s->start_y = ((-2 * (next_i()%2)) + 1) * next_i();
        s->end_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = selection_has_screen_line(s,y);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}