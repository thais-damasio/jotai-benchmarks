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
typedef  int /*<<< orphan*/  u8 ;
typedef  enum qed_override_force_load { ____Placeholder_qed_override_force_load } qed_override_force_load ;

/* Variables and functions */
 int /*<<< orphan*/  DRV_ROLE_KDUMP ; 
 int /*<<< orphan*/  DRV_ROLE_OS ; 
 int /*<<< orphan*/  DRV_ROLE_PREBOOT ; 
#define  QED_OVERRIDE_FORCE_LOAD_ALWAYS 129 
#define  QED_OVERRIDE_FORCE_LOAD_NEVER 128 

__attribute__((used)) static bool
qed_mcp_can_force_load(u8 drv_role,
		       u8 exist_drv_role,
		       enum qed_override_force_load override_force_load)
{
	bool can_force_load = false;

	switch (override_force_load) {
	case QED_OVERRIDE_FORCE_LOAD_ALWAYS:
		can_force_load = true;
		break;
	case QED_OVERRIDE_FORCE_LOAD_NEVER:
		can_force_load = false;
		break;
	default:
		can_force_load = (drv_role == DRV_ROLE_OS &&
				  exist_drv_role == DRV_ROLE_PREBOOT) ||
				 (drv_role == DRV_ROLE_KDUMP &&
				  exist_drv_role == DRV_ROLE_OS);
		break;
	}

	return can_force_load;
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
          int drv_role = 255;
          int exist_drv_role = 255;
          enum qed_override_force_load override_force_load = 0;
          int benchRet = qed_mcp_can_force_load(drv_role,exist_drv_role,override_force_load);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
