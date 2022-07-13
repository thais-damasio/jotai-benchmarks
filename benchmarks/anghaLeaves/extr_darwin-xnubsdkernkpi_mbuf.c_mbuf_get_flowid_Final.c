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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int16_t ;
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_4__ {int pkt_flags; scalar_t__ drv_flowid; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int M_PKTHDR ; 
 int PKTF_DRIVER_MTAG ; 

errno_t
mbuf_get_flowid(mbuf_t m, u_int16_t *flowid)
{
	if (m == NULL || !(m->m_flags & M_PKTHDR) || flowid == NULL)
		return (EINVAL);

	if ((m->m_pkthdr.pkt_flags & PKTF_DRIVER_MTAG) == 0) {
		*flowid = 0;
	} else {
		*flowid = m->m_pkthdr.drv_flowid;
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

    // int-bounds
    case 0:
    {
          int _len_m0 = 1;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.drv_flowid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flowid0 = 1;
          long * flowid = (long *) malloc(_len_flowid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_flowid0; _i0++) {
            flowid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbuf_get_flowid(m,flowid);
          printf("%d\n", benchRet); 
          free(m);
          free(flowid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_m0 = 65025;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.drv_flowid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flowid0 = 65025;
          long * flowid = (long *) malloc(_len_flowid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_flowid0; _i0++) {
            flowid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbuf_get_flowid(m,flowid);
          printf("%d\n", benchRet); 
          free(m);
          free(flowid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_m0 = 100;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.drv_flowid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flowid0 = 100;
          long * flowid = (long *) malloc(_len_flowid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_flowid0; _i0++) {
            flowid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbuf_get_flowid(m,flowid);
          printf("%d\n", benchRet); 
          free(m);
          free(flowid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
