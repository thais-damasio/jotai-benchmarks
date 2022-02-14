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
typedef  enum gs_depth_test { ____Placeholder_gs_depth_test } gs_depth_test ;
typedef  int /*<<< orphan*/  GLenum ;

/* Variables and functions */
 int /*<<< orphan*/  GL_ALWAYS ; 
 int /*<<< orphan*/  GL_EQUAL ; 
 int /*<<< orphan*/  GL_GEQUAL ; 
 int /*<<< orphan*/  GL_GREATER ; 
 int /*<<< orphan*/  GL_LEQUAL ; 
 int /*<<< orphan*/  GL_LESS ; 
 int /*<<< orphan*/  GL_NEVER ; 
 int /*<<< orphan*/  GL_NOTEQUAL ; 
#define  GS_ALWAYS 135 
#define  GS_EQUAL 134 
#define  GS_GEQUAL 133 
#define  GS_GREATER 132 
#define  GS_LEQUAL 131 
#define  GS_LESS 130 
#define  GS_NEVER 129 
#define  GS_NOTEQUAL 128 

__attribute__((used)) static inline GLenum convert_gs_depth_test(enum gs_depth_test test)
{
	switch (test) {
	case GS_NEVER:    return GL_NEVER;
	case GS_LESS:     return GL_LESS;
	case GS_LEQUAL:   return GL_LEQUAL;
	case GS_EQUAL:    return GL_EQUAL;
	case GS_GEQUAL:   return GL_GEQUAL;
	case GS_GREATER:  return GL_GREATER;
	case GS_NOTEQUAL: return GL_NOTEQUAL;
	case GS_ALWAYS:   return GL_ALWAYS;
	}

	return GL_NEVER;
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
          enum gs_depth_test test = 0;
          int benchRet = convert_gs_depth_test(test);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
