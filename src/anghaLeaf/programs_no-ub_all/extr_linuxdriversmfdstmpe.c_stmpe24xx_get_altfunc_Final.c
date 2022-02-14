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
struct stmpe {int dummy; } ;
typedef  enum stmpe_block { ____Placeholder_stmpe_block } stmpe_block ;

/* Variables and functions */
#define  STMPE_BLOCK_GPIO 131 
#define  STMPE_BLOCK_KEYPAD 130 
#define  STMPE_BLOCK_PWM 129 
#define  STMPE_BLOCK_ROTATOR 128 

__attribute__((used)) static int stmpe24xx_get_altfunc(struct stmpe *stmpe, enum stmpe_block block)
{
	switch (block) {
	case STMPE_BLOCK_ROTATOR:
		return 2;

	case STMPE_BLOCK_KEYPAD:
	case STMPE_BLOCK_PWM:
		return 1;

	case STMPE_BLOCK_GPIO:
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
          enum stmpe_block block = 0;
          int _len_stmpe0 = 1;
          struct stmpe * stmpe = (struct stmpe *) malloc(_len_stmpe0*sizeof(struct stmpe));
          for(int _i0 = 0; _i0 < _len_stmpe0; _i0++) {
            stmpe->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stmpe24xx_get_altfunc(stmpe,block);
          printf("%d\n", benchRet); 
          free(stmpe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}