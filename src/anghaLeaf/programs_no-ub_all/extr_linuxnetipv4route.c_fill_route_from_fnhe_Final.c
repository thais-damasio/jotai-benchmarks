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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  expires; } ;
struct rtable {int rt_uses_gateway; scalar_t__ rt_gateway; int /*<<< orphan*/  rt_flags; TYPE_1__ dst; int /*<<< orphan*/  rt_mtu_locked; int /*<<< orphan*/  rt_pmtu; } ;
struct fib_nh_exception {scalar_t__ fnhe_gw; int /*<<< orphan*/  fnhe_expires; int /*<<< orphan*/  fnhe_mtu_locked; int /*<<< orphan*/  fnhe_pmtu; } ;

/* Variables and functions */
 int /*<<< orphan*/  RTCF_REDIRECTED ; 

__attribute__((used)) static void fill_route_from_fnhe(struct rtable *rt, struct fib_nh_exception *fnhe)
{
	rt->rt_pmtu = fnhe->fnhe_pmtu;
	rt->rt_mtu_locked = fnhe->fnhe_mtu_locked;
	rt->dst.expires = fnhe->fnhe_expires;

	if (fnhe->fnhe_gw) {
		rt->rt_flags |= RTCF_REDIRECTED;
		rt->rt_gateway = fnhe->fnhe_gw;
		rt->rt_uses_gateway = 1;
	}
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
          int _len_rt0 = 1;
          struct rtable * rt = (struct rtable *) malloc(_len_rt0*sizeof(struct rtable));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt->rt_uses_gateway = ((-2 * (next_i()%2)) + 1) * next_i();
        rt->rt_gateway = ((-2 * (next_i()%2)) + 1) * next_i();
        rt->rt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rt->dst.expires = ((-2 * (next_i()%2)) + 1) * next_i();
        rt->rt_mtu_locked = ((-2 * (next_i()%2)) + 1) * next_i();
        rt->rt_pmtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fnhe0 = 1;
          struct fib_nh_exception * fnhe = (struct fib_nh_exception *) malloc(_len_fnhe0*sizeof(struct fib_nh_exception));
          for(int _i0 = 0; _i0 < _len_fnhe0; _i0++) {
            fnhe->fnhe_gw = ((-2 * (next_i()%2)) + 1) * next_i();
        fnhe->fnhe_expires = ((-2 * (next_i()%2)) + 1) * next_i();
        fnhe->fnhe_mtu_locked = ((-2 * (next_i()%2)) + 1) * next_i();
        fnhe->fnhe_pmtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_route_from_fnhe(rt,fnhe);
          free(rt);
          free(fnhe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}