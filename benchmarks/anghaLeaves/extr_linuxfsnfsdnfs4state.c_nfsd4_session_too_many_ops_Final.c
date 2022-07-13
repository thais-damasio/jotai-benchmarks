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
struct svc_rqst {struct nfsd4_compoundargs* rq_argp; } ;
struct TYPE_2__ {scalar_t__ maxops; } ;
struct nfsd4_session {TYPE_1__ se_fchannel; } ;
struct nfsd4_compoundargs {scalar_t__ opcnt; } ;

/* Variables and functions */

__attribute__((used)) static bool nfsd4_session_too_many_ops(struct svc_rqst *rqstp, struct nfsd4_session *session)
{
	struct nfsd4_compoundargs *args = rqstp->rq_argp;

	return args->opcnt > session->se_fchannel.maxops;
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
          }
          int _len_session0 = 1;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_fchannel.maxops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_session_too_many_ops(rqstp,session);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(rqstp[_aux].rq_argp);
          }
          free(rqstp);
          free(session);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_argp0 = 1;
          rqstp[_i0].rq_argp = (struct nfsd4_compoundargs *) malloc(_len_rqstp__i0__rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_argp0; _j0++) {
            rqstp[_i0].rq_argp->opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_session0 = 65025;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_fchannel.maxops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_session_too_many_ops(rqstp,session);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(rqstp[_aux].rq_argp);
          }
          free(rqstp);
          free(session);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_argp0 = 1;
          rqstp[_i0].rq_argp = (struct nfsd4_compoundargs *) malloc(_len_rqstp__i0__rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_argp0; _j0++) {
            rqstp[_i0].rq_argp->opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_session0 = 100;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_fchannel.maxops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_session_too_many_ops(rqstp,session);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(rqstp[_aux].rq_argp);
          }
          free(rqstp);
          free(session);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
