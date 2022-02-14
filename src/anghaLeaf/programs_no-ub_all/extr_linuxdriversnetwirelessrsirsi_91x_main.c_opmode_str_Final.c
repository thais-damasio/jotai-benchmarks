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
#define  DEV_OPMODE_AP_BT 136 
#define  DEV_OPMODE_AP_BT_DUAL 135 
#define  DEV_OPMODE_BT_ALONE 134 
#define  DEV_OPMODE_BT_DUAL 133 
#define  DEV_OPMODE_BT_LE_ALONE 132 
#define  DEV_OPMODE_STA_BT 131 
#define  DEV_OPMODE_STA_BT_DUAL 130 
#define  DEV_OPMODE_STA_BT_LE 129 
#define  DEV_OPMODE_WIFI_ALONE 128 

__attribute__((used)) static char *opmode_str(int oper_mode)
{
	switch (oper_mode) {
	case DEV_OPMODE_WIFI_ALONE:
		return "Wi-Fi alone";
	case DEV_OPMODE_BT_ALONE:
		return "BT EDR alone";
	case DEV_OPMODE_BT_LE_ALONE:
		return "BT LE alone";
	case DEV_OPMODE_BT_DUAL:
		return "BT Dual";
	case DEV_OPMODE_STA_BT:
		return "Wi-Fi STA + BT EDR";
	case DEV_OPMODE_STA_BT_LE:
		return "Wi-Fi STA + BT LE";
	case DEV_OPMODE_STA_BT_DUAL:
		return "Wi-Fi STA + BT DUAL";
	case DEV_OPMODE_AP_BT:
		return "Wi-Fi AP + BT EDR";
	case DEV_OPMODE_AP_BT_DUAL:
		return "Wi-Fi AP + BT DUAL";
	}

	return "Unknown";
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
          int oper_mode = 255;
          char * benchRet = opmode_str(oper_mode);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}