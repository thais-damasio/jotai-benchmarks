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
typedef  scalar_t__ UInt32 ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ cyclicBufferSize; scalar_t__ cyclicBufferPos; scalar_t__ streamPos; scalar_t__ keepSizeAfter; scalar_t__ matchMaxLen; scalar_t__ posLimit; scalar_t__ lenLimit; } ;
typedef  TYPE_1__ CMatchFinder ;

/* Variables and functions */
 scalar_t__ kMaxValForNormalize ; 

__attribute__((used)) static void MatchFinder_SetLimits(CMatchFinder *p)
{
  UInt32 limit = kMaxValForNormalize - p->pos;
  UInt32 limit2 = p->cyclicBufferSize - p->cyclicBufferPos;
  
  if (limit2 < limit)
    limit = limit2;
  limit2 = p->streamPos - p->pos;
  
  if (limit2 <= p->keepSizeAfter)
  {
    if (limit2 > 0)
      limit2 = 1;
  }
  else
    limit2 -= p->keepSizeAfter;
  
  if (limit2 < limit)
    limit = limit2;
  
  {
    UInt32 lenLimit = p->streamPos - p->pos;
    if (lenLimit > p->matchMaxLen)
      lenLimit = p->matchMaxLen;
    p->lenLimit = lenLimit;
  }
  p->posLimit = p->pos + limit;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p->pos = ((-2 * (next_i()%2)) + 1) * next_i();
        p->cyclicBufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p->cyclicBufferPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p->streamPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p->keepSizeAfter = ((-2 * (next_i()%2)) + 1) * next_i();
        p->matchMaxLen = ((-2 * (next_i()%2)) + 1) * next_i();
        p->posLimit = ((-2 * (next_i()%2)) + 1) * next_i();
        p->lenLimit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MatchFinder_SetLimits(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
