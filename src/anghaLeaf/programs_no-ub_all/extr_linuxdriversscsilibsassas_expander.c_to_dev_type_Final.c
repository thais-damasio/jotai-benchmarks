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
struct discover_resp {scalar_t__ attached_dev_type; scalar_t__ linkrate; scalar_t__ attached_sata_dev; } ;
typedef  enum sas_device_type { ____Placeholder_sas_device_type } sas_device_type ;

/* Variables and functions */
 scalar_t__ SAS_LINK_RATE_1_5_GBPS ; 
 scalar_t__ SAS_PHY_UNUSED ; 
 int SAS_SATA_PENDING ; 

__attribute__((used)) static enum sas_device_type to_dev_type(struct discover_resp *dr)
{
	/* This is detecting a failure to transmit initial dev to host
	 * FIS as described in section J.5 of sas-2 r16
	 */
	if (dr->attached_dev_type == SAS_PHY_UNUSED && dr->attached_sata_dev &&
	    dr->linkrate >= SAS_LINK_RATE_1_5_GBPS)
		return SAS_SATA_PENDING;
	else
		return dr->attached_dev_type;
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
          int _len_dr0 = 1;
          struct discover_resp * dr = (struct discover_resp *) malloc(_len_dr0*sizeof(struct discover_resp));
          for(int _i0 = 0; _i0 < _len_dr0; _i0++) {
            dr->attached_dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dr->linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
        dr->attached_sata_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum sas_device_type benchRet = to_dev_type(dr);
          printf("{{other_type}} %p\n", &benchRet); 
          free(dr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
