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

/* Variables and functions */
 unsigned int ARTPEC6_DRIVE_4mA ; 
#define  ARTPEC6_DRIVE_4mA_SET 131 
 unsigned int ARTPEC6_DRIVE_6mA ; 
#define  ARTPEC6_DRIVE_6mA_SET 130 
 unsigned int ARTPEC6_DRIVE_8mA ; 
#define  ARTPEC6_DRIVE_8mA_SET 129 
 unsigned int ARTPEC6_DRIVE_9mA ; 
#define  ARTPEC6_DRIVE_9mA_SET 128 

__attribute__((used)) static unsigned int artpec6_pconf_drive_field_to_mA(int field)
{
	switch (field) {
	case ARTPEC6_DRIVE_4mA_SET:
		return ARTPEC6_DRIVE_4mA;
	case ARTPEC6_DRIVE_6mA_SET:
		return ARTPEC6_DRIVE_6mA;
	case ARTPEC6_DRIVE_8mA_SET:
		return ARTPEC6_DRIVE_8mA;
	case ARTPEC6_DRIVE_9mA_SET:
		return ARTPEC6_DRIVE_9mA;
	default:
		/* Shouldn't happen */
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

    // int-bounds
    case 0:
    {
          int field = 100;
          unsigned int benchRet = artpec6_pconf_drive_field_to_mA(field);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int field = 255;
          unsigned int benchRet = artpec6_pconf_drive_field_to_mA(field);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int field = 10;
          unsigned int benchRet = artpec6_pconf_drive_field_to_mA(field);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
