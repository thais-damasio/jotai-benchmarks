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
struct nfsd4_channel_attrs {scalar_t__ maxreq_sz; scalar_t__ maxresp_sz; int maxops; scalar_t__ maxresp_cached; scalar_t__ headerpadsz; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 scalar_t__ NFSD_CB_MAX_REQ_SZ ; 
 scalar_t__ NFSD_CB_MAX_RESP_SZ ; 
 int /*<<< orphan*/  nfs_ok ; 
 int /*<<< orphan*/  nfserr_toosmall ; 

__attribute__((used)) static __be32 check_backchannel_attrs(struct nfsd4_channel_attrs *ca)
{
	ca->headerpadsz = 0;

	if (ca->maxreq_sz < NFSD_CB_MAX_REQ_SZ)
		return nfserr_toosmall;
	if (ca->maxresp_sz < NFSD_CB_MAX_RESP_SZ)
		return nfserr_toosmall;
	ca->maxresp_cached = 0;
	if (ca->maxops < 2)
		return nfserr_toosmall;

	return nfs_ok;
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
          int _len_ca0 = 1;
          struct nfsd4_channel_attrs * ca = (struct nfsd4_channel_attrs *) malloc(_len_ca0*sizeof(struct nfsd4_channel_attrs));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca->maxreq_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->maxresp_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->maxops = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->maxresp_cached = ((-2 * (next_i()%2)) + 1) * next_i();
        ca->headerpadsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_backchannel_attrs(ca);
          printf("%d\n", benchRet); 
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
