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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct pyrf_event {TYPE_2__* evsel; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;

/* Variables and functions */
 scalar_t__ PERF_TYPE_TRACEPOINT ; 

__attribute__((used)) static bool is_tracepoint(struct pyrf_event *pevent)
{
	return pevent->evsel->attr.type == PERF_TYPE_TRACEPOINT;
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
          int _len_pevent0 = 1;
          struct pyrf_event * pevent = (struct pyrf_event *) malloc(_len_pevent0*sizeof(struct pyrf_event));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              int _len_pevent__i0__evsel0 = 1;
          pevent[_i0].evsel = (struct TYPE_4__ *) malloc(_len_pevent__i0__evsel0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pevent__i0__evsel0; _j0++) {
            pevent[_i0].evsel->attr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_tracepoint(pevent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(pevent[_aux].evsel);
          }
          free(pevent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
