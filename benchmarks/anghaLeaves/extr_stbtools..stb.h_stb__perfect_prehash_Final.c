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
typedef  int stb_uint16 ;
typedef  int stb_uint ;
struct TYPE_3__ {int multiplicand; int b_mask; int table_mask; } ;
typedef  TYPE_1__ stb_perfect ;

/* Variables and functions */

__attribute__((used)) static void stb__perfect_prehash(stb_perfect *p, stb_uint x, stb_uint16 *a, stb_uint16 *b)
{
   stb_uint m = x * p->multiplicand;
   stb_uint y = x >> 16;
   stb_uint bv = (m >> 24) + y;
   stb_uint av = (m + y) >> 12;
   bv &= p->b_mask;
   av &= p->table_mask;
   *b = bv;
   *a = av;
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
          int x = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].multiplicand = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].b_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].table_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stb__perfect_prehash(p,x,a,b);
          free(p);
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
