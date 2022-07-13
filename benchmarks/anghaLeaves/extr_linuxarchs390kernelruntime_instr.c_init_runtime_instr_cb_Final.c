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
struct runtime_instr_cb {int rla; int s; int k; int ps; int pc; int v; int /*<<< orphan*/  key; } ;

/* Variables and functions */
 int /*<<< orphan*/  PAGE_DEFAULT_KEY ; 

__attribute__((used)) static void init_runtime_instr_cb(struct runtime_instr_cb *cb)
{
	cb->rla = 0xfff;
	cb->s = 1;
	cb->k = 1;
	cb->ps = 1;
	cb->pc = 1;
	cb->key = PAGE_DEFAULT_KEY;
	cb->v = 1;
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
          int _len_cb0 = 1;
          struct runtime_instr_cb * cb = (struct runtime_instr_cb *) malloc(_len_cb0*sizeof(struct runtime_instr_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].rla = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].ps = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_runtime_instr_cb(cb);
          free(cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cb0 = 65025;
          struct runtime_instr_cb * cb = (struct runtime_instr_cb *) malloc(_len_cb0*sizeof(struct runtime_instr_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].rla = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].ps = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_runtime_instr_cb(cb);
          free(cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cb0 = 100;
          struct runtime_instr_cb * cb = (struct runtime_instr_cb *) malloc(_len_cb0*sizeof(struct runtime_instr_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].rla = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].ps = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_runtime_instr_cb(cb);
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
