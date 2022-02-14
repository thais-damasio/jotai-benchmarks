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
typedef  scalar_t__ UINT ;
struct TYPE_3__ {size_t firstvar; scalar_t__ varcount; int /*<<< orphan*/ ** values; struct TYPE_3__* prev; } ;
typedef  size_t TCHAR ;
typedef  int /*<<< orphan*/ * LPTSTR ;
typedef  TYPE_1__ FOR_CONTEXT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 TYPE_1__* fc ; 

__attribute__((used)) static LPTSTR FindForVar(TCHAR Var, BOOL *IsParam0)
{
    FOR_CONTEXT *Ctx;
    *IsParam0 = FALSE;
    for (Ctx = fc; Ctx != NULL; Ctx = Ctx->prev)
    {
        if ((UINT)(Var - Ctx->firstvar) < Ctx->varcount)
            return Ctx->values[Var - Ctx->firstvar];
    }
    return NULL;
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
          unsigned long Var = 255;
          int _len_IsParam00 = 65025;
          int * IsParam0 = (int *) malloc(_len_IsParam00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_IsParam00; _i0++) {
            IsParam0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = FindForVar(Var,IsParam0);
          printf("{{other_type}} %p\n", &benchRet); 
          free(IsParam0);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}