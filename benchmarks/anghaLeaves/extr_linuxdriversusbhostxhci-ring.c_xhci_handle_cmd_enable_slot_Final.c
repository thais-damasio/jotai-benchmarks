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

/* Type definitions */
typedef  scalar_t__ u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int slot_id; } ;

/* Variables and functions */
 scalar_t__ COMP_SUCCESS ; 

__attribute__((used)) static void xhci_handle_cmd_enable_slot(struct xhci_hcd *xhci, int slot_id,
		struct xhci_command *command, u32 cmd_comp_code)
{
	if (cmd_comp_code == COMP_SUCCESS)
		command->slot_id = slot_id;
	else
		command->slot_id = 0;
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
          int slot_id = 100;
          long cmd_comp_code = 100;
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
            xhci[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_command0 = 1;
          struct xhci_command * command = (struct xhci_command *) malloc(_len_command0*sizeof(struct xhci_command));
          for(int _i0 = 0; _i0 < _len_command0; _i0++) {
            command[_i0].slot_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xhci_handle_cmd_enable_slot(xhci,slot_id,command,cmd_comp_code);
          free(xhci);
          free(command);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
