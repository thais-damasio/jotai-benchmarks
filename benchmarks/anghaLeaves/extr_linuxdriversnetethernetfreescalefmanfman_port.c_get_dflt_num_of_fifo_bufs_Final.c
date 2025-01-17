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
typedef  enum fman_port_type { ____Placeholder_fman_port_type } fman_port_type ;

/* Variables and functions */
#define  FMAN_PORT_TYPE_RX 129 
#define  FMAN_PORT_TYPE_TX 128 

__attribute__((used)) static int get_dflt_num_of_fifo_bufs(u8 major, enum fman_port_type type,
				     u16 speed)
{
	int val;

	if (major >= 6) {
		switch (type) {
		case FMAN_PORT_TYPE_TX:
			if (speed == 10000)
				val = 64;
			else
				val = 50;
			break;
		case FMAN_PORT_TYPE_RX:
			if (speed == 10000)
				val = 96;
			else
				val = 50;
			break;
		default:
			val = 0;
		}
	} else {
		switch (type) {
		case FMAN_PORT_TYPE_TX:
			if (speed == 10000)
				val = 48;
			else
				val = 44;
			break;
		case FMAN_PORT_TYPE_RX:
			if (speed == 10000)
				val = 48;
			else
				val = 45;
			break;
		default:
			val = 0;
		}
	}

	return val;
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
          int major = 100;
          enum fman_port_type type = 0;
          int speed = 100;
          int benchRet = get_dflt_num_of_fifo_bufs(major,type,speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int major = 255;
          enum fman_port_type type = 0;
          int speed = 255;
          int benchRet = get_dflt_num_of_fifo_bufs(major,type,speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int major = 10;
          enum fman_port_type type = 0;
          int speed = 10;
          int benchRet = get_dflt_num_of_fifo_bufs(major,type,speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
