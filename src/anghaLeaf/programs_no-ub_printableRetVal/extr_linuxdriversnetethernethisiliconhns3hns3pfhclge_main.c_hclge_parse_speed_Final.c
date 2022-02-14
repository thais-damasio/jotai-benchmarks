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
 int EINVAL ; 
 int HCLGE_MAC_SPEED_100G ; 
 int HCLGE_MAC_SPEED_100M ; 
 int HCLGE_MAC_SPEED_10G ; 
 int HCLGE_MAC_SPEED_10M ; 
 int HCLGE_MAC_SPEED_1G ; 
 int HCLGE_MAC_SPEED_25G ; 
 int HCLGE_MAC_SPEED_40G ; 
 int HCLGE_MAC_SPEED_50G ; 

__attribute__((used)) static int hclge_parse_speed(int speed_cmd, int *speed)
{
	switch (speed_cmd) {
	case 6:
		*speed = HCLGE_MAC_SPEED_10M;
		break;
	case 7:
		*speed = HCLGE_MAC_SPEED_100M;
		break;
	case 0:
		*speed = HCLGE_MAC_SPEED_1G;
		break;
	case 1:
		*speed = HCLGE_MAC_SPEED_10G;
		break;
	case 2:
		*speed = HCLGE_MAC_SPEED_25G;
		break;
	case 3:
		*speed = HCLGE_MAC_SPEED_40G;
		break;
	case 4:
		*speed = HCLGE_MAC_SPEED_50G;
		break;
	case 5:
		*speed = HCLGE_MAC_SPEED_100G;
		break;
	default:
		return -EINVAL;
	}

	return 0;
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
          int speed_cmd = 255;
          int _len_speed0 = 65025;
          int * speed = (int *) malloc(_len_speed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_speed0; _i0++) {
            speed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_parse_speed(speed_cmd,speed);
          printf("%d\n", benchRet); 
          free(speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}