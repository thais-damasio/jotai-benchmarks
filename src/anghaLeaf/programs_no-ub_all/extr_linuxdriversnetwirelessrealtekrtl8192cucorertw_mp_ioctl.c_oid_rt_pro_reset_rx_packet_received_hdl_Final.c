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
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int /*<<< orphan*/  adapter_context; } ;
typedef  int /*<<< orphan*/  ULONG ;
struct TYPE_3__ {scalar_t__ rx_crcerrpktcount; scalar_t__ rx_pktcount; } ;
struct TYPE_4__ {TYPE_1__ mppriv; } ;
typedef  TYPE_2__* PADAPTER ;
typedef  int /*<<< orphan*/  NDIS_STATUS ;

/* Variables and functions */
 int /*<<< orphan*/  NDIS_STATUS_INVALID_LENGTH ; 
 int /*<<< orphan*/  NDIS_STATUS_NOT_ACCEPTED ; 
 int /*<<< orphan*/  NDIS_STATUS_SUCCESS ; 
 scalar_t__ SET_OID ; 
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

NDIS_STATUS oid_rt_pro_reset_rx_packet_received_hdl(struct oid_par_priv *poid_par_priv)
{
	NDIS_STATUS	status = NDIS_STATUS_SUCCESS;
	PADAPTER	Adapter = (PADAPTER)(poid_par_priv->adapter_context);

_func_enter_;

	if (poid_par_priv->type_of_oid != SET_OID)
	{
		status = NDIS_STATUS_NOT_ACCEPTED;
		return status;
	}

	if (poid_par_priv->information_buf_len == sizeof(ULONG)) {
		Adapter->mppriv.rx_pktcount = 0;
		Adapter->mppriv.rx_crcerrpktcount = 0;
	} else {
		status = NDIS_STATUS_INVALID_LENGTH;
	}

_func_exit_;

	return status;
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
          int _len_poid_par_priv0 = 1;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv->type_of_oid = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv->information_buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv->adapter_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_pro_reset_rx_packet_received_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          free(poid_par_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}