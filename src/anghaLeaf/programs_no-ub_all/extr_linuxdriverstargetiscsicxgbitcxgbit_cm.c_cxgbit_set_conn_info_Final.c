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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  ss_family; } ;
struct iscsi_np {TYPE_1__ np_sockaddr; } ;
struct iscsi_conn {int /*<<< orphan*/  local_sockaddr; int /*<<< orphan*/  login_sockaddr; int /*<<< orphan*/  login_family; } ;
struct TYPE_4__ {int /*<<< orphan*/  local_addr; int /*<<< orphan*/  remote_addr; } ;
struct cxgbit_sock {TYPE_2__ com; } ;

/* Variables and functions */

__attribute__((used)) static void
cxgbit_set_conn_info(struct iscsi_np *np, struct iscsi_conn *conn,
		     struct cxgbit_sock *csk)
{
	conn->login_family = np->np_sockaddr.ss_family;
	conn->login_sockaddr = csk->com.remote_addr;
	conn->local_sockaddr = csk->com.local_addr;
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
          int _len_np0 = 1;
          struct iscsi_np * np = (struct iscsi_np *) malloc(_len_np0*sizeof(struct iscsi_np));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np->np_sockaddr.ss_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn0 = 1;
          struct iscsi_conn * conn = (struct iscsi_conn *) malloc(_len_conn0*sizeof(struct iscsi_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn->local_sockaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        conn->login_sockaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        conn->login_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csk0 = 1;
          struct cxgbit_sock * csk = (struct cxgbit_sock *) malloc(_len_csk0*sizeof(struct cxgbit_sock));
          for(int _i0 = 0; _i0 < _len_csk0; _i0++) {
            csk->com.local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        csk->com.remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cxgbit_set_conn_info(np,conn,csk);
          free(np);
          free(conn);
          free(csk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
