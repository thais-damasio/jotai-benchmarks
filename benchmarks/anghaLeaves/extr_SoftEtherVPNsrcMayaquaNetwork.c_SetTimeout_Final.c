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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Type; scalar_t__ TimeOut; } ;
typedef  TYPE_1__ SOCK ;

/* Variables and functions */
 scalar_t__ INFINITE ; 
 scalar_t__ SOCK_INPROC ; 
 scalar_t__ SOCK_UDP ; 
 scalar_t__ TIMEOUT_INFINITE ; 

void SetTimeout(SOCK *sock, UINT timeout)
{
	// Validate arguments
	if (sock == NULL)
	{
		return;
	}
	if (sock->Type == SOCK_UDP)
	{
		return;
	}

	if (timeout == INFINITE)
	{
		timeout = TIMEOUT_INFINITE;
	}

	sock->TimeOut = timeout;

//	Debug("SetTimeout(%u)\n",timeout);

	if (sock->Type != SOCK_INPROC)
	{
#ifdef OS_WIN32
		setsockopt(sock->socket, SOL_SOCKET, SO_SNDTIMEO, (char *)&timeout, sizeof(UINT));
		setsockopt(sock->socket, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(UINT));
#endif

#ifdef OS_UNIX
#ifndef UNIX_SOLARIS
		{
			struct timeval tv_timeout;

			tv_timeout.tv_sec = timeout / 1000; // miliseconds to seconds
			tv_timeout.tv_usec = (timeout % 1000) * 1000; // miliseconds to microseconds

			(void)setsockopt(sock->socket, SOL_SOCKET, SO_SNDTIMEO, (char *)&tv_timeout, sizeof(tv_timeout));
			(void)setsockopt(sock->socket, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv_timeout, sizeof(tv_timeout));
		}
#endif // UNIX_SOLARIS
#endif // OS_UNIX
	}
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
          long timeout = 100;
          int _len_sock0 = 1;
          struct TYPE_3__ * sock = (struct TYPE_3__ *) malloc(_len_sock0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].Type = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].TimeOut = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SetTimeout(sock,timeout);
          free(sock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
