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
typedef  enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;

/* Variables and functions */
 int EINVAL ; 
 int NFP_SENSOR_ASSEMBLY_POWER ; 
 int NFP_SENSOR_CHIP_TEMPERATURE ; 
 int hwmon_power ; 
 int hwmon_temp ; 

__attribute__((used)) static int nfp_hwmon_sensor_id(enum hwmon_sensor_types type, int channel)
{
	if (type == hwmon_temp)
		return NFP_SENSOR_CHIP_TEMPERATURE;
	if (type == hwmon_power)
		return NFP_SENSOR_ASSEMBLY_POWER + channel;
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
          enum hwmon_sensor_types type = 0;
          int channel = 100;
          int benchRet = nfp_hwmon_sensor_id(type,channel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hwmon_sensor_types type = 0;
          int channel = 255;
          int benchRet = nfp_hwmon_sensor_id(type,channel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hwmon_sensor_types type = 0;
          int channel = 10;
          int benchRet = nfp_hwmon_sensor_id(type,channel);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
