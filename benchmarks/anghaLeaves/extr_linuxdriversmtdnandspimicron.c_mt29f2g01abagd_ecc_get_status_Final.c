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
typedef  int u8 ;
struct spinand_device {int dummy; } ;

/* Variables and functions */
 int EBADMSG ; 
 int EINVAL ; 
#define  MICRON_STATUS_ECC_1TO3_BITFLIPS 132 
#define  MICRON_STATUS_ECC_4TO6_BITFLIPS 131 
#define  MICRON_STATUS_ECC_7TO8_BITFLIPS 130 
 int MICRON_STATUS_ECC_MASK ; 
#define  STATUS_ECC_NO_BITFLIPS 129 
#define  STATUS_ECC_UNCOR_ERROR 128 

__attribute__((used)) static int mt29f2g01abagd_ecc_get_status(struct spinand_device *spinand,
					 u8 status)
{
	switch (status & MICRON_STATUS_ECC_MASK) {
	case STATUS_ECC_NO_BITFLIPS:
		return 0;

	case STATUS_ECC_UNCOR_ERROR:
		return -EBADMSG;

	case MICRON_STATUS_ECC_1TO3_BITFLIPS:
		return 3;

	case MICRON_STATUS_ECC_4TO6_BITFLIPS:
		return 6;

	case MICRON_STATUS_ECC_7TO8_BITFLIPS:
		return 8;

	default:
		break;
	}

	return -EINVAL;
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
          int status = 100;
          int _len_spinand0 = 1;
          struct spinand_device * spinand = (struct spinand_device *) malloc(_len_spinand0*sizeof(struct spinand_device));
          for(int _i0 = 0; _i0 < _len_spinand0; _i0++) {
            spinand[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt29f2g01abagd_ecc_get_status(spinand,status);
          printf("%d\n", benchRet); 
          free(spinand);
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int _len_spinand0 = 65025;
          struct spinand_device * spinand = (struct spinand_device *) malloc(_len_spinand0*sizeof(struct spinand_device));
          for(int _i0 = 0; _i0 < _len_spinand0; _i0++) {
            spinand[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt29f2g01abagd_ecc_get_status(spinand,status);
          printf("%d\n", benchRet); 
          free(spinand);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int _len_spinand0 = 100;
          struct spinand_device * spinand = (struct spinand_device *) malloc(_len_spinand0*sizeof(struct spinand_device));
          for(int _i0 = 0; _i0 < _len_spinand0; _i0++) {
            spinand[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt29f2g01abagd_ecc_get_status(spinand,status);
          printf("%d\n", benchRet); 
          free(spinand);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
