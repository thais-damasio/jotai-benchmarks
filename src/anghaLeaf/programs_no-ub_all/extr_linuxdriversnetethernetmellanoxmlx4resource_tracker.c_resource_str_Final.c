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
typedef  enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;

/* Variables and functions */
#define  RES_COUNTER 138 
#define  RES_CQ 137 
#define  RES_EQ 136 
#define  RES_FS_RULE 135 
#define  RES_MAC 134 
#define  RES_MPT 133 
#define  RES_MTT 132 
#define  RES_QP 131 
#define  RES_SRQ 130 
#define  RES_VLAN 129 
#define  RES_XRCD 128 

__attribute__((used)) static const char *resource_str(enum mlx4_resource rt)
{
	switch (rt) {
	case RES_QP: return "RES_QP";
	case RES_CQ: return "RES_CQ";
	case RES_SRQ: return "RES_SRQ";
	case RES_MPT: return "RES_MPT";
	case RES_MTT: return "RES_MTT";
	case RES_MAC: return  "RES_MAC";
	case RES_VLAN: return  "RES_VLAN";
	case RES_EQ: return "RES_EQ";
	case RES_COUNTER: return "RES_COUNTER";
	case RES_FS_RULE: return "RES_FS_RULE";
	case RES_XRCD: return "RES_XRCD";
	default: return "Unknown resource type !!!";
	};
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
          enum mlx4_resource rt = 0;
          const char * benchRet = resource_str(rt);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
