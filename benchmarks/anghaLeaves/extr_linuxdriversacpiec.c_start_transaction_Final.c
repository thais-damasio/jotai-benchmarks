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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct acpi_ec {TYPE_1__* curr; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ ri; scalar_t__ wi; scalar_t__ irq_count; } ;

/* Variables and functions */

__attribute__((used)) static void start_transaction(struct acpi_ec *ec)
{
	ec->curr->irq_count = ec->curr->wi = ec->curr->ri = 0;
	ec->curr->flags = 0;
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
          int _len_ec0 = 1;
          struct acpi_ec * ec = (struct acpi_ec *) malloc(_len_ec0*sizeof(struct acpi_ec));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              int _len_ec__i0__curr0 = 1;
          ec[_i0].curr = (struct TYPE_2__ *) malloc(_len_ec__i0__curr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ec__i0__curr0; _j0++) {
            ec[_i0].curr->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->ri = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->wi = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          start_transaction(ec);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(ec[_aux].curr);
          }
          free(ec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ec0 = 65025;
          struct acpi_ec * ec = (struct acpi_ec *) malloc(_len_ec0*sizeof(struct acpi_ec));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              int _len_ec__i0__curr0 = 1;
          ec[_i0].curr = (struct TYPE_2__ *) malloc(_len_ec__i0__curr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ec__i0__curr0; _j0++) {
            ec[_i0].curr->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->ri = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->wi = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          start_transaction(ec);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(ec[_aux].curr);
          }
          free(ec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ec0 = 100;
          struct acpi_ec * ec = (struct acpi_ec *) malloc(_len_ec0*sizeof(struct acpi_ec));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              int _len_ec__i0__curr0 = 1;
          ec[_i0].curr = (struct TYPE_2__ *) malloc(_len_ec__i0__curr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ec__i0__curr0; _j0++) {
            ec[_i0].curr->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->ri = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->wi = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].curr->irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          start_transaction(ec);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(ec[_aux].curr);
          }
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
