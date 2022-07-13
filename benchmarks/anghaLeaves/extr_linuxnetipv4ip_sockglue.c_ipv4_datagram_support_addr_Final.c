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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ ee_origin; } ;
struct sock_exterr_skb {scalar_t__ port; TYPE_1__ ee; } ;

/* Variables and functions */
 scalar_t__ SO_EE_ORIGIN_ICMP ; 
 scalar_t__ SO_EE_ORIGIN_LOCAL ; 

__attribute__((used)) static inline bool ipv4_datagram_support_addr(struct sock_exterr_skb *serr)
{
	return serr->ee.ee_origin == SO_EE_ORIGIN_ICMP ||
	       serr->ee.ee_origin == SO_EE_ORIGIN_LOCAL || serr->port;
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
          int _len_serr0 = 1;
          struct sock_exterr_skb * serr = (struct sock_exterr_skb *) malloc(_len_serr0*sizeof(struct sock_exterr_skb));
          for(int _i0 = 0; _i0 < _len_serr0; _i0++) {
            serr[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        serr[_i0].ee.ee_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipv4_datagram_support_addr(serr);
          printf("%d\n", benchRet); 
          free(serr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_serr0 = 65025;
          struct sock_exterr_skb * serr = (struct sock_exterr_skb *) malloc(_len_serr0*sizeof(struct sock_exterr_skb));
          for(int _i0 = 0; _i0 < _len_serr0; _i0++) {
            serr[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        serr[_i0].ee.ee_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipv4_datagram_support_addr(serr);
          printf("%d\n", benchRet); 
          free(serr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_serr0 = 100;
          struct sock_exterr_skb * serr = (struct sock_exterr_skb *) malloc(_len_serr0*sizeof(struct sock_exterr_skb));
          for(int _i0 = 0; _i0 < _len_serr0; _i0++) {
            serr[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        serr[_i0].ee.ee_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipv4_datagram_support_addr(serr);
          printf("%d\n", benchRet); 
          free(serr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
