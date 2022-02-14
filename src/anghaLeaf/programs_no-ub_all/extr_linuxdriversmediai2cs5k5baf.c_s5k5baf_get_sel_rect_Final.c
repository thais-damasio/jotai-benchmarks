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
typedef  int u32 ;
typedef  enum selection_rect { ____Placeholder_selection_rect } selection_rect ;

/* Variables and functions */
 int R_CIS ; 
 int R_COMPOSE ; 
 int R_CROP_SINK ; 
 int R_CROP_SOURCE ; 
 int R_INVALID ; 
#define  V4L2_SEL_TGT_COMPOSE 131 
#define  V4L2_SEL_TGT_COMPOSE_BOUNDS 130 
#define  V4L2_SEL_TGT_CROP 129 
#define  V4L2_SEL_TGT_CROP_BOUNDS 128 

__attribute__((used)) static enum selection_rect s5k5baf_get_sel_rect(u32 pad, u32 target)
{
	switch (target) {
	case V4L2_SEL_TGT_CROP_BOUNDS:
		return pad ? R_COMPOSE : R_CIS;
	case V4L2_SEL_TGT_CROP:
		return pad ? R_CROP_SOURCE : R_CROP_SINK;
	case V4L2_SEL_TGT_COMPOSE_BOUNDS:
		return pad ? R_INVALID : R_CROP_SINK;
	case V4L2_SEL_TGT_COMPOSE:
		return pad ? R_INVALID : R_COMPOSE;
	default:
		return R_INVALID;
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
          int pad = 255;
          int target = 255;
          enum selection_rect benchRet = s5k5baf_get_sel_rect(pad,target);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}