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

/* Type definitions */
struct ahci_port {int cmd; scalar_t__ pending; scalar_t__ waitforclear; scalar_t__ sact; scalar_t__ ci; scalar_t__ ccs; } ;

/* Variables and functions */
 int AHCI_P_CMD_CCS_MASK ; 
 int AHCI_P_CMD_CR ; 
 int AHCI_P_CMD_ST ; 

__attribute__((used)) static void
ahci_check_stopped(struct ahci_port *p)
{
	/*
	 * If we are no longer processing the command list and nothing
	 * is in-flight, clear the running bit, the current command
	 * slot, the command issue and active bits.
	 */
	if (!(p->cmd & AHCI_P_CMD_ST)) {
		if (p->pending == 0) {
			p->ccs = 0;
			p->cmd &= ~((unsigned) (AHCI_P_CMD_CR | AHCI_P_CMD_CCS_MASK));
			p->ci = 0;
			p->sact = 0;
			p->waitforclear = 0;
		}
	}
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
          struct ahci_port * p = (struct ahci_port *) malloc(_len_p0*sizeof(struct ahci_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p->cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        p->pending = ((-2 * (next_i()%2)) + 1) * next_i();
        p->waitforclear = ((-2 * (next_i()%2)) + 1) * next_i();
        p->sact = ((-2 * (next_i()%2)) + 1) * next_i();
        p->ci = ((-2 * (next_i()%2)) + 1) * next_i();
        p->ccs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahci_check_stopped(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}