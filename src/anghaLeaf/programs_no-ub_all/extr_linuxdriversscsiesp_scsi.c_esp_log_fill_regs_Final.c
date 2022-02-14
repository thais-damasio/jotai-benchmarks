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
struct esp_event_ent {int /*<<< orphan*/  event; int /*<<< orphan*/  select_state; int /*<<< orphan*/  ireg; int /*<<< orphan*/  sreg2; int /*<<< orphan*/  seqreg; int /*<<< orphan*/  sreg; } ;
struct esp {int /*<<< orphan*/  event; int /*<<< orphan*/  select_state; int /*<<< orphan*/  ireg; int /*<<< orphan*/  sreg2; int /*<<< orphan*/  seqreg; int /*<<< orphan*/  sreg; } ;

/* Variables and functions */

__attribute__((used)) static void esp_log_fill_regs(struct esp *esp,
			      struct esp_event_ent *p)
{
	p->sreg = esp->sreg;
	p->seqreg = esp->seqreg;
	p->sreg2 = esp->sreg2;
	p->ireg = esp->ireg;
	p->select_state = esp->select_state;
	p->event = esp->event;
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
          int _len_esp0 = 1;
          struct esp * esp = (struct esp *) malloc(_len_esp0*sizeof(struct esp));
          for(int _i0 = 0; _i0 < _len_esp0; _i0++) {
            esp->event = ((-2 * (next_i()%2)) + 1) * next_i();
        esp->select_state = ((-2 * (next_i()%2)) + 1) * next_i();
        esp->ireg = ((-2 * (next_i()%2)) + 1) * next_i();
        esp->sreg2 = ((-2 * (next_i()%2)) + 1) * next_i();
        esp->seqreg = ((-2 * (next_i()%2)) + 1) * next_i();
        esp->sreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct esp_event_ent * p = (struct esp_event_ent *) malloc(_len_p0*sizeof(struct esp_event_ent));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p->event = ((-2 * (next_i()%2)) + 1) * next_i();
        p->select_state = ((-2 * (next_i()%2)) + 1) * next_i();
        p->ireg = ((-2 * (next_i()%2)) + 1) * next_i();
        p->sreg2 = ((-2 * (next_i()%2)) + 1) * next_i();
        p->seqreg = ((-2 * (next_i()%2)) + 1) * next_i();
        p->sreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          esp_log_fill_regs(esp,p);
          free(esp);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}