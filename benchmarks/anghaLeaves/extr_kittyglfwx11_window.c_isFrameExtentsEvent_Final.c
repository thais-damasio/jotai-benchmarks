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
typedef  struct TYPE_13__   TYPE_7__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int /*<<< orphan*/  handle; } ;
struct TYPE_11__ {TYPE_2__ x11; } ;
typedef  TYPE_4__ _GLFWwindow ;
typedef  scalar_t__ XPointer ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ atom; int /*<<< orphan*/  window; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ xproperty; } ;
typedef  TYPE_5__ XEvent ;
struct TYPE_8__ {scalar_t__ NET_FRAME_EXTENTS; } ;
struct TYPE_13__ {TYPE_1__ x11; } ;
typedef  int /*<<< orphan*/  Display ;
typedef  int Bool ;

/* Variables and functions */
 scalar_t__ PropertyNewValue ; 
 scalar_t__ PropertyNotify ; 
 TYPE_7__ _glfw ; 

__attribute__((used)) static Bool isFrameExtentsEvent(Display* display, XEvent* event, XPointer pointer)
{
    _GLFWwindow* window = (_GLFWwindow*) pointer;
    return event->type == PropertyNotify &&
           event->xproperty.state == PropertyNewValue &&
           event->xproperty.window == window->x11.handle &&
           event->xproperty.atom == _glfw.x11.NET_FRAME_EXTENTS;
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
          long pointer = 100;
          int _len_display0 = 1;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          struct TYPE_12__ * event = (struct TYPE_12__ *) malloc(_len_event0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.state = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.atom = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isFrameExtentsEvent(display,event,pointer);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pointer = 255;
          int _len_display0 = 65025;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 65025;
          struct TYPE_12__ * event = (struct TYPE_12__ *) malloc(_len_event0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.state = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.atom = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isFrameExtentsEvent(display,event,pointer);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pointer = 10;
          int _len_display0 = 100;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 100;
          struct TYPE_12__ * event = (struct TYPE_12__ *) malloc(_len_event0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.state = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.atom = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isFrameExtentsEvent(display,event,pointer);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
