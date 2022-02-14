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
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef  int /*<<< orphan*/  protocol_family_t ;
typedef  int /*<<< orphan*/  errno_t ;

/* Variables and functions */
 int /*<<< orphan*/  ENXIO ; 

__attribute__((used)) static errno_t
ifproto_media_input_v1(struct ifnet *ifp, protocol_family_t protocol,
    struct mbuf *packet, char *header)
{
#pragma unused(ifp, protocol, packet, header)
	return (ENXIO);
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
          int protocol = 255;
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 1;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_header0 = 65025;
          char * header = (char *) malloc(_len_header0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifproto_media_input_v1(ifp,protocol,packet,header);
          printf("%d\n", benchRet); 
          free(ifp);
          free(packet);
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
