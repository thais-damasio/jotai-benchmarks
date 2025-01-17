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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ round; scalar_t__ samples; } ;
struct TYPE_5__ {scalar_t__ samples; scalar_t__ target; scalar_t__ real; double last; } ;
typedef  TYPE_1__ SRContext ;
typedef  TYPE_2__ ACrusherContext ;

/* Variables and functions */

__attribute__((used)) static double samplereduction(ACrusherContext *s, SRContext *sr, double in)
{
    sr->samples++;
    if (sr->samples >= s->round) {
        sr->target += s->samples;
        sr->real += s->round;
        if (sr->target + s->samples >= sr->real + 1) {
            sr->last = in;
            sr->target = 0;
            sr->real   = 0;
        }
        sr->samples = 0;
    }
    return sr->last;
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
          double in = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].round = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sr0 = 1;
          struct TYPE_5__ * sr = (struct TYPE_5__ *) malloc(_len_sr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sr0; _i0++) {
            sr[_i0].samples = ((-2 * (next_i()%2)) + 1) * next_i();
        sr[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        sr[_i0].real = ((-2 * (next_i()%2)) + 1) * next_i();
        sr[_i0].last = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = samplereduction(s,sr,in);
          printf("%lf\n", benchRet); 
          free(s);
          free(sr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
