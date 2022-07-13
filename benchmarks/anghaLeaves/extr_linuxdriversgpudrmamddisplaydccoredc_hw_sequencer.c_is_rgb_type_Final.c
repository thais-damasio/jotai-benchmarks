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

/* Type definitions */
typedef  enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;

/* Variables and functions */
 int COLOR_SPACE_2020_RGB_FULLRANGE ; 
 int COLOR_SPACE_ADOBERGB ; 
 int COLOR_SPACE_DCIP3 ; 
 int COLOR_SPACE_DOLBYVISION ; 
 int COLOR_SPACE_MSREF_SCRGB ; 
 int COLOR_SPACE_SRGB ; 
 int COLOR_SPACE_XR_RGB ; 

__attribute__((used)) static bool is_rgb_type(
		enum dc_color_space color_space)
{
	bool ret = false;

	if (color_space == COLOR_SPACE_SRGB			||
		color_space == COLOR_SPACE_XR_RGB		||
		color_space == COLOR_SPACE_MSREF_SCRGB		||
		color_space == COLOR_SPACE_2020_RGB_FULLRANGE	||
		color_space == COLOR_SPACE_ADOBERGB		||
		color_space == COLOR_SPACE_DCIP3	||
		color_space == COLOR_SPACE_DOLBYVISION)
		ret = true;
	return ret;
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
          enum dc_color_space color_space = 0;
          int benchRet = is_rgb_type(color_space);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dc_color_space color_space = 0;
          int benchRet = is_rgb_type(color_space);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dc_color_space color_space = 0;
          int benchRet = is_rgb_type(color_space);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
