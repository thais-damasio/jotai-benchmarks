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
struct ibmvfc_host {int state; } ;

/* Variables and functions */
 int DID_NO_CONNECT ; 
 int DID_REQUEUE ; 
#define  IBMVFC_ACTIVE 134 
#define  IBMVFC_HALTED 133 
#define  IBMVFC_HOST_OFFLINE 132 
#define  IBMVFC_INITIALIZING 131 
#define  IBMVFC_LINK_DEAD 130 
#define  IBMVFC_LINK_DOWN 129 
#define  IBMVFC_NO_CRQ 128 

__attribute__((used)) static inline int ibmvfc_host_chkready(struct ibmvfc_host *vhost)
{
	int result = 0;

	switch (vhost->state) {
	case IBMVFC_LINK_DEAD:
	case IBMVFC_HOST_OFFLINE:
		result = DID_NO_CONNECT << 16;
		break;
	case IBMVFC_NO_CRQ:
	case IBMVFC_INITIALIZING:
	case IBMVFC_HALTED:
	case IBMVFC_LINK_DOWN:
		result = DID_REQUEUE << 16;
		break;
	case IBMVFC_ACTIVE:
		result = 0;
		break;
	}

	return result;
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
          int _len_vhost0 = 1;
          struct ibmvfc_host * vhost = (struct ibmvfc_host *) malloc(_len_vhost0*sizeof(struct ibmvfc_host));
          for(int _i0 = 0; _i0 < _len_vhost0; _i0++) {
            vhost->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ibmvfc_host_chkready(vhost);
          printf("%d\n", benchRet); 
          free(vhost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}