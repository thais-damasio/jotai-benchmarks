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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int RIR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */
 int hyundai_camera_bus ; 
 scalar_t__ hyundai_giraffe_switch_2 ; 

__attribute__((used)) static int hyundai_fwd_hook(int bus_num, CAN_FIFOMailBox_TypeDef *to_fwd) {
  // forward cam to ccan and viceversa, except lkas cmd
  if ((bus_num == 0 || bus_num == hyundai_camera_bus) && hyundai_giraffe_switch_2) {

    if ((to_fwd->RIR>>21) == 832 && bus_num == hyundai_camera_bus) return -1;
    if (bus_num == 0) return hyundai_camera_bus;
    if (bus_num == hyundai_camera_bus) return 0;
  }
  return -1;
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
          int bus_num = 255;
          int _len_to_fwd0 = 1;
          struct TYPE_3__ * to_fwd = (struct TYPE_3__ *) malloc(_len_to_fwd0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_to_fwd0; _i0++) {
            to_fwd->RIR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hyundai_fwd_hook(bus_num,to_fwd);
          printf("%d\n", benchRet); 
          free(to_fwd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
