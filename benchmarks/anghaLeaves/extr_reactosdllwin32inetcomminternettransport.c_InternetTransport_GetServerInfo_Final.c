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
struct TYPE_3__ {scalar_t__ Status; int /*<<< orphan*/  ServerInfo; } ;
typedef  int /*<<< orphan*/ * LPINETSERVER ;
typedef  TYPE_1__ InternetTransport ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 scalar_t__ IXP_DISCONNECTED ; 
 int /*<<< orphan*/  IXP_E_NOT_CONNECTED ; 
 int /*<<< orphan*/  S_OK ; 

HRESULT InternetTransport_GetServerInfo(InternetTransport *This, LPINETSERVER pInetServer)
{
    if (This->Status == IXP_DISCONNECTED)
        return IXP_E_NOT_CONNECTED;

    *pInetServer = This->ServerInfo;
    return S_OK;
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
          int _len_This0 = 1;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].ServerInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pInetServer0 = 1;
          int * pInetServer = (int *) malloc(_len_pInetServer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pInetServer0; _i0++) {
            pInetServer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InternetTransport_GetServerInfo(This,pInetServer);
          printf("%d\n", benchRet); 
          free(This);
          free(pInetServer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
