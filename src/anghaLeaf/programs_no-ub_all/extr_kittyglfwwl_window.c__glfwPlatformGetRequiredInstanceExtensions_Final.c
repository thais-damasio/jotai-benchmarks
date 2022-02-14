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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  KHR_wayland_surface; int /*<<< orphan*/  KHR_surface; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;

/* Variables and functions */
 TYPE_2__ _glfw ; 

void _glfwPlatformGetRequiredInstanceExtensions(char** extensions)
{
    if (!_glfw.vk.KHR_surface || !_glfw.vk.KHR_wayland_surface)
        return;

    extensions[0] = "VK_KHR_surface";
    extensions[1] = "VK_KHR_wayland_surface";
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
          int _len_extensions0 = 65025;
          char ** extensions = (char **) malloc(_len_extensions0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_extensions0; _i0++) {
            int _len_extensions1 = 1;
            extensions[_i0] = (char *) malloc(_len_extensions1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_extensions1; _i1++) {
              extensions[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          _glfwPlatformGetRequiredInstanceExtensions(extensions);
          for(int i1 = 0; i1 < _len_extensions0; i1++) {
            int _len_extensions1 = 1;
              free(extensions[i1]);
          }
          free(extensions);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
