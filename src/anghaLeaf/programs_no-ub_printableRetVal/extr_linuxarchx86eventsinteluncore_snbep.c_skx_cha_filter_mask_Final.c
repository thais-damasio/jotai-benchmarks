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
typedef  int /*<<< orphan*/  u64 ;

/* Variables and functions */
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_ALL_OPC ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_ISOC ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_LINK ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_LOC ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_NC ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_NM ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_NOT_NM ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_OPC0 ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_OPC1 ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_REM ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_STATE ; 
 int /*<<< orphan*/  SKX_CHA_MSR_PMON_BOX_FILTER_TID ; 

__attribute__((used)) static u64 skx_cha_filter_mask(int fields)
{
	u64 mask = 0;

	if (fields & 0x1)
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_TID;
	if (fields & 0x2)
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_LINK;
	if (fields & 0x4)
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_STATE;
	if (fields & 0x8) {
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_REM;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_LOC;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_ALL_OPC;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_NM;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_NOT_NM;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_OPC0;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_OPC1;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_NC;
		mask |= SKX_CHA_MSR_PMON_BOX_FILTER_ISOC;
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

    // big-arr
    case 0:
    {
          int fields = 255;
          int benchRet = skx_cha_filter_mask(fields);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}