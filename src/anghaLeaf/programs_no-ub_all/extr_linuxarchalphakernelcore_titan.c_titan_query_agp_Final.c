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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int apctl_v_agp_present; } ;
union TPAchipPCTL {TYPE_2__ pctl_r_bits; int /*<<< orphan*/  pctl_q_whole; } ;
struct TYPE_5__ {int /*<<< orphan*/  csr; } ;
struct TYPE_7__ {TYPE_1__ pctl; } ;
typedef  TYPE_3__ titan_pachip_port ;

/* Variables and functions */

__attribute__((used)) static int
titan_query_agp(titan_pachip_port *port)
{
	union TPAchipPCTL pctl;

	/* set up APCTL */
	pctl.pctl_q_whole = port->pctl.csr;

	return pctl.pctl_r_bits.apctl_v_agp_present;

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
          int _len_port0 = 1;
          struct TYPE_7__ * port = (struct TYPE_7__ *) malloc(_len_port0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port->pctl.csr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = titan_query_agp(port);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
