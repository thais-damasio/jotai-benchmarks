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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ action_code; } ;
struct TYPE_6__ {TYPE_1__ mesh_action; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; } ;

/* Variables and functions */
 scalar_t__ WLAN_MESH_ACTION_HWMP_PATH_SELECTION ; 

bool mesh_action_is_path_sel(struct ieee80211_mgmt *mgmt)
{
	return (mgmt->u.action.u.mesh_action.action_code ==
			WLAN_MESH_ACTION_HWMP_PATH_SELECTION);
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
          int _len_mgmt0 = 1;
          struct ieee80211_mgmt * mgmt = (struct ieee80211_mgmt *) malloc(_len_mgmt0*sizeof(struct ieee80211_mgmt));
          for(int _i0 = 0; _i0 < _len_mgmt0; _i0++) {
            mgmt->u.action.u.mesh_action.action_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mesh_action_is_path_sel(mgmt);
          printf("%d\n", benchRet); 
          free(mgmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
