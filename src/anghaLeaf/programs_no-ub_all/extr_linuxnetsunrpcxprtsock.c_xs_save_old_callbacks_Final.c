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
struct sock_xprt {int /*<<< orphan*/  old_error_report; int /*<<< orphan*/  old_write_space; int /*<<< orphan*/  old_state_change; int /*<<< orphan*/  old_data_ready; } ;
struct sock {int /*<<< orphan*/  sk_error_report; int /*<<< orphan*/  sk_write_space; int /*<<< orphan*/  sk_state_change; int /*<<< orphan*/  sk_data_ready; } ;

/* Variables and functions */

__attribute__((used)) static void xs_save_old_callbacks(struct sock_xprt *transport, struct sock *sk)
{
	transport->old_data_ready = sk->sk_data_ready;
	transport->old_state_change = sk->sk_state_change;
	transport->old_write_space = sk->sk_write_space;
	transport->old_error_report = sk->sk_error_report;
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
          int _len_transport0 = 1;
          struct sock_xprt * transport = (struct sock_xprt *) malloc(_len_transport0*sizeof(struct sock_xprt));
          for(int _i0 = 0; _i0 < _len_transport0; _i0++) {
            transport->old_error_report = ((-2 * (next_i()%2)) + 1) * next_i();
        transport->old_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        transport->old_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        transport->old_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk->sk_error_report = ((-2 * (next_i()%2)) + 1) * next_i();
        sk->sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        sk->sk_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        sk->sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xs_save_old_callbacks(transport,sk);
          free(transport);
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
