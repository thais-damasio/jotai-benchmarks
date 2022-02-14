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

/* Variables and functions */
#define  PCI_SUBDEVICE_ID_ALACRITECH_1000X1F 133 
#define  PCI_SUBDEVICE_ID_ALACRITECH_SEN2001XF 132 
#define  PCI_SUBDEVICE_ID_ALACRITECH_SEN2002XF 131 
#define  PCI_SUBDEVICE_ID_ALACRITECH_SEN2102EF 130 
#define  PCI_SUBDEVICE_ID_ALACRITECH_SEN2104EF 129 
#define  PCI_SUBDEVICE_ID_ALACRITECH_SES1001F 128 

__attribute__((used)) static bool slic_is_fiber(unsigned short subdev)
{
	switch (subdev) {
	/* Mojave */
	case PCI_SUBDEVICE_ID_ALACRITECH_1000X1F: /* fallthrough */
	case PCI_SUBDEVICE_ID_ALACRITECH_SES1001F: /* fallthrough */
	/* Oasis */
	case PCI_SUBDEVICE_ID_ALACRITECH_SEN2002XF: /* fallthrough */
	case PCI_SUBDEVICE_ID_ALACRITECH_SEN2001XF: /* fallthrough */
	case PCI_SUBDEVICE_ID_ALACRITECH_SEN2104EF: /* fallthrough */
	case PCI_SUBDEVICE_ID_ALACRITECH_SEN2102EF: /* fallthrough */
		return true;
	}
	return false;
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
          unsigned short subdev = 255;
          int benchRet = slic_is_fiber(subdev);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}