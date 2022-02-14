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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int scan_cmd_construct_state; } ;
struct TYPE_4__ {TYPE_1__ scan_state_set; } ;
struct halmac_adapter {TYPE_2__ halmac_state; } ;
typedef  enum halmac_scan_cmd_construct_state { ____Placeholder_halmac_scan_cmd_construct_state } halmac_scan_cmd_construct_state ;

/* Variables and functions */

enum halmac_scan_cmd_construct_state
halmac_query_scan_curr_state_88xx(struct halmac_adapter *halmac_adapter)
{
	return halmac_adapter->halmac_state.scan_state_set
		.scan_cmd_construct_state;
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
          int _len_halmac_adapter0 = 1;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter->halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_scan_cmd_construct_state benchRet = halmac_query_scan_curr_state_88xx(halmac_adapter);
          printf("{{struct}} %p\n", &benchRet); 
          free(halmac_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}