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
struct wm831x {int /*<<< orphan*/  locked; } ;

/* Variables and functions */
#define  WM831X_BACKUP_CHARGER_CONTROL 133 
#define  WM831X_CHARGER_CONTROL_1 132 
#define  WM831X_CHARGER_CONTROL_2 131 
#define  WM831X_DC4_CONTROL 130 
#define  WM831X_ON_PIN_CONTROL 129 
#define  WM831X_WATCHDOG 128 

__attribute__((used)) static int wm831x_reg_locked(struct wm831x *wm831x, unsigned short reg)
{
	if (!wm831x->locked)
		return 0;

	switch (reg) {
	case WM831X_WATCHDOG:
	case WM831X_DC4_CONTROL:
	case WM831X_ON_PIN_CONTROL:
	case WM831X_BACKUP_CHARGER_CONTROL:
	case WM831X_CHARGER_CONTROL_1:
	case WM831X_CHARGER_CONTROL_2:
		return 1;

	default:
		return 0;
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
          unsigned short reg = 255;
          int _len_wm831x0 = 1;
          struct wm831x * wm831x = (struct wm831x *) malloc(_len_wm831x0*sizeof(struct wm831x));
          for(int _i0 = 0; _i0 < _len_wm831x0; _i0++) {
            wm831x->locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm831x_reg_locked(wm831x,reg);
          printf("%d\n", benchRet); 
          free(wm831x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
