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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
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

/* Variables and functions */
 int PAGE_STATUS ; 
 size_t PARITY ; 
 int RESERVED0 ; 
 int XD_ECC1_ALL1 ; 
 int XD_ECC2_ALL1 ; 

__attribute__((used)) static int xd_check_data_blank(u8 *redunt)
{
	int i;

	for (i = 0; i < 6; i++) {
		if (redunt[PAGE_STATUS + i] != 0xFF)
			return 0;
	}

	if ((redunt[PARITY] & (XD_ECC1_ALL1 | XD_ECC2_ALL1))
		!= (XD_ECC1_ALL1 | XD_ECC2_ALL1))
		return 0;

	for (i = 0; i < 4; i++) {
		if (redunt[RESERVED0 + i] != 0xFF)
			return 0;
	}

	return 1;
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
          int _len_redunt0 = 1;
          int * redunt = (int *) malloc(_len_redunt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_redunt0; _i0++) {
            redunt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xd_check_data_blank(redunt);
          printf("%d\n", benchRet); 
          free(redunt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_redunt0 = 100;
          int * redunt = (int *) malloc(_len_redunt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_redunt0; _i0++) {
            redunt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xd_check_data_blank(redunt);
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
