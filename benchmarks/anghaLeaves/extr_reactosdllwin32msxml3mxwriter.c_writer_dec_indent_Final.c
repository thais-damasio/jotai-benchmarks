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
struct TYPE_3__ {int /*<<< orphan*/  text; scalar_t__ indent; } ;
typedef  TYPE_1__ mxwriter ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

__attribute__((used)) static inline void writer_dec_indent(mxwriter *This)
{
    if (This->indent) This->indent--;
    /* depth is decreased only when element is closed, meaning it's not a text node
       at this point */
    This->text = FALSE;
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
          int _len_This0 = 1;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].text = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].indent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          writer_dec_indent(This);
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
