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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int mode; int output_mode; scalar_t__ range; scalar_t__ size; } ;
struct nv50_head_atom {TYPE_1__ olut; } ;
struct nv50_head {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
headc37d_olut(struct nv50_head *head, struct nv50_head_atom *asyh)
{
	asyh->olut.mode = 2;
	asyh->olut.size = 0;
	asyh->olut.range = 0;
	asyh->olut.output_mode = 1;
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
          int _len_head0 = 1;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].olut.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.range = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          headc37d_olut(head,asyh);
          free(head);
          free(asyh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_head0 = 65025;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 65025;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].olut.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.range = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          headc37d_olut(head,asyh);
          free(head);
          free(asyh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_head0 = 100;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 100;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].olut.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.range = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].olut.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          headc37d_olut(head,asyh);
          free(head);
          free(asyh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
