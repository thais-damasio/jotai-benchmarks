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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int NoIPv6DefaultRouterInRAWhenIPv6; int ManageOnlyPrivateIP; int ManageOnlyLocalUnicastIPv6; int NoMacAddressLog; int NoDhcpPacketLogOutsideHub; int RemoveDefGwOnDhcpForLocalhost; int /*<<< orphan*/  FloodingSendQueueBufferQuota; int /*<<< orphan*/  AccessListIncludeFileCacheLifetime; int /*<<< orphan*/  VlanTypeId; scalar_t__ MaxSession; } ;
typedef  TYPE_1__ HUB_OPTION ;

/* Variables and functions */
 int /*<<< orphan*/  ACCESS_LIST_INCLUDE_FILE_CACHE_LIFETIME ; 
 int /*<<< orphan*/  DEFAULT_FLOODING_QUEUE_LENGTH ; 
 int /*<<< orphan*/  MAC_PROTO_TAGVLAN ; 

void SiSetDefaultHubOption(HUB_OPTION *o)
{
	// Validate arguments
	if (o == NULL)
	{
		return;
	}

	o->MaxSession = 0;
	o->VlanTypeId = MAC_PROTO_TAGVLAN;
	o->NoIPv6DefaultRouterInRAWhenIPv6 = true;
	o->ManageOnlyPrivateIP = true;
	o->ManageOnlyLocalUnicastIPv6 = true;
	o->NoMacAddressLog = true;
	o->NoDhcpPacketLogOutsideHub = true;
	o->AccessListIncludeFileCacheLifetime = ACCESS_LIST_INCLUDE_FILE_CACHE_LIFETIME;
	o->RemoveDefGwOnDhcpForLocalhost = true;
	o->FloodingSendQueueBufferQuota = DEFAULT_FLOODING_QUEUE_LENGTH;
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
          int _len_o0 = 1;
          struct TYPE_3__ * o = (struct TYPE_3__ *) malloc(_len_o0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o->NoIPv6DefaultRouterInRAWhenIPv6 = ((-2 * (next_i()%2)) + 1) * next_i();
        o->ManageOnlyPrivateIP = ((-2 * (next_i()%2)) + 1) * next_i();
        o->ManageOnlyLocalUnicastIPv6 = ((-2 * (next_i()%2)) + 1) * next_i();
        o->NoMacAddressLog = ((-2 * (next_i()%2)) + 1) * next_i();
        o->NoDhcpPacketLogOutsideHub = ((-2 * (next_i()%2)) + 1) * next_i();
        o->RemoveDefGwOnDhcpForLocalhost = ((-2 * (next_i()%2)) + 1) * next_i();
        o->FloodingSendQueueBufferQuota = ((-2 * (next_i()%2)) + 1) * next_i();
        o->AccessListIncludeFileCacheLifetime = ((-2 * (next_i()%2)) + 1) * next_i();
        o->VlanTypeId = ((-2 * (next_i()%2)) + 1) * next_i();
        o->MaxSession = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiSetDefaultHubOption(o);
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}