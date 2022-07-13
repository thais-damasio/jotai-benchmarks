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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  necp_policy_id; } ;
struct TYPE_4__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
typedef  int /*<<< orphan*/  necp_kernel_policy_id ;

/* Variables and functions */
 int M_PKTHDR ; 
 int /*<<< orphan*/  NECP_KERNEL_POLICY_ID_NONE ; 

necp_kernel_policy_id
necp_get_policy_id_from_packet(struct mbuf *packet)
{
	if (packet == NULL || !(packet->m_flags & M_PKTHDR)) {
		return (NECP_KERNEL_POLICY_ID_NONE);
	}

	return (packet->m_pkthdr.necp_mtag.necp_policy_id);
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
          int _len_packet0 = 1;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_get_policy_id_from_packet(packet);
          printf("%d\n", benchRet); 
          free(packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_packet0 = 65025;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_get_policy_id_from_packet(packet);
          printf("%d\n", benchRet); 
          free(packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_packet0 = 100;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_get_policy_id_from_packet(packet);
          printf("%d\n", benchRet); 
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
