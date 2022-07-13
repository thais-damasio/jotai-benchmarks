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
struct bpf_reg_state {scalar_t__ umin_value; scalar_t__ umax_value; scalar_t__ smin_value; scalar_t__ smax_value; } ;

/* Variables and functions */

__attribute__((used)) static bool range_within(struct bpf_reg_state *old,
			 struct bpf_reg_state *cur)
{
	return old->umin_value <= cur->umin_value &&
	       old->umax_value >= cur->umax_value &&
	       old->smin_value <= cur->smin_value &&
	       old->smax_value >= cur->smax_value;
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
          int _len_old0 = 1;
          struct bpf_reg_state * old = (struct bpf_reg_state *) malloc(_len_old0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur0 = 1;
          struct bpf_reg_state * cur = (struct bpf_reg_state *) malloc(_len_cur0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_within(old,cur);
          printf("%d\n", benchRet); 
          free(old);
          free(cur);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_old0 = 65025;
          struct bpf_reg_state * old = (struct bpf_reg_state *) malloc(_len_old0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur0 = 65025;
          struct bpf_reg_state * cur = (struct bpf_reg_state *) malloc(_len_cur0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_within(old,cur);
          printf("%d\n", benchRet); 
          free(old);
          free(cur);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_old0 = 100;
          struct bpf_reg_state * old = (struct bpf_reg_state *) malloc(_len_old0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur0 = 100;
          struct bpf_reg_state * cur = (struct bpf_reg_state *) malloc(_len_cur0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cur[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_within(old,cur);
          printf("%d\n", benchRet); 
          free(old);
          free(cur);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
