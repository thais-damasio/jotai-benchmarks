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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u16 ;

/* Variables and functions */
#define  WMI_BEACON_SVC 136 
#define  WMI_CAB_SVC 135 
#define  WMI_CONTROL_SVC 134 
#define  WMI_DATA_BE_SVC 133 
#define  WMI_DATA_BK_SVC 132 
#define  WMI_DATA_VI_SVC 131 
#define  WMI_DATA_VO_SVC 130 
#define  WMI_MGMT_SVC 129 
#define  WMI_UAPSD_SVC 128 

__attribute__((used)) static u8 service_to_ulpipe(u16 service_id)
{
	switch (service_id) {
	case WMI_CONTROL_SVC:
		return 4;
	case WMI_BEACON_SVC:
	case WMI_CAB_SVC:
	case WMI_UAPSD_SVC:
	case WMI_MGMT_SVC:
	case WMI_DATA_VO_SVC:
	case WMI_DATA_VI_SVC:
	case WMI_DATA_BE_SVC:
	case WMI_DATA_BK_SVC:
		return 1;
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

    // int-bounds
    case 0:
    {
          int service_id = 100;
          int benchRet = service_to_ulpipe(service_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int service_id = 255;
          int benchRet = service_to_ulpipe(service_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int service_id = 10;
          int benchRet = service_to_ulpipe(service_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
