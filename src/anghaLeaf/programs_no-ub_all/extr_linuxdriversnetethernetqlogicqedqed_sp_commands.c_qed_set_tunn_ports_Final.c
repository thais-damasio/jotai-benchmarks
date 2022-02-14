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
struct TYPE_4__ {int /*<<< orphan*/  port; scalar_t__ b_update_port; } ;
struct TYPE_3__ {int /*<<< orphan*/  port; scalar_t__ b_update_port; } ;
struct qed_tunnel_info {TYPE_2__ vxlan_port; TYPE_1__ geneve_port; } ;

/* Variables and functions */

__attribute__((used)) static void qed_set_tunn_ports(struct qed_tunnel_info *p_tun,
			       struct qed_tunnel_info *p_src)
{
	p_tun->geneve_port.b_update_port = p_src->geneve_port.b_update_port;
	p_tun->vxlan_port.b_update_port = p_src->vxlan_port.b_update_port;

	if (p_src->geneve_port.b_update_port)
		p_tun->geneve_port.port = p_src->geneve_port.port;

	if (p_src->vxlan_port.b_update_port)
		p_tun->vxlan_port.port = p_src->vxlan_port.port;
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
          int _len_p_tun0 = 1;
          struct qed_tunnel_info * p_tun = (struct qed_tunnel_info *) malloc(_len_p_tun0*sizeof(struct qed_tunnel_info));
          for(int _i0 = 0; _i0 < _len_p_tun0; _i0++) {
            p_tun->vxlan_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->vxlan_port.b_update_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->geneve_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->geneve_port.b_update_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_src0 = 1;
          struct qed_tunnel_info * p_src = (struct qed_tunnel_info *) malloc(_len_p_src0*sizeof(struct qed_tunnel_info));
          for(int _i0 = 0; _i0 < _len_p_src0; _i0++) {
            p_src->vxlan_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src->vxlan_port.b_update_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src->geneve_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src->geneve_port.b_update_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_set_tunn_ports(p_tun,p_src);
          free(p_tun);
          free(p_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}