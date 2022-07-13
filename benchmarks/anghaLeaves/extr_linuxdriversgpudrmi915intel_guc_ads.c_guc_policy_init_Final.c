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

/* Type definitions */
struct guc_policy {scalar_t__ policy_flags; int /*<<< orphan*/  fault_time; int /*<<< orphan*/  preemption_time; int /*<<< orphan*/  execution_quantum; } ;

/* Variables and functions */
 int /*<<< orphan*/  POLICY_DEFAULT_EXECUTION_QUANTUM_US ; 
 int /*<<< orphan*/  POLICY_DEFAULT_FAULT_TIME_US ; 
 int /*<<< orphan*/  POLICY_DEFAULT_PREEMPTION_TIME_US ; 

__attribute__((used)) static void guc_policy_init(struct guc_policy *policy)
{
	policy->execution_quantum = POLICY_DEFAULT_EXECUTION_QUANTUM_US;
	policy->preemption_time = POLICY_DEFAULT_PREEMPTION_TIME_US;
	policy->fault_time = POLICY_DEFAULT_FAULT_TIME_US;
	policy->policy_flags = 0;
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
          int _len_policy0 = 1;
          struct guc_policy * policy = (struct guc_policy *) malloc(_len_policy0*sizeof(struct guc_policy));
          for(int _i0 = 0; _i0 < _len_policy0; _i0++) {
            policy[_i0].policy_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].fault_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].preemption_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].execution_quantum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          guc_policy_init(policy);
          free(policy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_policy0 = 65025;
          struct guc_policy * policy = (struct guc_policy *) malloc(_len_policy0*sizeof(struct guc_policy));
          for(int _i0 = 0; _i0 < _len_policy0; _i0++) {
            policy[_i0].policy_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].fault_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].preemption_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].execution_quantum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          guc_policy_init(policy);
          free(policy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_policy0 = 100;
          struct guc_policy * policy = (struct guc_policy *) malloc(_len_policy0*sizeof(struct guc_policy));
          for(int _i0 = 0; _i0 < _len_policy0; _i0++) {
            policy[_i0].policy_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].fault_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].preemption_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].execution_quantum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          guc_policy_init(policy);
          free(policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
