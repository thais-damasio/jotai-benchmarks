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
typedef  int /*<<< orphan*/  uint ;
typedef  int /*<<< orphan*/  u8 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int /*<<< orphan*/  wireless_mode; } ;
struct _adapter {TYPE_1__ registrypriv; } ;

/* Variables and functions */
 scalar_t__ QUERY_OID ; 
 int /*<<< orphan*/  RNDIS_STATUS_INVALID_LENGTH ; 
 int /*<<< orphan*/  RNDIS_STATUS_NOT_ACCEPTED ; 
 int /*<<< orphan*/  RNDIS_STATUS_SUCCESS ; 
 scalar_t__ SET_OID ; 

uint oid_rt_wireless_mode_hdl(struct oid_par_priv *poid_par_priv)
{
	uint status = RNDIS_STATUS_SUCCESS;
	struct _adapter *Adapter = (struct _adapter *)
				   (poid_par_priv->adapter_context);

	if (poid_par_priv->type_of_oid == SET_OID) {
		if (poid_par_priv->information_buf_len >= sizeof(u8))
			Adapter->registrypriv.wireless_mode =
					*(u8 *)poid_par_priv->information_buf;
		else
			status = RNDIS_STATUS_INVALID_LENGTH;
	} else if (poid_par_priv->type_of_oid == QUERY_OID) {
		if (poid_par_priv->information_buf_len >= sizeof(u8)) {
			*(u8 *)poid_par_priv->information_buf =
					 Adapter->registrypriv.wireless_mode;
			*poid_par_priv->bytes_rw =
					poid_par_priv->information_buf_len;
		} else {
			status = RNDIS_STATUS_INVALID_LENGTH;
		}
	} else {
		status = RNDIS_STATUS_NOT_ACCEPTED;
	}
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

    // int-bounds
    case 0:
    {
          int _len_poid_par_priv0 = 1;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv[_i0].type_of_oid = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].information_buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_poid_par_priv__i0__bytes_rw0 = 1;
          poid_par_priv[_i0].bytes_rw = (int *) malloc(_len_poid_par_priv__i0__bytes_rw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_poid_par_priv__i0__bytes_rw0; _j0++) {
            poid_par_priv[_i0].bytes_rw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        poid_par_priv[_i0].information_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].adapter_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_wireless_mode_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_poid_par_priv0; _aux++) {
          free(poid_par_priv[_aux].bytes_rw);
          }
          free(poid_par_priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_poid_par_priv0 = 65025;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv[_i0].type_of_oid = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].information_buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_poid_par_priv__i0__bytes_rw0 = 1;
          poid_par_priv[_i0].bytes_rw = (int *) malloc(_len_poid_par_priv__i0__bytes_rw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_poid_par_priv__i0__bytes_rw0; _j0++) {
            poid_par_priv[_i0].bytes_rw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        poid_par_priv[_i0].information_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].adapter_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_wireless_mode_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_poid_par_priv0; _aux++) {
          free(poid_par_priv[_aux].bytes_rw);
          }
          free(poid_par_priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_poid_par_priv0 = 100;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv[_i0].type_of_oid = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].information_buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_poid_par_priv__i0__bytes_rw0 = 1;
          poid_par_priv[_i0].bytes_rw = (int *) malloc(_len_poid_par_priv__i0__bytes_rw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_poid_par_priv__i0__bytes_rw0; _j0++) {
            poid_par_priv[_i0].bytes_rw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        poid_par_priv[_i0].information_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        poid_par_priv[_i0].adapter_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_wireless_mode_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_poid_par_priv0; _aux++) {
          free(poid_par_priv[_aux].bytes_rw);
          }
          free(poid_par_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
