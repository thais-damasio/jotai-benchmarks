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
typedef  int /*<<< orphan*/  u16 ;
struct phy_device {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

int genphy_write_mmd_unsupported(struct phy_device *phdev, int devnum,
				 u16 regnum, u16 val)
{
	return -EOPNOTSUPP;
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
          int devnum = 100;
          int regnum = 100;
          int val = 100;
          int _len_phdev0 = 1;
          struct phy_device * phdev = (struct phy_device *) malloc(_len_phdev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phdev0; _i0++) {
            phdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = genphy_write_mmd_unsupported(phdev,devnum,regnum,val);
          printf("%d\n", benchRet); 
          free(phdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int devnum = 10;
          int regnum = 10;
          int val = 10;
          int _len_phdev0 = 100;
          struct phy_device * phdev = (struct phy_device *) malloc(_len_phdev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phdev0; _i0++) {
            phdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = genphy_write_mmd_unsupported(phdev,devnum,regnum,val);
          printf("%d\n", benchRet); 
          free(phdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
