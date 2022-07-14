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
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */
#define  BYT_PULL_STR_10K 131 
#define  BYT_PULL_STR_20K 130 
#define  BYT_PULL_STR_2K 129 
#define  BYT_PULL_STR_40K 128 
 int BYT_PULL_STR_MASK ; 

__attribute__((used)) static void byt_get_pull_strength(u32 reg, u16 *strength)
{
	switch (reg & BYT_PULL_STR_MASK) {
	case BYT_PULL_STR_2K:
		*strength = 2000;
		break;
	case BYT_PULL_STR_10K:
		*strength = 10000;
		break;
	case BYT_PULL_STR_20K:
		*strength = 20000;
		break;
	case BYT_PULL_STR_40K:
		*strength = 40000;
		break;
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

    // int-bounds
    case 0:
    {
          int reg = 100;
          int _len_strength0 = 1;
          int * strength = (int *) malloc(_len_strength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_strength0; _i0++) {
            strength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          byt_get_pull_strength(reg,strength);
          free(strength);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int _len_strength0 = 65025;
          int * strength = (int *) malloc(_len_strength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_strength0; _i0++) {
            strength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          byt_get_pull_strength(reg,strength);
          free(strength);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int _len_strength0 = 100;
          int * strength = (int *) malloc(_len_strength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_strength0; _i0++) {
            strength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          byt_get_pull_strength(reg,strength);
          free(strength);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}