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
struct ipw_tty {unsigned int control_lines; } ;

/* Variables and functions */
 unsigned int IPW_CONTROL_LINE_CTS ; 
 unsigned int IPW_CONTROL_LINE_DCD ; 
 unsigned int IPW_CONTROL_LINE_DSR ; 
 unsigned int IPW_CONTROL_LINE_DTR ; 
 unsigned int IPW_CONTROL_LINE_RTS ; 
 unsigned int TIOCM_CD ; 
 unsigned int TIOCM_CTS ; 
 unsigned int TIOCM_DSR ; 
 unsigned int TIOCM_DTR ; 
 unsigned int TIOCM_RTS ; 

__attribute__((used)) static int get_control_lines(struct ipw_tty *tty)
{
	unsigned int my = tty->control_lines;
	unsigned int out = 0;

	if (my & IPW_CONTROL_LINE_RTS)
		out |= TIOCM_RTS;
	if (my & IPW_CONTROL_LINE_DTR)
		out |= TIOCM_DTR;
	if (my & IPW_CONTROL_LINE_CTS)
		out |= TIOCM_CTS;
	if (my & IPW_CONTROL_LINE_DSR)
		out |= TIOCM_DSR;
	if (my & IPW_CONTROL_LINE_DCD)
		out |= TIOCM_CD;

	return out;
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
          int _len_tty0 = 1;
          struct ipw_tty * tty = (struct ipw_tty *) malloc(_len_tty0*sizeof(struct ipw_tty));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty->control_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_control_lines(tty);
          printf("%d\n", benchRet); 
          free(tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}