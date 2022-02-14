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
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */
 int /*<<< orphan*/  CX18_SLICED_TYPE_CAPTION_525 ; 
 int /*<<< orphan*/  CX18_SLICED_TYPE_TELETEXT_B ; 
 int /*<<< orphan*/  CX18_SLICED_TYPE_VPS ; 
 int /*<<< orphan*/  CX18_SLICED_TYPE_WSS_625 ; 
#define  V4L2_SLICED_CAPTION_525 131 
#define  V4L2_SLICED_TELETEXT_B 130 
#define  V4L2_SLICED_VPS 129 
#define  V4L2_SLICED_WSS_625 128 

u16 cx18_service2vbi(int type)
{
	switch (type) {
	case V4L2_SLICED_TELETEXT_B:
		return CX18_SLICED_TYPE_TELETEXT_B;
	case V4L2_SLICED_CAPTION_525:
		return CX18_SLICED_TYPE_CAPTION_525;
	case V4L2_SLICED_WSS_625:
		return CX18_SLICED_TYPE_WSS_625;
	case V4L2_SLICED_VPS:
		return CX18_SLICED_TYPE_VPS;
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
          int type = 255;
          int benchRet = cx18_service2vbi(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
