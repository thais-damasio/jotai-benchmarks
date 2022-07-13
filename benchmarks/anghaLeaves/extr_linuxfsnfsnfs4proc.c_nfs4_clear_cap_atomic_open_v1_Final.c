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

/* Type definitions */
struct nfs_server {int caps; } ;
struct nfs4_exception {int retry; } ;

/* Variables and functions */
 int EINVAL ; 
 int NFS_CAP_ATOMIC_OPEN_V1 ; 

__attribute__((used)) static bool nfs4_clear_cap_atomic_open_v1(struct nfs_server *server,
		int err, struct nfs4_exception *exception)
{
	if (err != -EINVAL)
		return false;
	if (!(server->caps & NFS_CAP_ATOMIC_OPEN_V1))
		return false;
	server->caps &= ~NFS_CAP_ATOMIC_OPEN_V1;
	exception->retry = 1;
	return true;
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
          int err = 100;
          int _len_server0 = 1;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exception0 = 1;
          struct nfs4_exception * exception = (struct nfs4_exception *) malloc(_len_exception0*sizeof(struct nfs4_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
            exception[_i0].retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs4_clear_cap_atomic_open_v1(server,err,exception);
          printf("%d\n", benchRet); 
          free(server);
          free(exception);
        
        break;
    }
    // big-arr
    case 1:
    {
          int err = 255;
          int _len_server0 = 65025;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exception0 = 65025;
          struct nfs4_exception * exception = (struct nfs4_exception *) malloc(_len_exception0*sizeof(struct nfs4_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
            exception[_i0].retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs4_clear_cap_atomic_open_v1(server,err,exception);
          printf("%d\n", benchRet); 
          free(server);
          free(exception);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int err = 10;
          int _len_server0 = 100;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exception0 = 100;
          struct nfs4_exception * exception = (struct nfs4_exception *) malloc(_len_exception0*sizeof(struct nfs4_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
            exception[_i0].retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs4_clear_cap_atomic_open_v1(server,err,exception);
          printf("%d\n", benchRet); 
          free(server);
          free(exception);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
