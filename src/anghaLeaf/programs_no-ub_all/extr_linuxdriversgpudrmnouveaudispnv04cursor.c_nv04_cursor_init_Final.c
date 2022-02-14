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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  show; int /*<<< orphan*/  hide; int /*<<< orphan*/  set_pos; int /*<<< orphan*/  set_offset; } ;
struct nouveau_crtc {TYPE_1__ cursor; } ;

/* Variables and functions */
 int /*<<< orphan*/  nv04_cursor_hide ; 
 int /*<<< orphan*/  nv04_cursor_set_offset ; 
 int /*<<< orphan*/  nv04_cursor_set_pos ; 
 int /*<<< orphan*/  nv04_cursor_show ; 

int
nv04_cursor_init(struct nouveau_crtc *crtc)
{
	crtc->cursor.set_offset = nv04_cursor_set_offset;
	crtc->cursor.set_pos = nv04_cursor_set_pos;
	crtc->cursor.hide = nv04_cursor_hide;
	crtc->cursor.show = nv04_cursor_show;
	return 0;
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
          int _len_crtc0 = 1;
          struct nouveau_crtc * crtc = (struct nouveau_crtc *) malloc(_len_crtc0*sizeof(struct nouveau_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc->cursor.show = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc->cursor.hide = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc->cursor.set_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc->cursor.set_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nv04_cursor_init(crtc);
          printf("%d\n", benchRet); 
          free(crtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}