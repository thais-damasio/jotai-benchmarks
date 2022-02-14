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
struct siox_device {int statustype; } ;

/* Variables and functions */
 int SIOX_STATUS_TYPE ; 

__attribute__((used)) static bool siox_device_type_error(struct siox_device *sdevice, u8 status_clean)
{
	u8 statustype = (status_clean & SIOX_STATUS_TYPE) >> 4;

	/*
	 * If the device knows which value the type bits should have, check
	 * against this value otherwise just rule out the invalid values 0b0000
	 * and 0b1111.
	 */
	if (sdevice->statustype) {
		if (statustype != sdevice->statustype)
			return true;
	} else {
		switch (statustype) {
		case 0:
		case 0xf:
			return true;
		}
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
          int status_clean = 255;
          int _len_sdevice0 = 1;
          struct siox_device * sdevice = (struct siox_device *) malloc(_len_sdevice0*sizeof(struct siox_device));
          for(int _i0 = 0; _i0 < _len_sdevice0; _i0++) {
            sdevice->statustype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = siox_device_type_error(sdevice,status_clean);
          printf("%d\n", benchRet); 
          free(sdevice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
