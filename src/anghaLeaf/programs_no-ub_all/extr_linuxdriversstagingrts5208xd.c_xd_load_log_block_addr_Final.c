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
typedef  int u8 ;
typedef  int u16 ;

/* Variables and functions */
 size_t BLOCK_ADDR1_H ; 
 size_t BLOCK_ADDR1_L ; 
 size_t BLOCK_ADDR2_H ; 
 size_t BLOCK_ADDR2_L ; 
 size_t PARITY ; 
 int XD_BA1_BA2_EQL ; 
 int XD_BA1_VALID ; 
 int XD_BA2_VALID ; 

__attribute__((used)) static u16 xd_load_log_block_addr(u8 *redunt)
{
	u16 addr = 0xFFFF;

	if (redunt[PARITY] & XD_BA1_BA2_EQL)
		addr = ((u16)redunt[BLOCK_ADDR1_H] << 8) |
			redunt[BLOCK_ADDR1_L];
	else if (redunt[PARITY] & XD_BA1_VALID)
		addr = ((u16)redunt[BLOCK_ADDR1_H] << 8) |
			redunt[BLOCK_ADDR1_L];
	else if (redunt[PARITY] & XD_BA2_VALID)
		addr = ((u16)redunt[BLOCK_ADDR2_H] << 8) |
			redunt[BLOCK_ADDR2_L];

	return addr;
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
          int _len_redunt0 = 65025;
          int * redunt = (int *) malloc(_len_redunt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_redunt0; _i0++) {
            redunt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xd_load_log_block_addr(redunt);
          printf("%d\n", benchRet); 
          free(redunt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
