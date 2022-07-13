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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int bits; } ;
typedef  TYPE_1__ RAnal ;

/* Variables and functions */
 int R_ANAL_ARCHINFO_ALIGN ; 
 int R_ANAL_ARCHINFO_DATA_ALIGN ; 
 int R_ANAL_ARCHINFO_MAX_OP_SIZE ; 
 int R_ANAL_ARCHINFO_MIN_OP_SIZE ; 

__attribute__((used)) static int archinfo(RAnal *anal, int q) {
	if (q == R_ANAL_ARCHINFO_DATA_ALIGN) {
		return 4;
	}
	if (q == R_ANAL_ARCHINFO_ALIGN) {
		if (anal && anal->bits == 16) {
			return 2;
		}
		return 4;
	}
	if (q == R_ANAL_ARCHINFO_MAX_OP_SIZE) {
		return 4;
	}
	if (q == R_ANAL_ARCHINFO_MIN_OP_SIZE) {
		if (anal && anal->bits == 16) {
			return 2;
		}
		return 4;
	}
	return 4; // XXX
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
          int q = 100;
          int _len_anal0 = 1;
          struct TYPE_3__ * anal = (struct TYPE_3__ *) malloc(_len_anal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = archinfo(anal,q);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }
    // big-arr
    case 1:
    {
          int q = 255;
          int _len_anal0 = 65025;
          struct TYPE_3__ * anal = (struct TYPE_3__ *) malloc(_len_anal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = archinfo(anal,q);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int q = 10;
          int _len_anal0 = 100;
          struct TYPE_3__ * anal = (struct TYPE_3__ *) malloc(_len_anal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = archinfo(anal,q);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
