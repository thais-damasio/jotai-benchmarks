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
struct fbcon_ops {int /*<<< orphan*/  update_start; int /*<<< orphan*/  cursor; int /*<<< orphan*/  clear_margins; int /*<<< orphan*/  putcs; int /*<<< orphan*/  clear; int /*<<< orphan*/  bmove; } ;

/* Variables and functions */
 int /*<<< orphan*/  ccw_bmove ; 
 int /*<<< orphan*/  ccw_clear ; 
 int /*<<< orphan*/  ccw_clear_margins ; 
 int /*<<< orphan*/  ccw_cursor ; 
 int /*<<< orphan*/  ccw_putcs ; 
 int /*<<< orphan*/  ccw_update_start ; 

void fbcon_rotate_ccw(struct fbcon_ops *ops)
{
	ops->bmove = ccw_bmove;
	ops->clear = ccw_clear;
	ops->putcs = ccw_putcs;
	ops->clear_margins = ccw_clear_margins;
	ops->cursor = ccw_cursor;
	ops->update_start = ccw_update_start;
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
          int _len_ops0 = 1;
          struct fbcon_ops * ops = (struct fbcon_ops *) malloc(_len_ops0*sizeof(struct fbcon_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].update_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_margins = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].putcs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].bmove = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbcon_rotate_ccw(ops);
          free(ops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ops0 = 65025;
          struct fbcon_ops * ops = (struct fbcon_ops *) malloc(_len_ops0*sizeof(struct fbcon_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].update_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_margins = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].putcs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].bmove = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbcon_rotate_ccw(ops);
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ops0 = 100;
          struct fbcon_ops * ops = (struct fbcon_ops *) malloc(_len_ops0*sizeof(struct fbcon_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].update_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_margins = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].putcs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].bmove = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbcon_rotate_ccw(ops);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
