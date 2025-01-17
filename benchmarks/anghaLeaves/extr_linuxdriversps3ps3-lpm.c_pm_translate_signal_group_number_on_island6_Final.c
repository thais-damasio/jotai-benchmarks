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
typedef  int u64 ;

/* Variables and functions */
 int PM_ISLAND6_BASE_SIGNAL_GROUP_NUMBER ; 

__attribute__((used)) static u64 pm_translate_signal_group_number_on_island6(u64 subgroup,
						       u64 subsubgroup)
{
	switch (subgroup) {
	case 3:
	case 4:
	case 5:
		subgroup += 1;
		break;
	default:
		break;
	}

	switch (subsubgroup) {
	case 4:
	case 5:
	case 6:
		subsubgroup += 2;
		break;
	case 7:
	case 8:
	case 9:
	case 10:
		subsubgroup += 4;
		break;
	case 11:
	case 12:
	case 13:
		subsubgroup += 5;
		break;
	default:
		break;
	}

	if (subgroup <= 5)
		return (PM_ISLAND6_BASE_SIGNAL_GROUP_NUMBER + subgroup);
	else
		return (PM_ISLAND6_BASE_SIGNAL_GROUP_NUMBER + subgroup
			+ subsubgroup - 1);
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
          int subgroup = 100;
          int subsubgroup = 100;
          int benchRet = pm_translate_signal_group_number_on_island6(subgroup,subsubgroup);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int subgroup = 255;
          int subsubgroup = 255;
          int benchRet = pm_translate_signal_group_number_on_island6(subgroup,subsubgroup);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int subgroup = 10;
          int subsubgroup = 10;
          int benchRet = pm_translate_signal_group_number_on_island6(subgroup,subsubgroup);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
