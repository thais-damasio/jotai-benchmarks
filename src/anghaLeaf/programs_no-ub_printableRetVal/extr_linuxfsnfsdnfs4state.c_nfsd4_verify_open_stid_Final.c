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
struct nfs4_stid {int sc_type; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
#define  NFS4_CLOSED_DELEG_STID 130 
#define  NFS4_CLOSED_STID 129 
#define  NFS4_REVOKED_DELEG_STID 128 
 int /*<<< orphan*/  nfs_ok ; 
 int /*<<< orphan*/  nfserr_bad_stateid ; 
 int /*<<< orphan*/  nfserr_deleg_revoked ; 

__attribute__((used)) static __be32
nfsd4_verify_open_stid(struct nfs4_stid *s)
{
	__be32 ret = nfs_ok;

	switch (s->sc_type) {
	default:
		break;
	case 0:
	case NFS4_CLOSED_STID:
	case NFS4_CLOSED_DELEG_STID:
		ret = nfserr_bad_stateid;
		break;
	case NFS4_REVOKED_DELEG_STID:
		ret = nfserr_deleg_revoked;
	}
	return ret;
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
          int _len_s0 = 1;
          struct nfs4_stid * s = (struct nfs4_stid *) malloc(_len_s0*sizeof(struct nfs4_stid));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->sc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_verify_open_stid(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}