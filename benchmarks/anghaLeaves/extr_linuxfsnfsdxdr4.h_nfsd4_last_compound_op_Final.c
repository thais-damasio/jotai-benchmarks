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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct svc_rqst {struct nfsd4_compoundargs* rq_argp; struct nfsd4_compoundres* rq_resp; } ;
struct nfsd4_compoundres {scalar_t__ opcnt; } ;
struct nfsd4_compoundargs {scalar_t__ opcnt; } ;

/* Variables and functions */

__attribute__((used)) static inline bool nfsd4_last_compound_op(struct svc_rqst *rqstp)
{
	struct nfsd4_compoundres *resp = rqstp->rq_resp;
	struct nfsd4_compoundargs *argp = rqstp->rq_argp;

	return argp->opcnt == resp->opcnt;
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
          int _len_rqstp0 = 1;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_argp0 = 1;
          rqstp[_i0].rq_argp = (struct nfsd4_compoundargs *) malloc(_len_rqstp__i0__rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_argp0; _j0++) {
            rqstp[_i0].rq_argp->opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rqstp__i0__rq_resp0 = 1;
          rqstp[_i0].rq_resp = (struct nfsd4_compoundres *) malloc(_len_rqstp__i0__rq_resp0*sizeof(struct nfsd4_compoundres));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_resp0; _j0++) {
            rqstp[_i0].rq_resp->opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfsd4_last_compound_op(rqstp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(rqstp[_aux].rq_argp);
          }
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(rqstp[_aux].rq_resp);
          }
          free(rqstp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
