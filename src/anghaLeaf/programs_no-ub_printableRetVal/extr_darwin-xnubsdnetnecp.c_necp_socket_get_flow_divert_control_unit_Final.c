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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int32_t ;
struct TYPE_4__ {int /*<<< orphan*/  flow_divert_control_unit; } ;
struct TYPE_5__ {scalar_t__ result; TYPE_1__ result_parameter; } ;
struct TYPE_6__ {TYPE_2__ results; } ;
struct inpcb {TYPE_3__ inp_policyresult; } ;

/* Variables and functions */
 scalar_t__ NECP_KERNEL_POLICY_RESULT_SOCKET_DIVERT ; 

u_int32_t
necp_socket_get_flow_divert_control_unit(struct inpcb *inp)
{
	if (inp == NULL) {
		return (0);
	}

	if (inp->inp_policyresult.results.result == NECP_KERNEL_POLICY_RESULT_SOCKET_DIVERT) {
		return (inp->inp_policyresult.results.result_parameter.flow_divert_control_unit);
	}

	return (0);
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
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp->inp_policyresult.results.result = ((-2 * (next_i()%2)) + 1) * next_i();
        inp->inp_policyresult.results.result_parameter.flow_divert_control_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_socket_get_flow_divert_control_unit(inp);
          printf("%d\n", benchRet); 
          free(inp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}