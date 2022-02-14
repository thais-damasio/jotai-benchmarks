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
typedef  enum lh5801_insn_format { ____Placeholder_lh5801_insn_format } lh5801_insn_format ;

/* Variables and functions */
 int LH5801_IFMT_FD_MASK ; 
#define  LH5801_IFMT_FD_MOD 130 
#define  LH5801_IFMT_FD_NO 129 
#define  LH5801_IFMT_FD_YES 128 

__attribute__((used)) static bool lh5801_ifmt_fd_matches(enum lh5801_insn_format fmt, int fd) {
	switch (fmt & LH5801_IFMT_FD_MASK) {
	case LH5801_IFMT_FD_NO: 	return !fd;
	case LH5801_IFMT_FD_YES:	return fd;
	case LH5801_IFMT_FD_MOD:	return true;
	default:			return false;
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
          enum lh5801_insn_format fmt = 0;
          int fd = 255;
          int benchRet = lh5801_ifmt_fd_matches(fmt,fd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
