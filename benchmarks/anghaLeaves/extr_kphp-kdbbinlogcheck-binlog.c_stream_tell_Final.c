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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {long long readto_off; TYPE_1__* F; } ;
typedef  TYPE_2__ stream_t ;
struct TYPE_4__ {long long offset; } ;

/* Variables and functions */

__attribute__((used)) static long long stream_tell (stream_t *S) {
  return S->readto_off + S->F->offset;
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
          int _len_S0 = 1;
          struct TYPE_5__ * S = (struct TYPE_5__ *) malloc(_len_S0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].readto_off = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_S__i0__F0 = 1;
          S[_i0].F = (struct TYPE_4__ *) malloc(_len_S__i0__F0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_S__i0__F0; _j0++) {
            S[_i0].F->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = stream_tell(S);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].F);
          }
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
