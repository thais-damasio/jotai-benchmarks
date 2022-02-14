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
 int const DCCP_NR_PKT_TYPES ; 
#define  DCCP_PKT_ACK 137 
#define  DCCP_PKT_CLOSE 136 
#define  DCCP_PKT_CLOSEREQ 135 
#define  DCCP_PKT_DATA 134 
#define  DCCP_PKT_DATAACK 133 
#define  DCCP_PKT_REQUEST 132 
#define  DCCP_PKT_RESET 131 
#define  DCCP_PKT_RESPONSE 130 
#define  DCCP_PKT_SYNC 129 
#define  DCCP_PKT_SYNCACK 128 

const char *dccp_packet_name(const int type)
{
	static const char *const dccp_packet_names[] = {
		[DCCP_PKT_REQUEST]  = "REQUEST",
		[DCCP_PKT_RESPONSE] = "RESPONSE",
		[DCCP_PKT_DATA]	    = "DATA",
		[DCCP_PKT_ACK]	    = "ACK",
		[DCCP_PKT_DATAACK]  = "DATAACK",
		[DCCP_PKT_CLOSEREQ] = "CLOSEREQ",
		[DCCP_PKT_CLOSE]    = "CLOSE",
		[DCCP_PKT_RESET]    = "RESET",
		[DCCP_PKT_SYNC]	    = "SYNC",
		[DCCP_PKT_SYNCACK]  = "SYNCACK",
	};

	if (type >= DCCP_NR_PKT_TYPES)
		return "INVALID";
	else
		return dccp_packet_names[type];
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
          const int type = 255;
          const char * benchRet = dccp_packet_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}