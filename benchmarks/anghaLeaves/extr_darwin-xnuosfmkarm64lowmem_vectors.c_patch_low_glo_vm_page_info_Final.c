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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  void* uint64_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_2__ {int /*<<< orphan*/  lgPageShift; int /*<<< orphan*/  lgPmapMemFirstppnum; void* lgPmapMemEndAddr; void* lgPmapMemStartAddr; } ;

/* Variables and functions */
 int /*<<< orphan*/  PAGE_SHIFT ; 
 TYPE_1__ lowGlo ; 

void patch_low_glo_vm_page_info(void * start_addr, void * end_addr, uint32_t first_ppnum)
{
	lowGlo.lgPmapMemStartAddr = (uint64_t)start_addr;
	lowGlo.lgPmapMemEndAddr = (uint64_t)end_addr;
	lowGlo.lgPmapMemFirstppnum = first_ppnum;
	lowGlo.lgPageShift = PAGE_SHIFT;
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
          int first_ppnum = 100;
          void * start_addr;
          void * end_addr;
          patch_low_glo_vm_page_info(start_addr,end_addr,first_ppnum);
        
        break;
    }
    // big-arr
    case 1:
    {
          int first_ppnum = 255;
          void * start_addr;
          void * end_addr;
          patch_low_glo_vm_page_info(start_addr,end_addr,first_ppnum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int first_ppnum = 10;
          void * start_addr;
          void * end_addr;
          patch_low_glo_vm_page_info(start_addr,end_addr,first_ppnum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
