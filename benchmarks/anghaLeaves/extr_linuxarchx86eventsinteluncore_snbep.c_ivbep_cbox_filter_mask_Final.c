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
typedef  int /*<<< orphan*/  u64 ;

/* Variables and functions */
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_C6 ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_ISOC ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_LINK ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_NC ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_NID ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_OPC ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_STATE ; 
 int /*<<< orphan*/  IVBEP_CB0_MSR_PMON_BOX_FILTER_TID ; 

__attribute__((used)) static u64 ivbep_cbox_filter_mask(int fields)
{
	u64 mask = 0;

	if (fields & 0x1)
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_TID;
	if (fields & 0x2)
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_LINK;
	if (fields & 0x4)
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_STATE;
	if (fields & 0x8)
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_NID;
	if (fields & 0x10) {
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_OPC;
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_NC;
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_C6;
		mask |= IVBEP_CB0_MSR_PMON_BOX_FILTER_ISOC;
	}

	return mask;
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
          int fields = 100;
          int benchRet = ivbep_cbox_filter_mask(fields);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fields = 255;
          int benchRet = ivbep_cbox_filter_mask(fields);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fields = 10;
          int benchRet = ivbep_cbox_filter_mask(fields);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
